///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMUserSelectorArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `UserSelectorArg` union.
///
/// Argument for selecting a single user, either by team_member_id, external_id
/// or email.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMUserSelectorArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBTEAMUserSelectorArgTag` enum type represents the possible tag states
/// with which the `DBTEAMUserSelectorArg` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMUserSelectorArgTag) {
  /// (no description).
  DBTEAMUserSelectorArgTeamMemberId,

  /// (no description).
  DBTEAMUserSelectorArgExternalId,

  /// (no description).
  DBTEAMUserSelectorArgEmail,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBTEAMUserSelectorArgTag tag;

/// (no description). @note Ensure the `isTeamMemberId` method returns true
/// before accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly, copy) NSString *teamMemberId;

/// (no description). @note Ensure the `isExternalId` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly, copy) NSString *externalId;

/// (no description). @note Ensure the `isEmail` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property (nonatomic, readonly, copy) NSString *email;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "team_member_id".
///
/// @param teamMemberId (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithTeamMemberId:(NSString *)teamMemberId;

///
/// Initializes union class with tag state of "external_id".
///
/// @param externalId (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithExternalId:(NSString *)externalId;

///
/// Initializes union class with tag state of "email".
///
/// @param email (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithEmail:(NSString *)email;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "team_member_id".
///
/// @note Call this method and ensure it returns true before accessing the
/// `teamMemberId` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "team_member_id".
///
- (BOOL)isTeamMemberId;

///
/// Retrieves whether the union's current tag state has value "external_id".
///
/// @note Call this method and ensure it returns true before accessing the
/// `externalId` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "external_id".
///
- (BOOL)isExternalId;

///
/// Retrieves whether the union's current tag state has value "email".
///
/// @note Call this method and ensure it returns true before accessing the
/// `email` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "email".
///
- (BOOL)isEmail;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMUserSelectorArg` union.
///
@interface DBTEAMUserSelectorArgSerializer : NSObject

///
/// Serializes `DBTEAMUserSelectorArg` instances.
///
/// @param instance An instance of the `DBTEAMUserSelectorArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMUserSelectorArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBTEAMUserSelectorArg *)instance;

///
/// Deserializes `DBTEAMUserSelectorArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMUserSelectorArg` API object.
///
/// @return An instantiation of the `DBTEAMUserSelectorArg` object.
///
+ (DBTEAMUserSelectorArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
