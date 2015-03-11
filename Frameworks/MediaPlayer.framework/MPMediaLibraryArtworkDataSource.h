/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPArtworkResizeUtility, NSCache, NSString;

@interface MPMediaLibraryArtworkDataSource : NSObject <MPArtworkDataSource> {
    MPArtworkResizeUtility *_artworkResizeUtility;
    NSCache *_fallbackCache;
    bool_canUseSurfaceBackedImages;
}

@property(retain) MPArtworkResizeUtility * artworkResizeUtility;
@property bool canUseSurfaceBackedImages;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSCache * fallbackCache;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_bestSizeForArtworkCatalog:(id)arg1;
- (void)_cacheRepresentation:(id)arg1 forCatalog:(id)arg2;
- (id)_cachedRepresentationForCatalog:(id)arg1;
- (bool)_isRepresentation:(id)arg1 validForCatalog:(id)arg2;
- (bool)_isRepresentationSize:(struct CGSize { double x1; double x2; })arg1 validForFittingSize:(struct CGSize { double x1; double x2; })arg2;
- (id)_representationAtSize:(struct CGSize { double x1; double x2; })arg1 forCatalog:(id)arg2;
- (id)_resizeArtwork:(id)arg1 toSize:(struct CGSize { double x1; double x2; })arg2 completionHandler:(id)arg3;
- (bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (bool)areRepresentationsForCatalog:(id)arg1 visuallyIdenticalToRepresentationsForCatalog:(id)arg2;
- (id)artworkResizeUtility;
- (bool)canUseSurfaceBackedImages;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (id)fallbackCache;
- (id)init;
- (bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(id)arg2;
- (void)setArtworkResizeUtility:(id)arg1;
- (void)setCanUseSurfaceBackedImages:(bool)arg1;
- (void)setFallbackCache:(id)arg1;

@end