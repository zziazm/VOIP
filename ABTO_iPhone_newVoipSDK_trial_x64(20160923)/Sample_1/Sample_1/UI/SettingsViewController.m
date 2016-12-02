//
//  SettingsViewController.m
//
//  Created on 12/1/11.
//  Copyright (c) 2011 Abto Software. All rights reserved.
//

#import <AbtoSipClientWrapper/AbtoSipPhoneObserver.h>

#import "SettingsViewController.h"

#define BASE_CODEC_PRIORITY 128

@implementation SettingsViewController {
    UIBarButtonItem *codecEditButtonItem;
}

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
        audioCodecInfo = [NSMutableArray new];
        videoCodecInfo = [NSMutableArray new];

        for (NSInteger codec = PhoneAudioVideoCodecNone + 1; codec < PhoneAudioVideoCodecCount; codec++) {
            switch ([AbtoPhoneConfig codecType:codec]) {
                case PhoneCodecTypeAudio:
                    [audioCodecInfo addObject:@(codec)];
                    break;
                    
                case PhoneCodecTypeVideo:
                    [videoCodecInfo addObject:@(codec)];
                    break;

                case PhoneCodecTypeUnsupported:
                default:
                    // skip
                    break;
            }
        }
    }
    return self;
}

#pragma mark - View lifecycle

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    self.title = @"Settings";
    
    tableVideoSettings.backgroundView = nil;
    tableAudioSettings.backgroundView = nil;

    tableVideoSettings.backgroundColor = [UIColor clearColor];
    tableAudioSettings.backgroundColor = [UIColor clearColor];
    
    [buttonBack setTag:UITABBARITEM_BACK_TAG];
    [buttonProfile setTag:UITABBARITEM_PROFILE_TAG];
    [buttonNetwork setTag:UITABBARITEM_NETWORK_TAG];
    [buttonAudio setTag:UITABBARITEM_AUDIO_TAG];
    [buttonVideo setTag:UITABBARITEM_VIDEO_TAG];
    
    [tabBar setSelectedItem:buttonProfile];
    
    [tableAudioSettings setTag:UITABLE_AUDIOSETTINGS_TAG];
    [tableVideoSettings setTag:UITABLE_VIDEOSETTINGS_TAG];
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    // Return YES for supported orientations
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    
    if (SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(@"7.0")) {
        profileView.frame = RectSetY(profileView.frame, 64);
        networkView.frame = RectSetY(networkView.frame, 64);
        audioView.frame = RectSetY(audioView.frame, 64);
        videoView.frame = RectSetY(videoView.frame, 64);
    }

    SRTPSwitch.frame = RectSetX(SRTPSwitch.frame, self.view.frame.size.width - SRTPSwitch.frame.size.width - 20);
    ZRTPSwitch.frame = RectSetX(ZRTPSwitch.frame, self.view.frame.size.width - ZRTPSwitch.frame.size.width - 20);
    
    UIBarButtonItem *leftNavigationItem = [[UIBarButtonItem alloc] initWithTitle:@"Back" style:UIBarButtonItemStyleBordered target:self action:@selector(backButtonPressed:)];
    codecEditButtonItem = [[UIBarButtonItem alloc] initWithTitle:@"Reorder"
                                                     style:UIBarButtonItemStylePlain
                                                    target:self
                                                     action:@selector(toggleEdit:)];
    
    [self.navigationController.navigationBar setTranslucent:YES];
    self.navigationItem.leftBarButtonItem = leftNavigationItem;

    AbtoPhoneInterface *phone = [abtoAppDelegate sharedInstance].phone;
   
    setName.text = phone.config.regUser;
    setPassword.text = phone.config.regPassword;
    setAuthId.text = phone.config.regAuthId;
    setContact.text = phone.config.displayName;
    setDomain.text = phone.config.regDomain;

    SRTPSwitch.on = phone.config.enableSrtp;
    ZRTPSwitch.on = phone.config.enableZrtp;
    stunHost.text = phone.config.stun;
    proxyHost.text = phone.config.proxy;
    
    setTtansport.selectedSegmentIndex = phone.config.signalingTransport;
    
    NSComparator sortBlock = ^NSComparisonResult(id obj1, id obj2) {
        AbtoPhoneConfig *config = phone.config;
        NSInteger priority1 = [config codecPriority:[obj1 integerValue]];
        NSInteger priority2 = [config codecPriority:[obj2 integerValue]];
        
        if (priority1 > priority2) {
            return NSOrderedAscending;
        } else if (priority1 < priority2) {
            return NSOrderedDescending;
        }
        
        return NSOrderedSame;
    };
    
    [audioCodecInfo sortUsingComparator:sortBlock];
    [videoCodecInfo sortUsingComparator:sortBlock];
}

