/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFAirDropPayload : NSObject {
    NSURL * _URL;
    NSData * _data;
    int  _identifer;
    NSString * _payloadDescription;
    UIImage * _previewImage;
    NSString * _type;
    BOOL  _wasString;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, retain) NSData *data;
@property (nonatomic) int identifer;
@property (nonatomic, copy) NSString *payloadDescription;
@property (nonatomic, retain) UIImage *previewImage;
@property (nonatomic, copy) NSString *type;
@property (nonatomic) BOOL wasString;

+ (id)newPayloadWithData:(id)arg1 ofType:(id)arg2 description:(id)arg3 previewImage:(id)arg4 identifier:(int)arg5;
+ (id)newPayloadWithURL:(id)arg1 description:(id)arg2 previewImage:(id)arg3 identifier:(int)arg4;

- (void).cxx_destruct;
- (id)URL;
- (id)data;
- (id)description;
- (unsigned int)hash;
- (int)identifer;
- (BOOL)isEqual:(id)arg1;
- (id)payloadDescription;
- (id)previewImage;
- (void)setData:(id)arg1;
- (void)setIdentifer:(int)arg1;
- (void)setPayloadDescription:(id)arg1;
- (void)setPreviewImage:(id)arg1;
- (void)setType:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setWasString:(BOOL)arg1;
- (id)type;
- (BOOL)wasString;

@end
