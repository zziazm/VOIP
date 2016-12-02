//
//  ImViewController.m
//  Sample_1
//
//  Created by Roman Bekas on 11/22/13.
//
//

#import "ImViewController.h"
#import "ImMessageViewController.h"

@interface ImViewController ()

@end

@implementation ImViewController

- (id)initWithStyle:(UITableViewStyle)style {
    self = [super initWithStyle:style];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    [self.tableView setBackgroundView:[[UIImageView alloc] initWithImage:[UIImage imageNamed:@"Default.png"]]];
    
    [self reloadBadge];
    
    [self.tableView reloadData];
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(onNewIm) name:NOTIFICATION_NEW_IM object:nil];
    self.title = @"IM";
    
    UIBarButtonItem *lRightNavigationItem = [[UIBarButtonItem alloc] initWithTitle:@"New" style:UIBarButtonItemStyleBordered target:self action:@selector(onButtonNewIm:)];
    
    [self.navigationController.navigationBar setTranslucent:YES];
    self.navigationItem.rightBarButtonItem = lRightNavigationItem;

    // Uncomment the following line to preserve selection between presentations.
    // self.clearsSelectionOnViewWillAppear = NO;
 
    // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
    // self.navigationItem.rightBarButtonItem = self.editButtonItem;
    
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(onPhoneNotification:) name:NOTIFICATION_PHONE_EVENT object:nil];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)reloadBadge {
    NSInteger newImCnt = [self newImCount];
    
    if (newImCnt) {
        [self.navigationController.tabBarItem setBadgeValue:[NSString stringWithFormat:@"%ld", (long)newImCnt]];
    } else {
        [self.navigationController.tabBarItem setBadgeValue:nil];
    }
}

- (IBAction)onRemoveMessage:(id)sender {
    UIButton *del = (UIButton*)sender;
    NSInteger index = [del tag];
    abtoAppDelegate* appDelegate = [abtoAppDelegate sharedInstance];
    NSMutableArray *list = [appDelegate getIMs];
    [list removeObjectAtIndex:index];
    [appDelegate storeIms];

    [self update];
}

#pragma mark - Table view data source

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    NSArray *list = [[abtoAppDelegate sharedInstance] getIMs];
    return ((list != nil) ? [list count] : 0);
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    abtoAppDelegate* appDelegate = [abtoAppDelegate sharedInstance];
    NSArray *list = [appDelegate getIMs];
    
    NSInteger idx = [indexPath row];
    NSString *cellId = [NSString stringWithFormat:@"im_%ld", (long)idx];
    UITableViewCell *cell; //= [tableView dequeueReusableCellWithIdentifier:cellId];
    
    if (cell == nil) {
        cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:cellId];
        cell.selectionStyle = UITableViewCellSelectionStyleBlue;
    }
    
    ImMessage *message = [list objectAtIndex:idx];
    BOOL isIncoming = ![message->from isEqualToString:appDelegate.phone.config.regUser];
    
    UIButton *del = [[UIButton alloc] initWithFrame:CGRectMake(280, 3, 30, 40)];
    [del setTag:indexPath.row];
    [del addTarget:self action:@selector(onRemoveMessage:) forControlEvents:UIControlEventTouchUpInside];
    UIImage *img = [UIImage imageNamed:@"DeleteRed.png"];
    [del setImage:img forState:UIControlStateNormal];
    [cell.contentView addSubview:del];
    
    UILabel *title = [[UILabel alloc] initWithFrame:CGRectMake(1, 0, 279, 44)];
    title.backgroundColor = [UIColor clearColor];
    title.text = isIncoming ? message->from : message->to;
    
    if (!message->isRead)
        [title setTextColor:[UIColor redColor]];
    else
        [title setTextColor:(isIncoming ? [UIColor blueColor]:[UIColor blackColor])];
    [cell.contentView addSubview:title];
    
    cell.backgroundColor = [UIColor clearColor];
    cell.backgroundView = [UIView new];
    cell.selectedBackgroundView = [UIView new] ;
    
    return cell;
}

//- (void)tableView:(UITableView *)tableView willDisplayCell:(UITableViewCell *)cell forRowAtIndexPath:(NSIndexPath *)indexPath{
//    cell.backgroundColor = [UIColor clearColor];
//}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    abtoAppDelegate* appDelegate = [abtoAppDelegate sharedInstance];
    NSMutableArray *list = [appDelegate getIMs];
    
    ImMessage *message = [list objectAtIndex:[indexPath row]];
    BOOL isIncoming = ![message->from isEqualToString:appDelegate.phone.config.regUser];
    
    NSString *contact = isIncoming ? message->from : message->to;
    NSString *text = message->text ? message->text : @"";
    
    [self didSelectImWithContact:contact andText:text];
    
    message->isRead = YES;
    [list removeObject:message];
    [list insertObject:message atIndex:indexPath.row];
    [appDelegate storeIms];
}


/**
 * IM
 */

- (NSInteger)newImCount {
    NSArray *ims = [[abtoAppDelegate sharedInstance] getIMs];
    
    NSInteger cnt = 0;
    for (NSInteger i = 0; i < ims.count; i++) {
        ImMessage *msg = [ims objectAtIndex:i];
        if (!msg->isRead) cnt++;
    }
    
    return cnt;
}

- (void)didSelectImWithContact:(NSString *)contact andText:(NSString *)text {
    [[abtoAppDelegate sharedInstance] storeIms];
    [self.navigationController pushViewController:[[ImMessageViewController alloc] initWithContact:contact andText:text] animated:YES];
}

- (void)onNewIm {
    [self reloadBadge];
    [self.tableView reloadData];
}

- (IBAction)onButtonNewIm:(id)sender {
    [self.navigationController pushViewController:[ImMessageViewController new] animated:YES];
}

- (void)update {
    [self.tableView reloadData];
}

- (void)onPhoneNotification:(NSNotification *)pNotification {
}

- (void)dealloc {
    [[NSNotificationCenter defaultCenter] removeObserver:self];
}

@end
