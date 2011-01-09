/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */



@interface ISNetworkConfiguration : NSObject 
{
    NSInteger _allowedAssetTypes;
    struct __CFDictionary { } *_limits;
    struct __CFDictionary { } *_searchParameters;
}

@property(readonly) NSInteger allowedAssetTypes; /* unknown property attribute: V_allowedAssetTypes */


- (id)initWithDictionary:(id)arg1;
- (void)dealloc;
- (BOOL)allowsAssetType:(NSInteger)arg1 fileSize:(long long)arg2;
- (id)searchParametersForAssetType:(NSInteger)arg1;
- (long long)sizeLimitForAssetType:(NSInteger)arg1;
- (void)setSearchParameters:(id)arg1 forAssetTypes:(NSInteger)arg2;
- (void)setSizeLimit:(long long)arg1 forAssetTypes:(NSInteger)arg2;
- (NSInteger)allowedAssetTypes;

@end