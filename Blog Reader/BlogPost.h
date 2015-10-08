//
//  BlogPost.h
//  Blog Reader
//
//  Created by Alex on 2015-10-07.
//  Copyright © 2015 Alex. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject

@property (strong, nonatomic) NSString *title;
@property (strong, nonatomic) NSString *author;
@property (strong, nonatomic) NSString *thumbnail;
@property (strong, nonatomic) NSString *date;
@property (strong, nonatomic) NSURL *url;

-(instancetype) initWithTitle: (NSString *)title;
+(instancetype) blogPostWithTitle: (NSString *)title;

-(NSURL *) thumbnailURL;
-(NSString *) formattedDate;

@end
