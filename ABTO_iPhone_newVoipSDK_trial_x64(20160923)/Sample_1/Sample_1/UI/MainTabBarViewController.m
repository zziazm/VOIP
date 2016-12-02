//
//  MainTabBarViewController.m
//  Sample_1
//
//  Created by Roman Bekas on 11/22/13.
//
//

#import "MainTabBarViewController.h"
#import "DialerViewController.h"

@interface MainTabBarViewController ()

@end

@implementation MainTabBarViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil {
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
        
        DialerViewController *dialerViewController = [DialerViewController new];
        ImViewController *imViewController = [ImViewController new];
        
        UINavigationController *imNavigationController = [[UINavigationController alloc] initWithRootViewController:imViewController];
        
        dialerViewController.tabBarItem = [[UITabBarItem alloc] initWithTitle:@"Phone" image:[UIImage imageNamed:@"tel.png"] tag:0];
        imNavigationController.tabBarItem = [[UITabBarItem alloc] initWithTitle:@"IM" image:[UIImage imageNamed:@"mes.png"] tag:1];
        [imViewController reloadBadge];
        
        self.viewControllers = [NSArray arrayWithObjects:
                                dialerViewController,
                                imNavigationController,
                                nil];
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];

    // Do any additional setup after loading the view from its nib.
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(onPhoneNotification:) name:NOTIFICATION_PHONE_EVENT object:nil];
}

- (void)onPhoneNotification:(NSNotification *)notification {
    abtoAppDelegate *app = ApplicationDelegate;
    PhoneEvents lStatus = [[notification object] integerValue];
    if (!app.connected &&
        (lStatus == PhoneEventsRegFailed ||
        lStatus == PhoneEventsUnregFailed ||
        lStatus == PhoneEventsUnregSuccess)) {
        [app.navController popToRootViewControllerAnimated:NO];
    }
}

- (void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

@end
