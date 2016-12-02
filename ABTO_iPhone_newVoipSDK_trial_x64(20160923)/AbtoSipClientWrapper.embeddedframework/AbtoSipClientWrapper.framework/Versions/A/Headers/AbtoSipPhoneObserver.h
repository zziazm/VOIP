//
//  AbtoSipPhoneObserver.h
//  AbtoSipClientApp
//
//  Copyright (c) 2015 ABTO Software. All rights reserved.
//

#ifndef AbtoSipClientApp_AbtoSipPhoneObserver_h
#define AbtoSipClientApp_AbtoSipPhoneObserver_h

typedef NS_ENUM(NSInteger, PhoneSignalingTransport) {
    PhoneSignalingTransportUdp = 0,
    PhoneSignalingTransportTcp,
    PhoneSignalingTransportTls
};

typedef NS_ENUM(NSInteger, PhoneCodecType) {
    PhoneCodecTypeUnsupported = 0,
    PhoneCodecTypeAudio,
    PhoneCodecTypeVideo
};

typedef NS_ENUM(NSInteger, PhoneVideoOrientation) {
    PhoneVideoOrientationPortrait = 0,
    PhoneVideoOrientationPortraitUpsideDown,
    PhoneVideoOrientationLandscapeRight,
    PhoneVideoOrientationLandscapeLeft
};

typedef NS_ENUM(NSInteger, PhoneInitializeState) {
    PhoneInitializeStateStart = 0,
    PhoneInitializeStateInfo,
    PhoneInitializeStateWarning,
    PhoneInitializeStateSuccess,
    PhoneInitializeStateFail
};

/**
 * Audio and Video Codecs
 */
typedef NS_ENUM(NSInteger, PhoneAudioVideoCodec) {
    PhoneAudioVideoCodecNone = 0,
    // audio codecs
    PhoneAudioVideoCodecAmr, /* CURRENTLY UNSUPPORTED */
    PhoneAudioVideoCodecGsm,
    PhoneAudioVideoCodecPcma,
    PhoneAudioVideoCodecPcmu,
    PhoneAudioVideoCodecIlbc,
    PhoneAudioVideoCodecSpeex,
    PhoneAudioVideoCodecBv16, /* CURRENTLY UNSUPPORTED */
    PhoneAudioVideoCodecBv32, /* CURRENTLY UNSUPPORTED */
    PhoneAudioVideoCodecEvrc, /* CURRENTLY UNSUPPORTED */
    PhoneAudioVideoCodecG729ab,
    PhoneAudioVideoCodecG722,
    PhoneAudioVideoCodecG722_1,
    PhoneAudioVideoCodecSilk,
    // video codecs
    PhoneAudioVideoCodecH261, /* CURRENTLY UNSUPPORTED */
    PhoneAudioVideoCodecH263, /* CURRENTLY UNSUPPORTED */
    PhoneAudioVideoCodecH263p,
    PhoneAudioVideoCodecH263pp, /* CURRENTLY UNSUPPORTED */
    PhoneAudioVideoCodecH264Bp10,
    PhoneAudioVideoCodecH264Bp20, /* CURRENTLY UNSUPPORTED */
    PhoneAudioVideoCodecH264Bp30, /* CURRENTLY UNSUPPORTED */
    PhoneAudioVideoCodecH264Svc, /* CURRENTLY UNSUPPORTED */
    PhoneAudioVideoCodecTheora, /* CURRENTLY UNSUPPORTED */
    PhoneAudioVideoCodecMp4vesEs, /* CURRENTLY UNSUPPORTED */
    PhoneAudioVideoCodecVp8,
    // audio codecs
    PhoneAudioVideoCodecOpus,
    PhoneAudioVideoCodecG723,
    // extra
    PhoneAudioVideoCodecCount
};

/**
 * Presence statuses
 */
typedef NS_ENUM(NSInteger, PhoneBuddyStatus) {
    PhoneBuddyStatusUnknown = 0,
    PhoneBuddyStatusOnline,
    PhoneBuddyStatusOffline,
    PhoneBuddyStatusBusy,
    PhoneBuddyStatusAway,
};