- (IBAction)backgroundClick:(id)sender {
    [setName resignFirstResponder];
    [setPassword resignFirstResponder];
    [setAuthId resignFirstResponder];
    [setContact resignFirstResponder];
    [setDomain resignFirstResponder];
    [stunHost resignFirstResponder];
    [proxyHost resignFirstResponder];
}

- (IBAction)textFieldDone:(id)sender {
    if ((sender == setName) || (sender == setPassword) || (sender == setDomain) || (sender == setAuthId) ||
        (sender == setContact) || (sender == stunHost) || (sender == proxyHost)) {
        [sender becomeFirstResponder];
    }
}

- (void)tabBar:(UITabBar *)tabBar didSelectItem:(UITabBarItem *)item {
    BOOL oldAudioHidden = audioView.hidden;
    BOOL oldVideoHidden = videoView.hidden;
    
    switch ([item tag]) {
        case UITABBARITEM_PROFILE_TAG:
            [profileView setHidden:NO];
            [networkView setHidden:YES];
            [audioView setHidden:YES];
            [videoView setHidden:YES];
            self.navigationItem.rightBarButtonItem = nil;
            break;
        case UITABBARITEM_NETWORK_TAG:
            [profileView setHidden:YES];
            [networkView setHidden:NO];
            [audioView setHidden:YES];
            [videoView setHidden:YES];
            self.navigationItem.rightBarButtonItem = nil;
            break;
        case UITABBARITEM_AUDIO_TAG:
            [profileView setHidden:YES];
            [networkView setHidden:YES];
            [audioView setHidden:NO];
            [videoView setHidden:YES];
            self.navigationItem.rightBarButtonItem = codecEditButtonItem;
            break;
        case UITABBARITEM_VIDEO_TAG:
            [profileView setHidden:YES];
            [networkView setHidden:YES];
            [audioView setHidden:YES];
            [videoView setHidden:NO];
            self.navigationItem.rightBarButtonItem = codecEditButtonItem;
            break;
        default:
            break;
    }
    
    BOOL newAudioHidden = audioView.hidden;
    BOOL newVideoHidden = videoView.hidden;

    if (newAudioHidden) {
        [tableAudioSettings setEditing:NO];
    }
    if (newVideoHidden) {
        [tableVideoSettings setEditing:NO];
    }

    if ((!oldAudioHidden && newAudioHidden) || (!oldVideoHidden && newVideoHidden)) {
        [codecEditButtonItem setTitle:@"Reorder"];
    }
}

- (IBAction)toggleEdit:(UIButton *)button {
    UITableView *tableView = audioView.hidden ? tableVideoSettings : tableAudioSettings;
    [tableView setEditing:!tableView.editing animated:YES];
    
    if (tableAudioSettings.editing)
        [codecEditButtonItem setTitle:@"Done"];
    else
        [codecEditButtonItem setTitle:@"Reorder"];
}

- (IBAction)backButtonPressed:(UIButton *)button {
    [self saveSettings];
    [ApplicationDelegate.navController dismissViewControllerAnimated:YES completion:nil];
}

