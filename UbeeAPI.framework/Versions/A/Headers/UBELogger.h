//
//  UBELog.h
//  UbeeAPI
//
//  Created by Luis Medeiros on 12/12/13.
//  Copyright (c) 2013 Ubee. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UBEError;

#define UBELogD(args...) \
    [[UBELogger sharedInstance] logD:__PRETTY_FUNCTION__ :__LINE__ :args]

#define UBELog(args...) \
    [[UBELogger sharedInstance] log:nil :0 :args]

#define UBELogTime(args...) \
    [[UBELogger sharedInstance] logTime:nil :0 :args]

#define UBELogRequest(args...) \
    [[UBELogger sharedInstance] logCommunication:nil :0 :args]

//#define UBELogFile(args...) \
//    [[UBELogger sharedInstance] logOnFile:args]

@interface UBELogger : NSObject

@property(assign) BOOL enabled;

+ (id)sharedInstance;

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
