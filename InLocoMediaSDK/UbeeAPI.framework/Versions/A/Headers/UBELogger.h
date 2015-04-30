//
//  UBELog.h
//  UbeeAPI
//
//  Created by Luis Medeiros on 12/12/13.
//  Copyright (c) 2013 Ubee. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UBEError;

@interface UBELogger : NSObject

@property (assign) BOOL enabled;

+ (UBELogger*)sharedInstance;

//Log errors to the developer
- (void)log:(const char*)prettyFunction :(int)line :(NSString*)format, ...;

//Logs errors to internal usage
- (void)logD:(const char*)prettyFunction :(int)line :(NSString*)format, ...;
- (void)logE:(const char*)prettyFunction :(int)line :(UBEError *)error;
//- (void)logOnFile:(NSString*)format, ...;
- (void)logTime:(const char*)prettyFunction :(int)line :(NSString*)format, ...;
- (void)logCommunication:(const char*)prettyFunction :(int)line :(NSString*)format, ...;
+ (NSString *)logFilePath;

@end
