//
//  SettingsViewController.h
//
//  Created on 12/1/11.
//  Copyright (c) 2011 Abto Software. All rights reserved.
//

#import <UIKit/UIKit.h>

// declare UI control tags
#define UITABBARITEM_BACK_TAG       101
#define UITABBARITEM_PROFILE_TAG    102
#define UITABBARITEM_NETWORK_TAG    103
#define UITABBARITEM_AUDIO_TAG      104
#define UITABBARITEM_VIDEO_TAG      105

#define UITABLE_AUDIOSETTINGS_TAG 106
#define UITABLE_VIDEOSETTINGS_TAG 107

@interface SettingsViewController : UIViewController <UITabBarDelegate , UITableViewDataSource, UITableViewDelegate> {
    IBOutlet UITextField *setName;
    IBOutlet UITextField *setPassword;
    IBOutlet UITextField *setAuthId;
    IBOutlet UITextField *setContact;
    IBOutlet UITextField *setDomain;
    
    IBOutlet UISegmentedControl *setTtansport;
    IBOutlet UITextField *stunHost;
    IBOutlet UITextField *proxyHost;

    IBOutlet UITabBar *tabBar;

    IBOutlet UIView *profileView;
    IBOutlet UIView *networkView;
    IBOutlet UIView *audioView;
    IBOutlet UIView *videoView;
    
    IBOutlet UITabBarItem *buttonBack;
    IBOutlet UITabBarItem *buttonProfile;
    IBOutlet UITabBarItem *buttonNetwork;
    IBOutlet UITabBarItem *buttonAudio;
    IBOutlet UITabBarItem *buttonVideo;
    
    IBOutlet UITableView *tableVideoSettings;
    IBOutlet UITableView *tableAudioSettings;
    
    NSMutableArray *audioCodecInfo;
    NSMutableArray *videoCodecInfo;
    
    IBOutlet UISwitch *SRTPSwitch;
    IBOutlet UISwitch *ZRTPSwitch;
}

- (IBAction)backgroundClick:(id)sender;
- (IBAction)textFieldDone:(id)sender;

@end
