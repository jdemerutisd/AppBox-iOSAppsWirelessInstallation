///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGListFileMembersArg;
@class DBSHARINGMemberAction;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `ListFileMembersArg` struct.
///
/// Arguments for `listFileMembers`.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGListFileMembersArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The file for which you want to see members.
@property (nonatomic, readonly, copy) NSString *file;

/// The actions for which to return permissions on a member.
@property (nonatomic, readonly, nullable) NSArray<DBSHARINGMemberAction *> *actions;

/// Whether to include members who only have access from a parent shared folder.
@property (nonatomic, readonly) NSNumber *includeInherited;

/// Number of members to return max per query. Defaults to 100 if no limit is
/// specified.
@property (nonatomic, readonly) NSNumber *limit;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param file The file for which you want to see members.
/// @param actions The actions for which to return permissions on a member.
/// @param includeInherited Whether to include members who only have access from
/// a parent shared folder.
/// @param limit Number of members to return max per query. Defaults to 100 if
/// no limit is specified.
///
/// @return An initialized instance.
///
- (instancetype)initWithFile:(NSString *)file
                     actions:(nullable NSArray<DBSHARINGMemberAction *> *)actions
            includeInherited:(nullable NSNumber *)includeInherited
                       limit:(nullable NSNumber *)limit;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param file The file for which you want to see members.
///
/// @return An initialized instance.
///
- (instancetype)initWithFile:(NSString *)file;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListFileMembersArg` struct.
///
@interface DBSHARINGListFileMembersArgSerializer : NSObject

///
/// Serializes `DBSHARINGListFileMembersArg` instances.
///
/// @param instance An instance of the `DBSHARINGListFileMembersArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGListFileMembersArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGListFileMembersArg *)instance;

///
/// Deserializes `DBSHARINGListFileMembersArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGListFileMembersArg` API object.
///
/// @return An instantiation of the `DBSHARINGListFileMembersArg` object.
///
+ (DBSHARINGListFileMembersArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
