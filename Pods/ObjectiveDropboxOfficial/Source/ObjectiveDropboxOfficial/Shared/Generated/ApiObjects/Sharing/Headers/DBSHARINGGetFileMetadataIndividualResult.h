///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGGetFileMetadataIndividualResult;
@class DBSHARINGSharedFileMetadata;
@class DBSHARINGSharingFileAccessError;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `GetFileMetadataIndividualResult` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGGetFileMetadataIndividualResult : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The `DBSHARINGGetFileMetadataIndividualResultTag` enum type represents the
/// possible tag states with which the
/// `DBSHARINGGetFileMetadataIndividualResult` union can exist.
typedef NS_ENUM(NSInteger, DBSHARINGGetFileMetadataIndividualResultTag) {
  /// The result for this file if it was successful.
  DBSHARINGGetFileMetadataIndividualResultMetadata,

  /// The result for this file if it was an error.
  DBSHARINGGetFileMetadataIndividualResultAccessError,

  /// (no description).
  DBSHARINGGetFileMetadataIndividualResultOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBSHARINGGetFileMetadataIndividualResultTag tag;

/// The result for this file if it was successful. @note Ensure the `isMetadata`
/// method returns true before accessing, otherwise a runtime exception will be
/// raised.
@property (nonatomic, readonly) DBSHARINGSharedFileMetadata *metadata;

/// The result for this file if it was an error. @note Ensure the
/// `isAccessError` method returns true before accessing, otherwise a runtime
/// exception will be raised.
@property (nonatomic, readonly) DBSHARINGSharingFileAccessError *accessError;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "metadata".
///
/// Description of the "metadata" tag state: The result for this file if it was
/// successful.
///
/// @param metadata The result for this file if it was successful.
///
/// @return An initialized instance.
///
- (instancetype)initWithMetadata:(DBSHARINGSharedFileMetadata *)metadata;

///
/// Initializes union class with tag state of "access_error".
///
/// Description of the "access_error" tag state: The result for this file if it
/// was an error.
///
/// @param accessError The result for this file if it was an error.
///
/// @return An initialized instance.
///
- (instancetype)initWithAccessError:(DBSHARINGSharingFileAccessError *)accessError;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (instancetype)initWithOther;

- (instancetype)init NS_UNAVAILABLE;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "metadata".
///
/// @note Call this method and ensure it returns true before accessing the
/// `metadata` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "metadata".
///
- (BOOL)isMetadata;

///
/// Retrieves whether the union's current tag state has value "access_error".
///
/// @note Call this method and ensure it returns true before accessing the
/// `accessError` property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "access_error".
///
- (BOOL)isAccessError;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString *)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBSHARINGGetFileMetadataIndividualResult`
/// union.
///
@interface DBSHARINGGetFileMetadataIndividualResultSerializer : NSObject

///
/// Serializes `DBSHARINGGetFileMetadataIndividualResult` instances.
///
/// @param instance An instance of the
/// `DBSHARINGGetFileMetadataIndividualResult` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGGetFileMetadataIndividualResult` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGGetFileMetadataIndividualResult *)instance;

///
/// Deserializes `DBSHARINGGetFileMetadataIndividualResult` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGGetFileMetadataIndividualResult` API object.
///
/// @return An instantiation of the `DBSHARINGGetFileMetadataIndividualResult`
/// object.
///
+ (DBSHARINGGetFileMetadataIndividualResult *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
