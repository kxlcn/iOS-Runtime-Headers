/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIBadgeViewController : FIUIGLViewController <UIGestureRecognizerDelegate> {
    UIImage *_backAppleLogo;
    GLKTextureInfo *_backTexture;
    BOOL _backTextureNeedsRegeneration;
    NSAttributedString *_backsideAttributedString;
    FIUIBadge *_badge;
    NSString *_badgeModelPath;
    NSString *_badgePlistPath;
    NSString *_badgeTexturePath;
    GLKTextureInfo *_colorTexture;
    EAGLContext *_context;
    BOOL _contextPushed;
    GLKTextureInfo *_envTexture;
    unsigned int _faceProgram;
    struct __UniformBindings { 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } viewProjectionMatrix; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } modelMatrix; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } environmentMatrix; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } cameraPosition; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } useTexture; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } useTextureShine; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } useFullColorEnamel; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } color; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } enamelColor; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } colorSampler; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } environmentSampler; 
    } _faceUniformBindings;
    int *_groupTriangleCounts;
    unsigned int _indexBuffer;
    BOOL _magnetsEngaged;
    int *_materialIndices;
    union _GLKVector3 { 
        struct { 
            float x; 
            float y; 
            float z; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
        } ; 
        float v[3]; 
    } _modelBaseColor;
    union _GLKVector3 { 
        struct { 
            float x; 
            float y; 
            float z; 
        } ; 
        struct { 
            float r; 
            float g; 
            float b; 
        } ; 
        struct { 
            float s; 
            float t; 
            float p; 
        } ; 
        float v[3]; 
    } _modelEnamelColor;
    union _GLKMatrix4 { 
        struct { 
            float m00; 
            float m01; 
            float m02; 
            float m03; 
            float m10; 
            float m11; 
            float m12; 
            float m13; 
            float m20; 
            float m21; 
            float m22; 
            float m23; 
            float m30; 
            float m31; 
            float m32; 
            float m33; 
        } ; 
        float m[16]; 
    } _modelTransform;
    BOOL _modelUsesFullColorEnamel;
    int _numGroups;
    unsigned int _program;
    unsigned int _shape;
    double _spinRate;
    UIPanGestureRecognizer *_spinRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
    NSDictionary *_tweakableUniforms;
    struct __UniformBindings { 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } viewProjectionMatrix; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } modelMatrix; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } environmentMatrix; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } cameraPosition; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } useTexture; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } useTextureShine; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } useFullColorEnamel; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } color; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } enamelColor; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } colorSampler; 
        struct __UniformBinding { 
            int location; 
            char *name; 
        } environmentSampler; 
    } _uniformBindings;
    unsigned int _vertexBuffer;
    BOOL _verticalPanningDisabled;
    union _GLKMatrix4 { 
        struct { 
            float m00; 
            float m01; 
            float m02; 
            float m03; 
            float m10; 
            float m11; 
            float m12; 
            float m13; 
            float m20; 
            float m21; 
            float m22; 
            float m23; 
            float m30; 
            float m31; 
            float m32; 
            float m33; 
        } ; 
        float m[16]; 
    } _viewProjectionMatrix;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL verticalPanningDisabled;

+ (float)badgeAspectRatio;

- (void).cxx_destruct;
- (void)_applyImpulse:(double)arg1;
- (id)_attributedStringForUserName:(id)arg1 achievement:(id)arg2 usingSmallVariant:(BOOL)arg3;
- (union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })_colorVectorFromString:(id)arg1;
- (void)_context_createBuffers;
- (void)_context_destroyBuffers;
- (void)_context_drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_context_loadBadgeModel;
- (void)_context_loadShaders;
- (void)_context_loadUniformsAndAttributes;
- (void)_context_setup;
- (void)_context_setupScene;
- (id)_defaultTweaks;
- (void)_disengageMagnets;
- (void)_engageMagnets;
- (void)_forEachProgram:(id /* block */)arg1;
- (void)_generateBackTexture;
- (float)_normalizeAngle:(float)arg1;
- (void)_panned:(id)arg1;
- (void)_setBackTextureNeedsRegeneration;
- (void)_tapped:(id)arg1;
- (id)_valueForTweak:(id)arg1;
- (void)_withContext:(id /* block */)arg1;
- (void)configureForAchievement:(id)arg1 userName:(id)arg2 usingSmallVariant:(BOOL)arg3;
- (void)dealloc;
- (unsigned int)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (double)playFlipInAnimation;
- (double)playFlipOutAnimation;
- (void)playRevealAnimationWithDuration:(double)arg1;
- (int)preferredStatusBarStyle;
- (void)render360RotationPNGSequenceWithNumberOfFrames:(unsigned int)arg1;
- (void)resizeBadgeForCurrentViewSize;
- (void)setBadgeBacksideAttributedString:(id)arg1;
- (void)setBadgeBacksideIcon:(id)arg1;
- (void)setBadgeModelPath:(id)arg1 texturePath:(id)arg2 plistPath:(id)arg3;
- (void)setFixedBadgeAngle:(float)arg1;
- (void)setVerticalPanningDisabled:(BOOL)arg1;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)update;
- (BOOL)verticalPanningDisabled;
- (void)viewDidLoad;

@end