#pragma mark -
#pragma mark Table View Data Source Methods

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    NSInteger num;

    switch ([tableView tag]) {
        case UITABLE_VIDEOSETTINGS_TAG:
        case UITABLE_AUDIOSETTINGS_TAG:
            num = 1;
            break;
        default:
            num = 0;
            break;
    }

    return num;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    NSInteger num;

    switch ([tableView tag]) {
        case UITABLE_VIDEOSETTINGS_TAG:
            num = [videoCodecInfo count];
            break;
        case UITABLE_AUDIOSETTINGS_TAG:
            num = [audioCodecInfo count];
            break;
        default:
            num = 0;
            break;
    }
    
    return num;
}

- (CGFloat)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath {
    return 44;
}

- (UITableViewCell *)tableView:(UITableView *)tableView videoCodecCellForRowAtIndexPath:(NSIndexPath *)indexPath {
    NSInteger idx = [indexPath row];
    NSString *cellId = [NSString stringWithFormat:@"videoCodecCell_%d", (int)idx];
    
    return [self processCodecCell:tableView cellId:cellId tag:idx data:videoCodecInfo];
}

- (UITableViewCell *)tableView:(UITableView *)tableView audioCodecCellForRowAtIndexPath:(NSIndexPath *)indexPath {
    NSInteger idx = [indexPath row];
    NSString *cellId = [NSString stringWithFormat:@"audioCodecCell_%d", (int)idx];
    
    return [self processCodecCell:tableView cellId:cellId tag:idx data:audioCodecInfo];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell;

    switch ([tableView tag]) {
        case UITABLE_VIDEOSETTINGS_TAG:
            cell = [self tableView:tableView videoCodecCellForRowAtIndexPath:indexPath];
            break;

        case UITABLE_AUDIOSETTINGS_TAG:
            cell = [self tableView:tableView audioCodecCellForRowAtIndexPath:indexPath];
            break;
        default:
            cell = nil;
            break;
    }
    
    return cell;
}

#pragma mark -
#pragma mark Table View Delegate Methods

- (CGFloat)tableView:(UITableView *)tableView heightForHeaderInSection:(NSInteger)section {
    return 55.0;
}

- (UIView *)tableView:(UITableView *)tableView viewForHeaderInSection:(NSInteger)section {
    UIView *headerView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, tableView.bounds.size.width,35)];
    UILabel *label = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, 320, 55)];
    label.backgroundColor = [UIColor clearColor];
    label.textAlignment = UITextAlignmentCenter;
    [headerView addSubview:label];

    switch ([tableView tag]) {
        case UITABLE_VIDEOSETTINGS_TAG:
            switch (section) {
                case 0:
                default:
                    label.text = @"Video Codecs";
                    break;
            }
            break;
        case UITABLE_AUDIOSETTINGS_TAG:
        default:
            label.text = @"Audio Codecs";
            break;
    }

    return headerView;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView cellForRowAtIndexPath:indexPath];
    cell.selected = NO;
}

- (BOOL)tableView:(UITableView *)tableView canMoveRowAtIndexPath:(NSIndexPath *)indexPath {
    return YES;
}

- (void)tableView:(UITableView *)tableView moveRowAtIndexPath:(NSIndexPath *)sourceIndexPath toIndexPath:(NSIndexPath *)destinationIndexPath {
    NSMutableArray *array;
    
    switch ([tableView tag]) {
        case UITABLE_VIDEOSETTINGS_TAG:
            array = videoCodecInfo;
            break;
        case UITABLE_AUDIOSETTINGS_TAG:
            array = audioCodecInfo;
            break;
        default:
            array = nil;
            break;
    }
    
    if (array) {
        [array insertObject:array[sourceIndexPath.row] atIndex:destinationIndexPath.row];
        [array removeObjectAtIndex:(sourceIndexPath.row + 1)];
        [self reorderCodecPriority:array config:[abtoAppDelegate sharedInstance].phone.config];
    }
}

