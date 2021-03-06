/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
 */

@class <PUMapAnnotationAnimatable>, NSArray, NSDate, NSDictionary, NSMutableOrderedSet, NSNumber, NSOrderedSet, NSString, NSURL, PLManagedAsset, UIImage;

@interface PUMapAlbum : NSObject <PLAlbumProtocol> {
    <PUMapAnnotationAnimatable> *_annotation;
    NSMutableOrderedSet *_assets;
    unsigned int _photosCount;
    BOOL _setKindCounts;
    unsigned int _videosCount;
}

@property(readonly) <PUMapAnnotationAnimatable> * annotation;
@property(readonly) unsigned int approximateCount;
@property(readonly) NSOrderedSet * assets;
@property(readonly) unsigned int assetsCount;
@property(readonly) BOOL canContributeToCloudSharedAlbum;
@property(readonly) BOOL canShowAvalancheStacks;
@property(readonly) BOOL canShowComments;
@property(readonly) NSDate * endDate;
@property(readonly) NSURL * groupURL;
@property BOOL hasUnseenContentBoolValue;
@property(retain) NSString * importSessionID;
@property(readonly) BOOL isCameraAlbum;
@property(readonly) BOOL isCloudSharedAlbum;
@property(readonly) BOOL isEmpty;
@property(readonly) BOOL isLibrary;
@property(readonly) BOOL isMultipleContributorCloudSharedAlbum;
@property(readonly) BOOL isOwnedCloudSharedAlbum;
@property(readonly) BOOL isPanoramasAlbum;
@property(readonly) BOOL isPendingPhotoStreamAlbum;
@property(readonly) BOOL isPhotoStreamAlbum;
@property(readonly) BOOL isStandInAlbum;
@property(readonly) BOOL isWallpaperAlbum;
@property(retain) PLManagedAsset * keyAsset;
@property(readonly) NSNumber * kind;
@property(readonly) int kindValue;
@property(readonly) NSArray * localizedLocationNames;
@property(readonly) NSString * localizedTitle;
@property(readonly) NSMutableOrderedSet * mutableAssets;
@property(readonly) NSString * name;
@property int pendingItemsCount;
@property int pendingItemsType;
@property(readonly) unsigned int photosCount;
@property(readonly) UIImage * posterImage;
@property(retain) PLManagedAsset * secondaryKeyAsset;
@property(readonly) id sectioningComparator;
@property(readonly) BOOL shouldDeleteWhenEmpty;
@property(retain) NSDictionary * slideshowSettings;
@property(readonly) id sortingComparator;
@property(readonly) NSDate * startDate;
@property(retain) PLManagedAsset * tertiaryKeyAsset;
@property(readonly) NSString * title;
@property(readonly) NSString * uuid;
@property(readonly) unsigned int videosCount;

- (void).cxx_destruct;
- (void)_calculateKindCounts;
- (id)annotation;
- (unsigned int)approximateCount;
- (id)assets;
- (unsigned int)assetsCount;
- (void)batchFetchAssets:(id)arg1;
- (BOOL)canContributeToCloudSharedAlbum;
- (BOOL)canPerformEditOperation:(int)arg1;
- (BOOL)canShowAvalancheStacks;
- (BOOL)canShowComments;
- (id)displayableIndexesForCount:(unsigned int)arg1;
- (id)endDate;
- (id)groupURL;
- (BOOL)hasUnseenContentBoolValue;
- (id)importSessionID;
- (id)initWithAnnotation:(id)arg1;
- (BOOL)isCameraAlbum;
- (BOOL)isCloudSharedAlbum;
- (BOOL)isEmpty;
- (BOOL)isLibrary;
- (BOOL)isMultipleContributorCloudSharedAlbum;
- (BOOL)isOwnedCloudSharedAlbum;
- (BOOL)isPanoramasAlbum;
- (BOOL)isPendingPhotoStreamAlbum;
- (BOOL)isPhotoStreamAlbum;
- (BOOL)isStandInAlbum;
- (BOOL)isWallpaperAlbum;
- (id)keyAsset;
- (id)kind;
- (int)kindValue;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (id)mutableAssets;
- (int)pendingItemsCount;
- (int)pendingItemsType;
- (unsigned int)photosCount;
- (id)posterImage;
- (void)reducePendingItemsCountBy:(unsigned int)arg1;
- (id)secondaryKeyAsset;
- (id)sectioningComparator;
- (void)setHasUnseenContentBoolValue:(BOOL)arg1;
- (void)setImportSessionID:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setPendingItemsCount:(int)arg1;
- (void)setPendingItemsType:(int)arg1;
- (void)setSecondaryKeyAsset:(id)arg1;
- (void)setSlideshowSettings:(id)arg1;
- (void)setTertiaryKeyAsset:(id)arg1;
- (BOOL)shouldDeleteWhenEmpty;
- (id)slideshowSettings;
- (id)sortingComparator;
- (id)startDate;
- (id)tertiaryKeyAsset;
- (id)title;
- (id)titleForSectionStartingAtIndex:(unsigned int)arg1;
- (id)uuid;
- (unsigned int)videosCount;

@end
