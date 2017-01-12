/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIKBRTTouchHistoryInfo : NSObject {
    struct CGPoint { 
        float x; 
        float y; 
    }  _actualLocation;
    struct CGPoint { 
        float x; 
        float y; 
    }  _errorVector;
    BOOL  _ignoreForDrift;
    BOOL  _ignoreTouch;
    BOOL  _isActive;
    BOOL  _isLeftHand;
    id  _touchIdentifier;
    double  _touchTime;
}

@property (nonatomic) struct CGPoint { float x1; float x2; } actualLocation;
@property (nonatomic) struct CGPoint { float x1; float x2; } errorVector;
@property (nonatomic) BOOL ignoreForDrift;
@property (nonatomic) BOOL ignoreTouch;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isLeftHand;
@property (nonatomic, retain) id touchIdentifier;
@property (nonatomic) double touchTime;

- (void).cxx_destruct;
- (struct CGPoint { float x1; float x2; })actualLocation;
- (id)description;
- (struct CGPoint { float x1; float x2; })errorVector;
- (BOOL)ignoreForDrift;
- (BOOL)ignoreTouch;
- (id)init;
- (BOOL)isActive;
- (BOOL)isLeftHand;
- (void)setActualLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setErrorVector:(struct CGPoint { float x1; float x2; })arg1;
- (void)setIgnoreForDrift:(BOOL)arg1;
- (void)setIgnoreTouch:(BOOL)arg1;
- (void)setIsActive:(BOOL)arg1;
- (void)setIsLeftHand:(BOOL)arg1;
- (void)setTouchIdentifier:(id)arg1;
- (void)setTouchTime:(double)arg1;
- (id)touchIdentifier;
- (double)touchTime;

@end