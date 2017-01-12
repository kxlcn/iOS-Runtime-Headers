/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFSunriseSunsetConditionBuilder : HFTimeConditionBuilder {
    NSDateComponents * _offset;
    NSString * _significantEvent;
}

@property (nonatomic, retain) NSDateComponents *offset;
@property (nonatomic, retain) NSString *significantEvent;

+ (BOOL)canHandlePredicate:(id)arg1;

- (void).cxx_destruct;
- (void)_updatePredicate;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)offset;
- (void)setComparisonType:(unsigned int)arg1;
- (void)setOffset:(id)arg1;
- (void)setSignificantEvent:(id)arg1;
- (id)significantEvent;

@end