/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class MFMessageComposeViewController;

@interface UIMessageActivity : UIActivity  {
    MFMessageComposeViewController *_messageComposeViewController;
}

@property(retain) MFMessageComposeViewController * messageComposeViewController;


- (void)dealloc;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (id)messageComposeViewController;
- (void)setMessageComposeViewController:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (id)activityViewController;
- (void)_cleanup;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)_activityImage;
- (id)activityTitle;
- (id)activityType;

@end