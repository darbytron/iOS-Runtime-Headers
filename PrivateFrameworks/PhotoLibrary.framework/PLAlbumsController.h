/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLVideoRemaker, UINavigationController, PLToolbar, PLPhotoScrollerViewController, MLPhotoAlbum, PLImageTileView, PLEmptyAlbumView, UIView, UITransitionView, PLCropOverlay, PLMobileMeHelper, UIActionSheet, PLAlbumScrollView, NSData, PLPublishingAgent, PLCameraImage, UIProgressHUD, UIModalView, UILongPressGestureRecognizer, UIWindow, <PLAlbumsControllerDelegate>, PLAlbumView, PLProgressView, NSTimer;

@interface PLAlbumsController : NSObject <PLAlbumScrollViewDelegate, PLImageScrollViewDelegate, PLVideoViewDelegate, UIScrollViewDelegate, UIToolbarDelegate, UIModalViewDelegate, UINavigationControllerDelegate, UIActionSheetDelegate> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    unsigned int _overlayIsHidden : 1;
    unsigned int _didSetInitialInterfaceOrientation : 1;
    unsigned int _rotationDisabledByZoom : 1;
    unsigned int _videoEditingMode : 1;
    unsigned int _remaking : 1;
    unsigned int _transcoding : 1;
    unsigned int _sendingViaMMS : 1;
    unsigned int _passthroughTrimming : 1;
    unsigned int _clearingFullScreenView : 1;
    unsigned int _scrolling : 1;
    unsigned int _canEditVideo : 1;
    unsigned int _canShowCopyCallout : 1;
    unsigned int _viewIsDisappearing : 1;
    unsigned int _didRotate : 1;
    unsigned int _didSetPhotoScrollerViewController : 1;
    SEL _actionAfterForcedRotation;
    UIActionSheet *_actionView;
    MLPhotoAlbum *_album;
    PLAlbumView *_albumView;
    UIModalView *_alertSheet;
    BOOL _animating;
    } _animationFrame;
    UIView *_animationView;
    NSUInteger _appInteractionDisabled;
    id _attachmentIdentifier;
    BOOL _beingRotated;
    NSUInteger _bottomBarDisabled;
    PLToolbar *_buttonBar;
    UIView *_buttonBarContainerView;
    UITransitionView *_cameraTransitionView;
    SEL _completionSelector;
    } _contentStartSize;
    PLCropOverlay *_cropOverlay;
    NSUInteger _currentIndex;
    PLPublishingAgent *_currentPublishingAgent;
    PLCameraImage *_currentVideo;
    <PLAlbumsControllerDelegate> *_delegate;
    NSUInteger _deletedIndex;
    NSInteger _deviceOrientation;
    NSInteger _directionToMoveAfterSmoothScrollCompletes;
    NSData *_emailData;
    SEL _emailPhotoAction;
    PLEmptyAlbumView *_emptyCameraView;
    float _endScale;
    UIView *_fadeToBlackView;
    UIView *_fromView;
    BOOL _ignoreGestures;
    struct __CFArray { } *_imageIndexes;
    NSInteger _imageScrollerLastSmoothScrollDirection;
    NSInteger _lastActionMenuButtonIndex;
    double _lastButtonClickTime;
    double _lastRubberbandScrollTime;
    double _maximumTrimLength;
    UINavigationController *_mmsController;
    PLMobileMeHelper *_mobileMeHelper;
    NSUInteger _navigationBarDisabled;
    NSInteger _nextOrientation;
    void *_person;
    BOOL _playingVideo;
    UIModalView *_popupAlert;
    NSUInteger _previousIndex;
    id _previousLeftBarButtonItem;
    id _previousRightBarButtonItem;
    NSUInteger _previousSimpleRemotePriority;
    NSTimer *_progressUpdateTimer;
    PLProgressView *_progressView;
    PLPublishingAgent *_publishingAgentToPresent;
    UILongPressGestureRecognizer *_recognizer;
    PLVideoRemaker *_remaker;
    NSInteger _remakerMode;
    NSUInteger _rotationDisabled;
    } _savedScrollerFrame;
    UIView *_savedScrollerSuperview;
    } _savedScrollerTransform;
    UIProgressHUD *_savingPhotoHud;
    PLAlbumScrollView *_scroller;
    PLPhotoScrollerViewController *_scrollerViewController;
    NSTimer *_scrubTimer;
    BOOL _scrubbingStarted;
    BOOL _scrubbingTopSpeed;
    double _slideshowDelay;
    NSInteger _slideshowStatus;
    BOOL _slideshowTransitionIsScheduled;
    UITransitionView *_slideshowTransitionView;
    float _startScale;
    NSUInteger _statusBarIsLocked;
    NSInteger _statusBarMode;
    struct __CFDictionary { } *_tileCache;
    PLImageTileView *_tiledView;
    UIView *_toView;
    NSTimer *_toolbarTimer;
    UIView *_tvOutContentView;
    UIView *_tvOutFromView;
    BOOL _tvOutOn;
    PLAlbumScrollView *_tvOutScroller;
    struct __CFDictionary { } *_tvOutTileCache;
    PLImageTileView *_tvOutTiledView;
    UIView *_tvOutToView;
    UITransitionView *_tvOutTransitionView;
    UIWindow *_tvOutWindow;
    UIModalView *_videoTooLongAlertSheet;
    struct __CFDictionary { } *_videoViewCache;
}