- (UITableViewCellEditingStyle)tableView:(UITableView *)tableView editingStyleForRowAtIndexPath:(NSIndexPath *)indexPath {
    return UITableViewCellEditingStyleNone;
}

#pragma mark -
#pragma mark Utils

- (UITableViewCell*)processCodecCell:(UITableView *)tableView cellId:(NSString *)cellId tag:(NSInteger)tag data:(NSArray *)data {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:cellId];
    UISwitch *codecSwitch;
    NSInteger codecIdx = [data[tag] integerValue];
    
    if (cell == nil) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:cellId];
        cell.selectionStyle = UITableViewCellSelectionStyleBlue;
        [cell.textLabel setBackgroundColor:[UIColor clearColor]];
        
        codecSwitch = [UISwitch new];
        UIImageView *img = [UIImageView new];
        [img setBackgroundColor:[UIColor clearColor]];
        [cell setBackgroundView:img];
        
        codecSwitch.frame = CGRectMake(cell.contentView.frame.size.width - codecSwitch.frame.size.width - 20, (cell.contentView.frame.size.height - codecSwitch.frame.size.height) / 2, 0, 0);
        codecSwitch.autoresizingMask = UIViewAutoresizingFlexibleLeftMargin;
        codecSwitch.tag = codecIdx;
        [codecSwitch addTarget:self action:@selector(codecSwitched:) forControlEvents:UIControlEventValueChanged];
        [cell.contentView addSubview:codecSwitch];
        
        cell.backgroundColor = [UIColor clearColor];
    } else {
        codecSwitch = (UISwitch *)[cell viewWithTag:codecIdx];
    }
    
    AbtoPhoneInterface* phone = [abtoAppDelegate sharedInstance].phone;
    
    cell.textLabel.text = [AbtoPhoneConfig codecName:codecIdx];
    codecSwitch.on = [phone.config codecPriority:codecIdx] != 0;
    cell.showsReorderControl = YES;
    
    return cell;
}

- (void)codecSwitched:(UISwitch *)senderSwitch {
    AbtoPhoneConfig* config = [abtoAppDelegate sharedInstance].phone.config;
    NSInteger codecIdx = senderSwitch.tag;
    [config setCodecPriority:codecIdx priority:(senderSwitch.on ? BASE_CODEC_PRIORITY : 0)];
    
    switch ([AbtoPhoneConfig codecType:codecIdx]) {
        case PhoneCodecTypeVideo:
            [self reorderCodecPriority:videoCodecInfo config:config];
            break;

        case PhoneCodecTypeAudio:
            [self reorderCodecPriority:audioCodecInfo config:config];
            break;
            
        case PhoneCodecTypeUnsupported:
        default:
            break;
    }
}

- (void)saveSettings {
    AbtoPhoneConfig *config = [abtoAppDelegate sharedInstance].phone.config;
    
    config.regUser = setName.text;
    config.regPassword = setPassword.text;
    config.regAuthId = setAuthId.text;
    config.displayName = setContact.text;
    config.regDomain = setDomain.text;
    
    config.enableSrtp = SRTPSwitch.on;
    config.enableZrtp  = ZRTPSwitch.on;
    config.stun = stunHost.text;
    config.proxy = proxyHost.text;

    config.enableStun = stunHost.text.length > 0;
    config.enableProxy = proxyHost.text.length > 0;
    
    config.signalingTransport = (PhoneSignalingTransport)setTtansport.selectedSegmentIndex;
    
    [config saveToUserDefaults:SETTINGS_KEY];
}

- (void)reorderCodecPriority:(NSMutableArray *)array config:(AbtoPhoneConfig *)config {
    NSInteger value = BASE_CODEC_PRIORITY;
    NSEnumerator *enumerator = [array reverseObjectEnumerator];
    for (id codec in enumerator) {
        NSInteger codecIdx = [codec integerValue];
        if ([config codecPriority:codecIdx] >= BASE_CODEC_PRIORITY) {
            [config setCodecPriority:codecIdx priority:value];
            value++;
        }
    }
}

@end
