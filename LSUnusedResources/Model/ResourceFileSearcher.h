//
//  ResourceFileSearcher.h
//  LSUnusedResources
//
//  Created by lslin on 15/8/31.
//  Copyright (c) 2015年 lessfun.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>

extern NSString * const kNotificationResourceFileQueryDone;


@interface ResourceFileInfo : NSObject

@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *path;

- (NSImage *)image;

@end


@interface ResourceFileSearcher : NSObject

@property (strong, nonatomic, readonly) NSMutableDictionary *resNameInfoDict;/**< dict<NSString name, ResourceFileInfo *info> */

+ (instancetype)sharedObject;

- (void)startWithProjectPath:(NSString *)projectPath resourceSuffixs:(NSArray *)resourceSuffixs;
- (void)reset;

@end