@property <PLAlbumsControllerDelegate> *delegate; /* unknown property attribute: V_delegate */
@property(retain) MLPhotoAlbum *album;
@property(readonly) PLAlbumScrollView *albumScroller;
@property(readonly) PLToolbar *buttonBar;
@property(readonly) UIView *buttonBarContainerView;
@property(retain) MLPhoto *currentImage;
@property(readonly) MLPhoto *nextImage;
@property(readonly) MLPhoto *previousImage;
@property BOOL canEditVideo;
@property BOOL canShowCopyCallout;
@property NSUInteger currentImageIndex;

- (NSInteger)_albumImageIndexForTileIndex:(NSInteger)arg1;
- (BOOL)_albumScrollerIsVisible;
- (NSInteger)_allowedRotationGesture;
- (void)_animateSendToEmail;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_animationDestinationRectForImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_autohideCopyCallout;
- (void)_backgroundSavePhoto:(id)arg1;
- (void)_cameraImageIsReady:(id)arg1;
- (BOOL)_canEmailPhoto;
- (void)_cancelProgressTimer;
- (void)_cancelScrubTimer;
- (void)_cancelSlideshow;
- (void)_cancelToolbarTimer;
- (void)_cancelVideoEditingMode:(id)arg1;
- (void)_capabilitiesChanged;
- (void)_cleanseCache:(struct __CFDictionary {}**)arg1 currentAlbumImageIndex:(NSInteger)arg2;
- (void)_clearFullScreenView;
- (void)_clearTileCache;
- (void)_configureScroller:(id*)arg1 tiledView:(id*)arg2;
- (void)_configureScrollerOrientation;
- (NSInteger)_currentIndexFromScrollPosition;
- (BOOL)_currentItemIsPlaying;
- (BOOL)_currentItemIsVideo;
- (void)_delayedExitEditingMode;
- (void)_delayedTranscodeForEmail;
- (NSInteger)_deviceOrientationAfterRotatingByDegrees:(float)arg1;
- (void)_dismissActionMenuAndShowButtonBar:(BOOL)arg1;
- (void)_dismissAlertSheet;
- (void)_dismissCropOverlay;
- (void)_dismissModalViewControllerAnimated:(BOOL)arg1;
- (double)_durationForCurrentVideo;
- (void)_emailAnimationFinished;
- (void)_enterVideoEditingMode;
- (void)_fadeIn;
- (void)_finishedSlidingDownImage:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_flushTileCache;
- (void)_gestureView:(id)arg1 imageScroller:(id*)arg2 imageTile:(id*)arg3 rotationView:(id*)arg4 item:(id*)arg5;
- (void)_handleDirectionButtonMouseDown:(id)arg1 direction:(NSInteger)arg2;
- (id)_imageScrollerForIndex:(NSInteger)arg1 image:(id)arg2 tileCache:(struct __CFDictionary { }*)arg3;
- (id)_imageScrollerForIndex:(NSInteger)arg1 image:(id)arg2;
- (void)_longPressRecognized:(id)arg1;
- (id)_modelImageForIndex:(NSInteger)arg1;
- (id)_navigationController;
- (void)_performSendViaEmail;
- (void)_performSetWallpaper;
- (id)_photoScrollerViewController;
- (void)_pictureWasTaken:(id)arg1;
- (void)_playTimerFired;
- (void)_preloadImage:(id)arg1 albumImageIndex:(NSInteger)arg2 cache:(struct __CFDictionary { }*)arg3;
- (void)_preloadImage:(id)arg1 albumImageIndex:(NSInteger)arg2;
- (void)_preloadVideo:(id)arg1 albumImageIndex:(NSInteger)arg2 cache:(struct __CFDictionary { }*)arg3;
- (void)_prepareForTVOut;
- (void)_presentAlertSheetWithTitle:(id)arg1 buttonTitles:(id)arg2 defaultButtonIndex:(NSInteger)arg3 redButtonIndex:(NSInteger)arg4 context:(id)arg5;
- (void)_publishToMobileMe;
- (void)_publishToMobileMeClicked;
- (void)_publishToYouTube;
- (void)_publishToYouTubeClicked;
- (void)_publishingAgentDidFinishPublishing:(id)arg1;
- (void)_publishingAgentDidStartPublishing:(id)arg1;
- (void)_reallyDismissActionMenu;
- (void)_reallySendViaEmail:(id)arg1;
- (void)_reallyShowPeoplePicker;
- (void)_remakerDidFinish:(id)arg1;
- (void)_removeProgressView;
- (void)_removeTVOutWindow;
- (void)_removeTileCacheEntryForAlbumImageIndex:(NSInteger)arg1;
- (void)_resetIndexArrayStartingWithIndex:(NSInteger)arg1 shuffleImages:(BOOL)arg2 keepPhotoAtStartingIndex:(BOOL)arg3;
- (void)_resetScrubTimerForDirection:(NSInteger)arg1;
- (void)_resetToolbarTimer:(float)arg1;
- (id)_retainedImageViewForModelImage:(id)arg1;
- (void)_rotatePhotoContentToOrientation:(NSInteger)arg1 duration:(float)arg2;
- (float)_rotationDegreesForDeviceRotation:(NSInteger)arg1;
- (float)_rotationDegreesToAchieveDeviceRotation:(NSInteger)arg1;
- (void)_runLKTransition:(id)arg1 transitionView:(id)arg2 fromView:(id)arg3 toView:(id)arg4;
- (void)_runLKTransition:(id)arg1;
- (void)_savePhoto;
- (void)_savePhotoFinished:(id)arg1;
- (id)_scrollerForImageView:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2;
- (void)_scrubTimerFired:(id)arg1;
- (void)_sendPhotoUsingSelector:(SEL)arg1 delay:(float)arg2;
- (void)_setPersonForCropOverlay:(void*)arg1;
- (void)_setZoomAndRotationEnabled:(BOOL)arg1;
- (BOOL)_shouldRespondToButtonBarButtons;
- (void)_showButtonGroup:(NSInteger)arg1 withDuration:(NSInteger)arg2;
- (void)_showCompositionForPublishingBundleNamed:(id)arg1 transcodedVideoPath:(id)arg2;
- (void)_showCropOverlayWithTitle:(id)arg1 subtitle:(id)arg2 cropButtonTitle:(id)arg3;
- (void)_showMMSComposeSheet;
- (void)_showMailComposition:(id)arg1 transcodedVideoPath:(id)arg2;
- (void)_showMobileMeComposition:(id)arg1 transcodedVideoPath:(id)arg2;
- (void)_showMobileMeErrorWithTitle:(id)arg1 body:(id)arg2;
- (void)_showOverlaysForResume;
- (void)_showPeoplePicker;
- (void)_showRemakerProgressView;
- (void)_showVideoTooLongAlert;
- (void)_showYouTubeComposition:(id)arg1 transcodedVideoPath:(id)arg2;
- (void)_simpleRemoteActionDidOccur:(id)arg1;
- (void)_startSlideshow;
- (void)_stopScrubbing:(id)arg1;
- (void)_stopVideoPlaybackForIndex:(NSInteger)arg1;
- (void)_transcodeVideoUsingMode:(NSInteger)arg1 completionSelector:(SEL)arg2;
- (NSInteger)_transitionForButtonClickInDirection:(NSInteger)arg1;
- (void)_transitionToImage:(id)arg1 fromOldIndex:(NSInteger)arg2 toNewIndex:(NSInteger)arg3 transition:(NSInteger)arg4 transitionView:(id)arg5;
- (void)_transitionToImage:(id)arg1 fromOldIndex:(NSInteger)arg2 toNewIndex:(NSInteger)arg3 transition:(NSInteger)arg4;
- (void)_trimVideo:(id)arg1;
- (void)_updateProgressView;
- (void)_updateRotationView:(id)arg1 itemView:(id)arg2;
- (void)_updateTVOutOffset;
- (void)_videoTooLongAlertWasDismissedWithButtonIndex:(NSUInteger)arg1;
- (id)_videoViewForIndex:(NSInteger)arg1 image:(id)arg2 tileCache:(struct __CFDictionary { }*)arg3;
- (id)_videoViewForVideoImage:(id)arg1;
- (void)actionButtonClicked:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;
- (id)album;
- (id)albumScroller;
- (BOOL)albumScrollerCanCopy:(id)arg1;
- (void)albumScrollerCanceledScroll:(id)arg1;
- (void)albumScrollerCopy:(id)arg1;
- (void)albumScrollerDidEndSmoothScroll;
- (void)albumScrollerFinishedScroll:(id)arg1;
- (void)albumScrollerWillStartTrackingMouse:(id)arg1;
- (void)alertSheet:(id)arg1 buttonClicked:(NSInteger)arg2;
- (void)animateToIndex;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)applicationResumed:(id)arg1;
- (void)applicationSuspended:(id)arg1;
- (void)applicationWillBeginSuspendAnimation:(id)arg1;
- (void)assignToContactClicked;
- (void)buttonBar:(id)arg1 didFinishAnimation:(NSInteger)arg2 forButton:(NSInteger)arg3;
- (id)buttonBar;
- (id)buttonBarContainerView;
- (void)cameraAlbumDidChange;
- (BOOL)canEditVideo;
- (BOOL)canShowCopyCallout;
- (BOOL)canShowNextImage:(BOOL)arg1;
- (BOOL)canShowNextImage;
- (BOOL)canShowPreviousImage;
- (void)cancelButtonClicked:(id)arg1;
- (void)composeSheetDidAppear;
- (void)cropOverlayWasCancelled:(id)arg1;
- (void)cropOverlayWasOKed:(id)arg1;
- (id)currentImage;
- (NSUInteger)currentImageIndex;
- (void)dealloc;
- (void)delayToolbarFade;
- (id)delegate;
- (void)deleteCurrentImage;
- (void)deleteImageClicked:(id)arg1;
- (NSInteger)deviceOrientationForTrackingInScroller:(id)arg1;
- (void)didDismissAlertSheet:(id)arg1;
- (void)didFinishGesture:(NSInteger)arg1 inView:(id)arg2 forEvent:(struct __GSEvent { }*)arg3;
- (void)didFinishSuckingToTrash:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)didRotateFromInterfaceOrientation:(NSInteger)arg1;
- (double)durationForTransition:(NSInteger)arg1;
- (void)fadeInAnimation:(id)arg1 finished:(id)arg2;
- (void)finishDelete;
- (void)handleDoubleTap:(struct __GSEvent { }*)arg1;
- (void)handleSingleTap:(struct __GSEvent { }*)arg1;
- (void)hideOverlays;
- (void)hideOverlaysWithDuration:(float)arg1 hideStatusBar:(BOOL)arg2;
- (id)imageScrollerSiblingForDirection:(NSInteger)arg1;
- (void)imageViewDidSwitchToFullSizeImage:(id)arg1;
- (BOOL)imageViewIsDisplayingLandscape:(id)arg1;
- (void)imageViewWillSwitchToFullSizeImage:(id)arg1;
- (id)init;
- (BOOL)isBeingRotated;
- (BOOL)isRotationEnabled;
- (void)leftButtonClicked:(id)arg1;
- (void)loadCurrentConfiguration:(id)arg1;
- (void)mouseDownInLeftButton:(id)arg1;
- (void)mouseDownInRightButton:(id)arg1;
- (id)nextImage;
- (void)openTrash;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(NSInteger)arg3 identifier:(NSInteger)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)playSlideshow;
- (void)playSlideshowClicked:(id)arg1;
- (void)prepareDeleteImagePreviousSlide;
- (void)prepareDeleteImageWithNextSlide;
- (void)prepareForSucking;
- (id)previousImage;
- (void)publishToMobileMeClicked;
- (void)publishToYouTubeClicked;
- (void)resetToolbarTimer;
- (void)rightButtonClicked:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)scrubOverlayTitle;
- (void)sendViaEmailClicked;
- (void)sendViaMMSClicked;
- (void)setAlbum:(id)arg1;
- (void)setAlbumScrollerEnabled:(BOOL)arg1;
- (void)setAppInteractionDisabled:(BOOL)arg1;
- (void)setBeingRotated:(BOOL)arg1;
- (void)setBottomBarDisabled:(BOOL)arg1;
- (void)setCanEditVideo:(BOOL)arg1;
- (void)setCanShowCopyCallout:(BOOL)arg1;
- (void)setCurrentImage:(id)arg1;
- (void)setCurrentImageIndex:(NSUInteger)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInterfaceOrientation:(NSInteger)arg1;
- (void)setNavigationBarDisabled:(BOOL)arg1;
- (void)setRotationDisabled:(BOOL)arg1;
- (void)setStatusBarIsLocked:(BOOL)arg1;
- (void)setVideoEditingMode:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setVideoEditingMode:(BOOL)arg1;
- (void)showNextImageWithTransition:(NSInteger)arg1;
- (void)showOverlaysWithDuration:(float)arg1;
- (void)showPreviousImageWithTransition:(NSInteger)arg1;
- (void)smsComposeControllerCancelled:(id)arg1;
- (void)smsComposeControllerDataInserted:(id)arg1;
- (void)smsComposeControllerSendStarted:(id)arg1;
- (void)startSlideShow;
- (BOOL)statusBarIsLocked;
- (NSInteger)statusBarMode;
- (void)stopPlaying;
- (void)storeCurrentConfiguration:(id)arg1;
- (void)suckToTrash:(id)arg1 transitionParent:(id)arg2;
- (void)tileView:(id)arg1 createdTile:(id)arg2;
- (void)tileWasRemoved:(id)arg1;
- (void)tileWillBeDisplayed:(id)arg1;
- (void)togglePlay;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)updateAfterAnimation;
- (void)updateBeforeTransition;
- (void)updateButtonBar;
- (void)updateOverlays;
- (void)updateProgressView;
- (void)useAsScreenSaverClicked;
- (BOOL)videoEditingMode;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (void)videoView:(id)arg1 remakingProgressDidChange:(float)arg2;
- (BOOL)videoViewCanBeginPlayback:(id)arg1;
- (BOOL)videoViewCanFlushOnViewRemoval:(id)arg1;
- (void)videoViewDidBeginEditing:(id)arg1;
- (void)videoViewDidBeginPlayback:(id)arg1;
- (void)videoViewDidBeginRemaking:(id)arg1;
- (void)videoViewDidBeginScrubbing:(id)arg1;
- (void)videoViewDidEndPlayback:(id)arg1 didFinish:(BOOL)arg2;
- (void)videoViewDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (void)videoViewDidEndScrubbing:(id)arg1;
- (void)videoViewDidPausePlayback:(id)arg1;
- (BOOL)videoViewShouldDisplayOverlay:(id)arg1;
- (BOOL)videoViewShouldDisplayScrubber:(id)arg1;
- (BOOL)videoViewShouldPlayImmediately:(id)arg1;
- (BOOL)videoViewShouldRemoveFromViewHierarchy:(id)arg1;
- (void)view:(id)arg1 handleTapWithCount:(NSInteger)arg2 event:(struct __GSEvent { }*)arg3 fingerCount:(NSInteger)arg4;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)willRotateToInterfaceOrientation:(NSInteger)arg1 fromInterfaceOrientation:(NSInteger)arg2 duration:(double)arg3;
- (void)willStartGesture:(NSInteger)arg1 inView:(id)arg2 forEvent:(struct __GSEvent { }*)arg3;
- (void)willStartGesturesInView:(id)arg1 forEvent:(struct __GSEvent { }*)arg2;

@end