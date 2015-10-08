//
//  BlogPost.m
//  Blog Reader
//
//  Created by Alex on 2015-10-07.
//  Copyright © 2015 Alex. All rights reserved.
//

#import "BlogPost.h"

@implementation BlogPost

-(instancetype) initWithTitle: (NSString *)title {
    self = [super init];
    
    if (self) {
        _title = title;
        _author = nil;
        _thumbnail = nil;
    }
    
    return self;
}

+(instancetype) blogPostWithTitle: (NSString *)title {
    return [[self alloc] initWithTitle:title];
}

-(NSURL *) thumbnailURL {
    return [NSURL URLWithString:self.thumbnail];
}

-(NSString *) formattedDate {
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:@"yyyy-MM-dd HH:mm:ss"];
    NSDate *tempDate = [dateFormatter dateFromString:self.date];
    
    [dateFormatter setDateFormat:@"EE, MMM dd"];
    return [dateFormatter stringFromDate:tempDate];
}

@end
