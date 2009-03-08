//
//  FlickrController.h
//  AsyncTable
//
//  Created by Adrian on 3/8/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RSSDelegate.h"

@class RSS;

@interface FlickrController : UITableViewController <RSSDelegate>
{
@private
    RSS *rss;
    NSArray *newsItems;
    UINavigationController *navigationController;
}

@property (nonatomic, readonly) UINavigationController *navigationController;

- (void)reloadFeed;

@end
