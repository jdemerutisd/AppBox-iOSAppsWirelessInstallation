///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGGroupLogInfo;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GroupLogInfo` struct.
///
/// Group's logged information.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGGroupLogInfo : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The unique id of this group. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *groupId;

/// The name of this group.
@property (nonatomic, readonly, copy) NSString *displayName;

/// External group ID. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *externalId;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param displayName The name of this group.
/// @param groupId The unique id of this group. Might be missing due to
/// historical data gap.
/// @param externalId External group ID. Might be missing due to historical data
/// gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithDisplayName:(NSString *)displayName
                            groupId:(nullable NSString *)groupId
                         externalId:(nullable NSString *)externalId;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param displayName The name of this group.
///
/// @return An initialized instance.
///
- (instancetype)initWithDisplayName:(NSString *)displayName;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GroupLogInfo` struct.
///
@interface DBTEAMLOGGroupLogInfoSerializer : NSObject

///
/// Serializes `DBTEAMLOGGroupLogInfo` instances.
///
/// @param instance An instance of the `DBTEAMLOGGroupLogInfo` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGGroupLogInfo` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMLOGGroupLogInfo *)instance;

///
/// Deserializes `DBTEAMLOGGroupLogInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGGroupLogInfo` API object.
///
/// @return An instantiation of the `DBTEAMLOGGroupLogInfo` object.
///
+ (DBTEAMLOGGroupLogInfo *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