// Presence keys
extern NSString *const kBuddyId;
extern NSString *const kBuddyUri;
extern NSString *const kBuddyContact;
extern NSString *const kBuddyStatus;
extern NSString *const kBuddyStatusName;
extern NSString *const kBuddySubState;
extern NSString *const kBuddySubStateName;
extern NSString *const kBuddySubTermCode;
extern NSString *const kBuddySubTermName;
extern NSString *const kBuddyRpidCode;
extern NSString *const kBuddyPresence;

// Invalid call ID
extern NSInteger kInvalidCallId;

@interface AbtoPhoneMediaQuality : NSObject

@property(nonatomic, assign) NSInteger minRtt;
@property(nonatomic, assign) NSInteger maxRtt;
@property(nonatomic, assign) NSInteger avgRtt;

@property(nonatomic, assign) NSInteger minBufferJitter;
@property(nonatomic, assign) NSInteger maxBufferJitter;
@property(nonatomic, assign) NSInteger avgBufferJitter;
@property(nonatomic, assign) NSInteger devBufferJitter;
@property(nonatomic, assign) NSInteger burstJitter;
@property(nonatomic, assign) NSInteger avgBurstJitter;

@end

/**
 * Phone config interface
 */
@interface AbtoPhoneConfig : NSObject <NSCopying>

@property(nonatomic, assign) PhoneSignalingTransport signalingTransport;

@property(nonatomic, assign) BOOL enableSrtp;
@property(nonatomic, assign) BOOL enableZrtp;
@property(nonatomic, assign) BOOL enableProxy;
@property(nonatomic, assign) BOOL enableStun;
@property(nonatomic, assign) BOOL enableRingTone;
@property(nonatomic, assign) BOOL enableRingBackTone;
@property(nonatomic, assign) BOOL enableAutorotateCaptureDevice;

@property(nonatomic, retain) NSString *ua;
@property(nonatomic, retain) NSString *stun;
@property(nonatomic, retain) NSString *proxy;
@property(nonatomic, retain) NSString *localIp;
@property(nonatomic, retain) NSString *displayName;
@property(nonatomic, retain) NSString *tlsCaList;
@property(nonatomic, retain) NSString *ringToneUrl;
@property(nonatomic, retain) NSString *ringBackToneUrl;

@property(nonatomic, retain) NSString *regUser;
@property(nonatomic, retain) NSString *regDomain;
@property(nonatomic, retain) NSString *regAuthId;
@property(nonatomic, retain) NSString *regPassword;

@property(nonatomic, assign) int regExpirationTime;
@property(nonatomic, assign) int localPort;
@property(nonatomic, assign) int hangupTimeout;

- (id)initWithConfig:(AbtoPhoneConfig *)config;

- (void)setCodecPriority:(PhoneAudioVideoCodec)idx priority:(NSInteger)priority;
- (NSInteger)codecPriority:(PhoneAudioVideoCodec)idx;
- (BOOL)saveToUserDefaults:(NSString *)key;
- (void)setFromConfig:(AbtoPhoneConfig *)config;
- (BOOL)loadFromUserDefaults:(NSString *)key;

+ (NSString *)codecName:(PhoneAudioVideoCodec)idx;
+ (PhoneCodecType)codecType:(PhoneAudioVideoCodec)idx;
+ (id)loadFromUserDefaults:(NSString *)key;

@end

/**
 * Phone observer
 */
@protocol AbtoPhoneInterfaceObserver <NSObject>
@required

//- (void)onInitializeState:(PhoneInitializeState)state message:(NSString *)message;
- (void)onRegistered:(NSInteger)accId;
- (void)onRegistrationFailed:(NSInteger)accId statusCode:(int)statusCode statusText:(NSString *)statusText;
- (void)onUnRegistered:(NSInteger)accId;
- (void)onRemoteAlerting:(NSInteger)accId statusCode:(int)statusCode;

