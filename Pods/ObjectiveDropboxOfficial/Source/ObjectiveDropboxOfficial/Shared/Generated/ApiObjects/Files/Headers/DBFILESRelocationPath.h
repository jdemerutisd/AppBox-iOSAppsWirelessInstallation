///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBFILESRelocationPath;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RelocationPath` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBFILESRelocationPath : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Path in the user's Dropbox to be copied or moved.
@property (nonatomic, readonly, copy) NSString *fromPath;

/// Path in the user's Dropbox that is the destination.
@property (nonatomic, readonly, copy) NSString *toPath;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param fromPath Path in the user's Dropbox to be copied or moved.
/// @param toPath Path in the user's Dropbox that is the destination.
///
/// @return An initialized instance.
///
- (instancetype)initWithFromPath:(NSString *)fromPath toPath:(NSString *)toPath;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `RelocationPath` struct.
///
@interface DBFILESRelocationPathSerializer : NSObject

///
/// Serializes `DBFILESRelocationPath` instances.
///
/// @param instance An instance of the `DBFILESRelocationPath` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBFILESRelocationPath` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBFILESRelocationPath *)instance;

///
/// Deserializes `DBFILESRelocationPath` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBFILESRelocationPath` API object.
///
/// @return An instantiation of the `DBFILESRelocationPath` object.
///
+ (DBFILESRelocationPath *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
