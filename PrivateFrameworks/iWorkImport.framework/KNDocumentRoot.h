/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNDocumentRoot : TSADocumentRoot <TSKModel, TSTResolverContainerNameProvider> {
    BOOL _isShowcastAllowed;
    BOOL mIsObservingRecording;
    KNRecordingSyncMaintainer *mRecordingSyncMaintainer;
    KNShow *mShow;
    KNSlidePreviewManager *mSlidePreviewManager;
    KNThumbnailManager *mThumbnailManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <KNDocumentRootDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isShowcastAllowed;
@property (nonatomic, readonly) KNRecordingSyncMaintainer *recordingSyncMaintainer;
@property (nonatomic, retain) KNShow *show;
@property (readonly) Class superclass;

+ (void)localizeModelObject:(id)arg1 withTemplateBundle:(id)arg2;

- (id)UIStateForChart:(id)arg1;
- (unsigned int)applicationType;
- (void)changeShowSizeTo:(struct CGSize { float x1; float x2; })arg1;
- (id)childEnumerator;
- (int)compareLocationSortingInfo:(id)arg1 toSortingInfo:(id)arg2;
- (id)createViewStateRootForContinuation:(BOOL)arg1;
- (void)dealloc;
- (void)documentDidLoad;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (BOOL)isMultiPageForQuickLook;
- (BOOL)isSharedReadOnly;
- (BOOL)isShowcastAllowed;
- (void)loadFromArchive:(const struct DocumentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DocumentArchive {} *x5; struct Reference {} *x6; struct Reference {} *x7; }*)arg1 unarchiver:(id)arg2;
- (id)nameForResolverContainer:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)p_applicationDidBecomeActive:(id)arg1;
- (void)p_applicationWillResignActive:(id)arg1;
- (void)p_hyperlinkAndBreadcrumbUpgradeForUnity20SlideNodes:(id)arg1;
- (void)p_thumbnailUpgradeForUnity20SlideNodes:(id)arg1 andMasterSlideNodess:(id)arg2;
- (void)prepareForSavingAsTemplate;
- (void)preprocessForSaveAsTheme;
- (id)protected_defaultTextPresetOrdering;
- (id)recordingSyncMaintainer;
- (id)resolverContainerForName:(id)arg1 caseSensitive:(BOOL)arg2;
- (id)resolverContainerNameForResolver:(id)arg1;
- (id)resolverContainerNamesMatchingPrefix:(id)arg1;
- (id)resolverMatchingName:(id)arg1 contextContainerName:(id)arg2;
- (id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2;
- (id)resolversMatchingPrefix:(id)arg1;
- (unsigned int)rootSearchTargetCountThroughIndex:(unsigned int)arg1;
- (void)saveToArchive:(struct DocumentArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct DocumentArchive {} *x5; struct Reference {} *x6; struct Reference {} *x7; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShow:(id)arg1;
- (void)setStylesheetForUpgradeToSingleStylesheet:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setThemeForTemplateImport:(id)arg1;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (BOOL)shouldAllowDrawableInGroups:(id)arg1 forImport:(BOOL)arg2;
- (BOOL)shouldShowComments;
- (id)show;
- (id)slideNodeForClearedShow;
- (id)stylesToNotResizeInStylesheet:(id)arg1;
- (id)stylesheet;
- (id)theme;
- (void)upgradeTextStylesForUnityAfterSingleStylesheetUpgrade;
- (BOOL)validateUIState:(id)arg1;
- (id)warningLocationDescriptionForAffectedObjects:(id)arg1 sortingInfo:(id*)arg2;
- (void)willClose;
- (void)withRootSearchTargetAtIndex:(unsigned int)arg1 executeBlock:(id /* block */)arg2;
- (unsigned int)writingDirection;
- (unsigned int)writingDirectionForStorage;

@end
