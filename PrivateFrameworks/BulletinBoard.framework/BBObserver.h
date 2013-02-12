/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class <BBObserverDelegate>, NSMapTable, NSMutableDictionary, NSMutableSet;

@interface BBObserver : NSObject <XPCProxyTarget> {
    struct { 
        unsigned int addBulletin : 1; 
        unsigned int modifyBulletin : 1; 
        unsigned int removeBulletin : 1; 
        unsigned int sectionOrderRule : 1; 
        unsigned int sectionOrder : 1; 
        unsigned int sectionInfo : 1; 
        unsigned int sectionParameters : 1; 
        unsigned int fetchImage : 1; 
        unsigned int fetchSize : 1; 
        unsigned int sizeConstraints : 1; 
        unsigned int multiSizeConstraints : 1; 
        unsigned int imageForThumbData : 1; 
        unsigned int sizeForThumbSize : 1; 
        unsigned int purgeReferences : 1; 
    NSMutableDictionary *_attachmentInfoByBulletinID;
    NSMapTable *_bulletinLifeAssertions;
    NSMutableDictionary *_bulletinUpdateQueuesBySectionID;
    <BBObserverDelegate> *_delegate;
    } _delegateFlags;
    unsigned int _numberOfBulletinFetchesUnderway;
    unsigned int _observerFeed;
    NSMutableSet *_sectionIDsWithUpdatesUnderway;
    NSMutableDictionary *_sectionParameters;
    id _serverProxy;
}

@property <BBObserverDelegate> * delegate;
@property unsigned int observerFeed;

+ (void)initialize;

- (BOOL)_attachmentImagesFetchedForBulletinID:(id)arg1;
- (id)_attachmentInfoForBulletinID:(id)arg1 create:(BOOL)arg2;
- (BOOL)_attachmentSizesFetchedForBulletinID:(id)arg1;
- (void)_dequeueBulletinUpdateIfPossibleForSection:(id)arg1;
- (void)_fetchAndProcessImageForBulletinID:(id)arg1 withKey:(id)arg2 constraints:(id)arg3 attachmentType:(int)arg4 completion:(id)arg5;
- (void)_getAttachmentImagesIfPossibleForBulletin:(id)arg1 withCompletion:(id)arg2;
- (void)_getAttachmentImagesIfPossibleForBulletins:(id)arg1 withCompletion:(id)arg2;
- (void)_getAttachmentSizesIfPossibleForBulletin:(id)arg1 withCompletion:(id)arg2;
- (void)_getAttachmentSizesIfPossibleForBulletins:(id)arg1 withCompletion:(id)arg2;
- (void)_getParametersIfNecessaryForSectionID:(id)arg1 withCompletion:(id)arg2;
- (void)_getParametersIfNecessaryForSectionIDs:(id)arg1 withCompletion:(id)arg2;
- (id)_lifeAssertionForBulletinID:(id)arg1;
- (void)_noteAttachmentImagesFetchedForBulletinID:(id)arg1;
- (void)_noteAttachmentSizesFetchedForBulletinID:(id)arg1;
- (void)_noteCompletedBulletinFetch;
- (void)_noteCompletedBulletinUpdateForSection:(id)arg1;
- (void)_performBulletinFetch:(id)arg1;
- (void)_performOrEnqueueBulletinUpdate:(id)arg1 forSection:(id)arg2;
- (void)_preFetchAttachmentInfoIfNecessaryForBulletin:(id)arg1 withCompletion:(id)arg2;
- (void)_preFetchAttachmentInfoIfNecessaryForBulletins:(id)arg1 withCompletion:(id)arg2;
- (id)_reasonableConstraintsForAttachmentType:(int)arg1;
- (void)_registerBulletin:(id)arg1 withTransactionID:(unsigned int)arg2;
- (void)_setAttachmentImage:(id)arg1 forKey:(id)arg2 forBulletinID:(id)arg3;
- (void)_setAttachmentSize:(struct CGSize { float x1; float x2; })arg1 forKey:(id)arg2 forBulletinID:(id)arg3;
- (void)assertionExpired:(id)arg1 transactionID:(unsigned int)arg2;
- (id)attachmentImageForKey:(id)arg1 forBulletinID:(id)arg2;
- (struct CGSize { float x1; float x2; })attachmentSizeForKey:(id)arg1 forBulletinID:(id)arg2;
- (void)clearSection:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)getAttachmentImageForBulletin:(id)arg1 withCompletion:(id)arg2;
- (void)getRecentUnacknowledgedBulletinsForFeeds:(unsigned int)arg1 withCompletion:(id)arg2;
- (void)getSectionInfoWithCompletion:(id)arg1;
- (void)getSectionOrderRuleWithCompletion:(id)arg1;
- (void)getSortDescriptorsForSectionID:(id)arg1 withCompletion:(id)arg2;
- (id)init;
- (void)invalidate;
- (unsigned int)observerFeed;
- (id)parametersForSectionID:(id)arg1;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)requestListBulletinsForSectionID:(id)arg1;
- (void)sendResponse:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setObserverFeed:(unsigned int)arg1;
- (void)updateBulletin:(id)arg1 forFeeds:(unsigned int)arg2;
- (void)updateSectionInfo:(id)arg1;
- (void)updateSectionOrder:(id)arg1;
- (void)updateSectionOrderRule:(id)arg1;
- (void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;

@end