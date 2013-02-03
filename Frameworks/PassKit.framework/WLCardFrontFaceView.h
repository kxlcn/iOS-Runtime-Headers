/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class UIButton, UILabel;

@interface WLCardFrontFaceView : WLCardFaceView {
    UIButton *_flipButton;
    UILabel *_logoLabel;
}

- (void)_flipButtonPressed;
- (id)_relevantBuckets;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)createBodyContentViews;
- (void)createHeaderContentViews;
- (void)dealloc;
- (BOOL)isFrontFace;
- (void)layoutSubviews;

@end