- (void)onIncomingCall:(NSInteger)callId remoteContact:(NSString *)remoteContact;
- (void)onCallConnected:(NSInteger)callId remoteContact:(NSString *)remoteContact;
- (void)onCallDisconnected:(NSInteger)callId remoteContact:(NSString *)remoteContact statusCode:(NSInteger)statusCode message:(NSString *)message;
- (void)onCallAlerting:(NSInteger)callId statusCode:(int)statusCode;

- (void)onCallHeld:(NSInteger)callId state:(BOOL)state;
- (void)onToneReceived:(NSInteger)callId tone:(NSInteger)tone;

- (void)onTextMessageReceived:(NSString *)from to:(NSString *)to body:(NSString *)body;
- (void)onTextMessageStatus:(NSString *)address reason:(NSString *)reason status:(BOOL)status;

- (void)onPresenceChanged:(NSString *)uri status:(PhoneBuddyStatus)status note:(NSString *)note;

- (void)onTransferStatus:(NSInteger)callId statusCode:(int)statusCode message:(NSString *)message;

@optional
- (void)onZrtpSas:(NSInteger)callId sas:(NSString *)sas;
- (void)onZrtpSecureState:(NSInteger)callId secured:(BOOL)secured;
- (void)onZrtpError:(NSInteger)callId error:(NSInteger)error subcode:(NSInteger)subcode;

@end


/**
 * Phone API
 */
@interface AbtoPhoneInterface : NSObject

@property(nonatomic, readonly) NSString *libVersion;

- (BOOL)initialize:(id <AbtoPhoneInterfaceObserver>)observer;
- (void)deinitialize;
- (BOOL)finalizeConfiguration;

- (AbtoPhoneConfig *)config;

// unregister
//-(BOOL)register;
- (BOOL)unregister;

// enable/disable background mode
- (BOOL)keepAwake:(BOOL)enable;

// call functionality
- (NSInteger)startCall:(NSString *)destination withVideo:(BOOL)video;
- (BOOL)answerCall:(NSInteger)callId status:(int)status withVideo:(BOOL)video;
- (BOOL)hangUpCall:(NSInteger)callId status:(int)status;
- (BOOL)holdRetriveCall:(NSInteger)callId;

// sound management
- (BOOL)setCall:(NSInteger)callId speakerLevel:(float)level;
- (BOOL)setCall:(NSInteger)callId microphoneLevel:(float)level;

// microphone managment
- (BOOL)muteMicrophone:(NSInteger)callId on:(BOOL)on;

// DTMF
- (BOOL)sendTone:(NSInteger)callId tone:(unichar)tone;
- (BOOL)sendToneViaInfo:(NSInteger)callId tone:(unichar)tone;

// Bluetooth headset or speakers
- (BOOL)setBluetoothOn:(BOOL)on;
- (BOOL)setSpeakerphoneOn:(BOOL)on;

// IM
- (BOOL)sendTextMessage:(NSString *)to withBody:(NSString *)message;

// call transfer
- (BOOL)transferCall:(NSInteger)callId toContact:(NSString *)uri;

// presence
- (BOOL)setPresence:(PhoneBuddyStatus)status statusText:(NSString *)text;
- (BOOL)subscribeBuddy:(NSString *)uri on:(BOOL)on;

// video managment
- (void)setRemoteView:(UIImageView *)view;
- (void)setLocalView:(UIImageView *)view;
- (BOOL)isVideoCall:(NSInteger)callId;
- (BOOL)muteVideo:(NSInteger)callId on:(BOOL)on;
- (BOOL)switchCameraToFront:(NSInteger)callId on:(BOOL)on;

// account parsing
+ (NSString *)sipUriUsername:(NSString *)uri;
+ (NSString *)sipUriDomain:(NSString *)uri;
+ (NSString *)sipUriDisplayName:(NSString *)uri;

// call recording
- (BOOL)startRecordingFor:(NSInteger)callId filePath:(NSString *)name;
- (BOOL)stopRecording;

// media quality monitor
- (AbtoPhoneMediaQuality *)readCallMediaQuality:(NSInteger)callId isVideo:(BOOL)video;

// ZRTP check
- (BOOL)isZrtpSecured:(NSInteger)callId;
- (void)setSasCall:(NSInteger)callId validity:(BOOL)valid;

@end

#endif
