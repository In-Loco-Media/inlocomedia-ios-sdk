//
//  ILMJsonSerializable.h
//  InLocoMedia-iOS-SDK
//
//  Copyright © 2017 InLocoMedia. All rights reserved.
//

#import "ILMError.h"

typedef NSDictionary<NSString *, NSString *> ILMJsonPropertyMap;

@protocol ILMJsonSerializable

+ (ILMJsonPropertyMap *)propertyMap;
+ (instancetype)initWithJsonData:(NSData *)data
                           error:(ILMError **)error;
+ (instancetype)initWithDictionary:(NSDictionary *)dictionary
                           error:(ILMError **)error;
- (NSData *)toJsonWithError:(ILMError **)error;
- (NSDictionary *)toDictionaryWithError:(ILMError **)error;

@end

// Used if the property must be present.
// Example: @property (strong, nonatomic) NSString<ILMRequired> *string;
@protocol ILMRequired
@end

/**
 * Make all objects compatible to avoid compiler warnings
 */
#ifndef ILMRequired
@interface NSObject (ILMJsonSerializablePropertyCompatibility) <ILMRequired>
@end
#endif
