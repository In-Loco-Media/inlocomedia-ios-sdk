//
//  ILMLog.h
//  InLocoMediaAPI
//
//  Created by Luis Medeiros on 12/12/13.
//  Copyright (c) 2013 InLocoMedia. All rights reserved.
//

#import <Foundation/Foundation.h>

@class ILMError;

@interface ILMLogger : NSObject

@property (assign) BOOL enabled;

+ (ILMLogger *)sharedInstance;

//Log errors to the developer
- (void)log:(const char *)prettyFunction line:(int)line format:(NSString *)format, ...;

//Logs errors to internal usage
- (void)logD:(const char *)prettyFunction line:(int)line format:(NSString *)format, ...;
- (void)logE:(const char *)prettyFunction line:(int)line error:(NSError *)error;
- (void)logOnFile:(const char *)prettyFunction line:(int)line format:(NSString *)format, ...;
- (void)logTime:(const char *)prettyFunction line:(int)line format:(NSString *)format, ...;
- (void)logCommunication:(const char *)prettyFunction line:(int)line format:(NSString *)format, ...;
- (void)logException:(const char *)prettyFunction line:(int)line format:(NSString *)format, ...;

+ (NSString *)logFilePath;

@end