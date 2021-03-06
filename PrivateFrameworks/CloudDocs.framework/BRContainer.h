/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRContainer : NSObject <NSSecureCoding> {
    NSDictionary *_bundleIDVersions;
    NSSet *_bundleIDs;
    NSString *_containerID;
    unsigned int _currentStatus;
    long _currentStatusOnceToken;
    NSData *_dataRepresentation;
    NSSet *_documentsTypes;
    NSSet *_exportedTypes;
    NSDictionary *_iconMetadata;
    NSDictionary *_iconURLs;
    NSData *_imageSandboxExtension;
    NSSet *_importedTypes;
    BOOL _isCloudSyncTCCDisabled;
    NSNumber *_isDocumentScopePublicAsNumber;
    BOOL _isInInitialState;
    BOOL _isOverQuota;
    long _isOverQuotaOnceToken;
    NSDate *_lastServerUpdate;
    long _lastServerUpdateOnceToken;
    NSString *_localizedName;
    NSPurgeableData *_purgeableDataRepresentation;
    BOOL _shouldUsePurgeableData;
    NSString *_supportedFolderLevels;
}

@property (nonatomic, readonly, copy) NSSet *bundleIdentifiers;
@property (nonatomic, readonly) NSSet *documentsTypes;
@property (nonatomic, readonly) NSURL *documentsURL;
@property (nonatomic, readonly) NSSet *exportedTypes;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSSet *importedTypes;
@property (nonatomic) BOOL isCloudSyncTCCDisabled;
@property (nonatomic, readonly) BOOL isDocumentScopePublic;
@property (nonatomic) BOOL isInInitialState;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *supportedFolderLevels;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

+ (id)_URLForPlistOfContainerID:(id)arg1;
+ (id)_bundleIDVersionsWithProperties:(id)arg1 containerID:(id)arg2;
+ (id)_bundleIDsWithProperties:(id)arg1;
+ (id)_containerRepositoryURLForContainerID:(id)arg1;
+ (id)_documentsTypesWithProperties:(id)arg1;
+ (id)_exportedTypesWithProperties:(id)arg1;
+ (void)_generateiOSIconsForContainerID:(id)arg1 usingBundle:(struct __CFBundle { }*)arg2 generatedIcons:(id)arg3;
+ (id)_iconMetadataWithProperties:(id)arg1;
+ (id)_iconURLsWithProperties:(id)arg1 containerID:(id)arg2;
+ (id)_importedTypesWithProperties:(id)arg1;
+ (id)_isDocumentScopePublicAsNumberWithProperties:(id)arg1 containerID:(id)arg2;
+ (id)_localizedNameWithProperties:(id)arg1 containerID:(id)arg2;
+ (id)_localizedNameWithProperties:(id)arg1 containerID:(id)arg2 preferredLanguages:(id)arg3;
+ (id)_pathForIconName:(id)arg1 containerID:(id)arg2;
+ (id)_supportedFolderLevelsWithProperties:(id)arg1;
+ (id)allContainers;
+ (id)allContainersByContainerID;
+ (id)bundleIdentifiersEnumeratorForProperties:(id)arg1;
+ (id)bundlePropertyEnumerator:(id)arg1 valuesOfClass:(Class)arg2 forProperties:(id)arg3;
+ (id)classesForDecoding;
+ (id)containerForContainerID:(id)arg1;
+ (id)containerForItemAtURL:(id)arg1 error:(id*)arg2;
+ (id)containerIDFromSharedMangledID:(id)arg1;
+ (id)containerInRepositoryURL:(id)arg1 createIfMissing:(BOOL)arg2 error:(id*)arg3;
+ (id)containerInRepositoryURL:(id)arg1 error:(id*)arg2;
+ (id)containersRepositoryURL;
+ (id)documentContainers;
+ (void)initialize;
+ (BOOL)isDocumentScopePublicWithProperties:(id)arg1 containerID:(id)arg2;
+ (id)localizedNameForDefaultCloudDocsContainer;
+ (id)ownerNameFromSharedMangledID:(id)arg1;
+ (void)postContainerListUpdateNotification;
+ (void)postContainerStatusChangeNotificationWithID:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)privateMangledContainerID:(id)arg1;
+ (id)privateUnmangledContainerID:(id)arg1;
+ (id)propertiesForContainerID:(id)arg1 usingBundle:(struct __CFBundle { }*)arg2 minimumBundleVersion:(id)arg3 bundleIcons:(id*)arg4;
+ (id)sharedMangledIDWithContainerID:(id)arg1 ownerName:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (BOOL)validateContainerID:(id)arg1;
+ (BOOL)validateOwnerName:(id)arg1;
+ (BOOL)validateSharedMangledID:(id)arg1;
+ (BOOL)versionOfBundle:(id)arg1 changedFromVersion:(id)arg2;

- (id)_containerRepositoryURL;
- (id)_mangledID;
- (id)_pathForIconName:(id)arg1;
- (id)_pathForPlist;
- (void)_performWhileAccessingSecurityScopedContainer:(id /* block */)arg1;
- (void)_replaceDataRepresentationWithData:(id)arg1;
- (BOOL)_updateMetadataOnDiskWithProperties:(id)arg1;
- (void)accessDataRepresentationInBlock:(id /* block */)arg1;
- (void)accessPropertiesInBlock:(id /* block */)arg1;
- (id)bundleIDVersions;
- (id)bundleIdentifiers;
- (id)computedProperties;
- (unsigned int)currentStatus;
- (id)dataRepresentationCopy;
- (void)dealloc;
- (BOOL)deleteAllContentsOnClientAndServer:(id*)arg1;
- (id)description;
- (id)documentsTypes;
- (id)documentsURL;
- (void)encodeWithCoder:(id)arg1;
- (id)exportedTypes;
- (BOOL)hasIconWithName:(id)arg1;
- (id)iconMetadata;
- (id)iconURLs;
- (id)identifier;
- (id)imageDataForSize:(struct CGSize { float x1; float x2; })arg1 scale:(int)arg2;
- (id)imageDataForSize:(struct CGSize { float x1; float x2; })arg1 scale:(int)arg2 isiOSIcon:(BOOL*)arg3;
- (id)imageRepresentationsAvailable;
- (id)importedTypes;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerID:(id)arg1 dataRepresentation:(id)arg2;
- (BOOL)isCloudSyncTCCDisabled;
- (BOOL)isDocumentScopePublic;
- (BOOL)isInInitialState;
- (BOOL)isOverQuota;
- (id)lastServerUpdate;
- (id)localizedName;
- (id)localizedNameWithPreferredLanguages:(id)arg1;
- (void)setCurrentStatus:(unsigned int)arg1;
- (void)setIsCloudSyncTCCDisabled:(BOOL)arg1;
- (void)setIsInInitialState:(BOOL)arg1;
- (void)setLastServerUpdate:(id)arg1;
- (void)setOverQuota:(BOOL)arg1;
- (id)shortDescription;
- (id)supportedFolderLevels;
- (BOOL)updateMetadataWithExtractorProperties:(id)arg1 iconNames:(id)arg2 bundleID:(id)arg3;
- (BOOL)updateMetadataWithRecordData:(id)arg1 iconPaths:(id)arg2;
- (id)versionNumberForBundleIdentifier:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

- (unsigned int)currentStatus;
- (BOOL)isOverQuota;
- (id)lastServerUpdate;

@end
