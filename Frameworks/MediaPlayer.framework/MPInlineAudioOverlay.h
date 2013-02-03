/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPVideoViewController, UIView, UILabel, NSString, UIImageView, MPInlineAudioTransportControls;

@interface MPInlineAudioOverlay : MPPlaybackControlsView {
    UIView *_backgroundView;
    UIImageView *_largeLeftImageView;
    UIImageView *_largeMiddleLeftImageView;
    UIImageView *_largeMiddleRightImageView;
    UIImageView *_largeRightImageView;
    UIImageView *_largeTrackImageView;
    UIImageView *_leftImageView;
    UIImageView *_leftStretchImageView;
    NSString *_playbackErrorDescription;
    UILabel *_playbackErrorDescriptionLabel;
    UIImageView *_rightImageView;
    UIImageView *_rightStretchImageView;
    UILabel *_streamingLabel;
    NSInteger _style;
    UIImageView *_trackImageView;
    MPInlineAudioTransportControls *_transportControls;
    MPVideoViewController *_videoViewController;
}

@property(copy) NSString *playbackErrorDescription;
@property MPVideoViewController *videoViewController;
@property NSInteger style;

- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameInBackgroundViewForDescriptionLabel:(id)arg1;
- (void)_itemDurationDidChangeNotification:(id)arg1;
- (id)_newDescriptionLabel;
- (void)_updateVisiblePartsForAvailableRoutes;
- (id)createProgressIndicator;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)playbackErrorDescription;
- (void)reloadView;
- (void)setCurrentTime:(double)arg1;
- (void)setItem:(id)arg1;
- (void)setPlaybackErrorDescription:(id)arg1;
- (void)setStyle:(NSInteger)arg1;
- (void)setVideoViewController:(id)arg1;
- (NSInteger)style;
- (id)videoViewController;

@end