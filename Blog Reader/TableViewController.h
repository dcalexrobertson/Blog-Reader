//
//  TableViewController.h
//  Blog Reader
//
//  Created by Alex on 2015-10-06.
//  Copyright © 2015 Alex. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (nonatomic, strong) NSMutableArray *blogPosts;
@property(nonatomic, strong) UITableView *tableView;

@end
