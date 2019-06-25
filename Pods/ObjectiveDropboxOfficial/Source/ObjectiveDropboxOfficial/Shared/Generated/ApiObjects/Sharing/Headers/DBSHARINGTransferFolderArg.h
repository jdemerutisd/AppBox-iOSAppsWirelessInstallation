///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGTransferFolderArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `TransferFolderArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGTransferFolderArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// The ID for the shared folder.
@property (nonatomic, readonly, copy) NSString *sharedFolderId;

/// A account or team member ID to transfer ownership to.
@property (nonatomic, readonly, copy) NSString *toDropboxId;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param sharedFolderId The ID for the shared folder.
/// @param toDropboxId A account or team member ID to transfer ownership to.
///
/// @return An initialized instance.
///
- (instancetype)initWithSharedFolderId:(NSString *)sharedFolderId toDropboxId:(NSString *)toDropboxId;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `TransferFolderArg` struct.
///
@interface DBSHARINGTransferFolderArgSerializer : NSObject

///
/// Serializes `DBSHARINGTransferFolderArg` instances.
///
/// @param instance An instance of the `DBSHARINGTransferFolderArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGTransferFolderArg` API object.
///
+ (nullable NSDictionary<NSString *, id> *)serialize:(DBSHARINGTransferFolderArg *)instance;

///
/// Deserializes `DBSHARINGTransferFolderArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGTransferFolderArg` API object.
///
/// @return An instantiation of the `DBSHARINGTransferFolderArg` object.
///
+ (DBSHARINGTransferFolderArg *)deserialize:(NSDictionary<NSString *, id> *)dict;

@end

NS_ASSUME_NONNULL_END
