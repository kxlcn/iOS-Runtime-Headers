/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKThoughtBubbleAnnotationRenderer : AKAnnotationRenderer

+ (struct CGSize { float x1; float x2; })_concreteDraggingBoundsInsetsForAnnotation:(id)arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_concreteDrawingBoundsOfAnnotation:(id)arg1;
+ (BOOL)_concretePointIsOnBorder:(struct CGPoint { float x1; float x2; })arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(float)arg3;
+ (BOOL)_concretePointIsOnInside:(struct CGPoint { float x1; float x2; })arg1 ofAnnotation:(id)arg2;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_concreteRectangleForAnnotation:(id)arg1 withTextBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (void)_concreteRenderAnnotation:(id)arg1 intoContext:(struct CGContext { }*)arg2 forDisplay:(BOOL)arg3 pageControllerOrNil:(id)arg4;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_concreteTextBoundsOfAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 optionalText:(id)arg3;
+ (void)_fillAndStrokePath:(struct CGPath { }*)arg1 forAnnotation:(id)arg2 inContext:(struct CGContext { }*)arg3;
+ (struct CGPath { }*)_newCloudPathScaledToModelSpaceForAnnotation:(id)arg1;
+ (struct CGPath { }*)_newConcreteTextExclusionPathForAnnotation:(id)arg1 withOptionalAnnotationRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (struct CGPath { }*)_newLargestBubblePathScaledToModelSpaceForAnnotation:(id)arg1;
+ (struct CGPath { }*)_newPathTransformedFromUnitToModelSpace:(struct CGPath { }*)arg1 forAnnotation:(id)arg2;
+ (struct CGPath { }*)_newSmallBubblePathForAnnotation:(id)arg1 atCenter:(struct CGPoint { float x1; float x2; })arg2 withSize:(struct CGSize { float x1; float x2; })arg3;
+ (struct CGPath { }*)_newSmallestBubblePathScaledToModelSpaceForAnnotation:(id)arg1;
+ (struct CGPoint { float x1; float x2; })_templatePointyPointToCircleIntersect;
+ (float)_templateToUnitPointyPointScaleForAnnotation:(id)arg1;
+ (struct CGPoint { float x1; float x2; })_unitAnnotationPointyPointForAnnotation:(id)arg1;
+ (struct CGPoint { float x1; float x2; })_unitCloudCenter;
+ (float)_unitCloudRadius;

@end
