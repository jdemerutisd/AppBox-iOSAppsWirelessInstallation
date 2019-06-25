///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGShmodelGroupShareDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ShmodelGroupShareDetails` struct.
///
/// Shared link with group.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGShmodelGroupShareDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ShmodelGroupShareDetails` struct.
///
@interface DBTEAMLOGShmodelGroupShareDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGShmodelGroupShareDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGShmodelGroupShareDetails` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGShmodelGroupShareDetails` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGShmodelGroupShareDetails *)instance;

///
/// Deserializes `DBTEAMLOGShmodelGroupShareDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGShmodelGroupShareDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGShmodelGroupShareDetails` object.
///
+ (DBTEAMLOGShmodelGroupShareDetails *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
