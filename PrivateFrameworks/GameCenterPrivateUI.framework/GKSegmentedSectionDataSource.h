/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@class GKCollectionViewDataSource, GKCollectionViewPlaceholderView, GKSegmentInfo, GKSegmentedSectionHeaderView, NSArray, NSMutableArray, NSString;

@interface GKSegmentedSectionDataSource : GKCollectionViewDataSource <GKSegmentInfoDelegagte> {
    GKSegmentedSectionHeaderView *_headerView;
    SEL _noContentButtonAction;
    id _noContentButtonTarget;
    NSString *_noContentButtonTitle;
    NSString *_noContentMessage;
    NSString *_noContentTitle;
    GKCollectionViewPlaceholderView *_placeholderView;
    GKCollectionViewDataSource *_rootDataSource;
    NSMutableArray *_segmentInfos;
    Class _segmentedHeaderClass;
    GKSegmentInfo *_selectedSegmentInfo;
    BOOL _shouldHideSegment;
    BOOL _usePlaceholder;
    BOOL _waitingForAnimation;
}

@property(readonly) NSArray * dataSources;
@property(retain) GKSegmentedSectionHeaderView * headerView;
@property SEL noContentButtonAction;
@property id noContentButtonTarget;
@property(retain) NSString * noContentButtonTitle;
@property(retain) NSString * noContentMessage;
@property(retain) NSString * noContentTitle;
@property(retain) GKCollectionViewPlaceholderView * placeholderView;
@property(retain) GKCollectionViewDataSource * rootDataSource;
@property(retain) NSMutableArray * segmentInfos;
@property Class segmentedHeaderClass;
@property GKCollectionViewDataSource * selectedDataSource;
@property unsigned int selectedDataSourceIndex;
@property(retain) GKSegmentInfo * selectedSegmentInfo;
@property BOOL shouldHideSegment;
@property BOOL usePlaceholder;
@property BOOL waitingForAnimation;

- (id)_gkDescriptionWithChildren:(int)arg1;
- (void)addDataSource:(id)arg1;
- (id)allTitles;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 evaluateFactoryForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 isRecursive:(BOOL)arg4;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionViewDidBecomeInactive:(id)arg1;
- (void)collectionViewWillBecomeActive:(id)arg1;
- (void)configureCollectionView:(id)arg1;
- (void)configureSegmentedHeader:(id)arg1;
- (BOOL)containsDataSource:(id)arg1;
- (id)createMetricsTreeWithGridLayout:(id)arg1;
- (void)dataSource:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didInsertSections:(id)arg2;
- (void)dataSource:(id)arg1 didMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)dataSource:(id)arg1 didMoveSection:(int)arg2 toSection:(int)arg3;
- (void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didRefreshSections:(id)arg2;
- (void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2;
- (void)dataSource:(id)arg1 didRemoveSections:(id)arg2;
- (void)dataSource:(id)arg1 performBatchUpdate:(id)arg2 complete:(id)arg3;
- (void)dataSourceDidLoad;
- (void)dataSourceDidReloadData:(id)arg1;
- (id)dataSourceForSection:(unsigned int)arg1;
- (void)dataSourceWillLoad;
- (id)dataSources;
- (void)dealloc;
- (id)description;
- (void)groupDidLoad:(id)arg1;
- (id)headerView;
- (void)hoistSegmentedFactoryToRoot;
- (id)indexPathsForItem:(id)arg1;
- (id)infoForDataSource:(id)arg1;
- (id)infoForSegment:(int)arg1;
- (void)infosChanged;
- (id)initWithDataSources:(id)arg1 rootDataSource:(id)arg2;
- (id)initWithDataSources:(id)arg1;
- (BOOL)item:(id)arg1 matchesSearchTerms:(id)arg2 inSection:(int)arg3;
- (id)itemAtIndexPath:(id)arg1;
- (SEL)noContentButtonAction;
- (id)noContentButtonTarget;
- (id)noContentButtonTitle;
- (id)noContentMessage;
- (id)noContentTitle;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)placeholderView;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)removeDataSource:(id)arg1;
- (void)removeItemAtIndexPath:(id)arg1 completionHandler:(id)arg2;
- (id)rootDataSource;
- (unsigned int)sectionForDataSource:(id)arg1;
- (void)segmentDidChangeLoadingState:(id)arg1;
- (id)segmentInfos;
- (Class)segmentedHeaderClass;
- (id)selectedDataSource;
- (unsigned int)selectedDataSourceIndex;
- (void)selectedSegmentChanged:(id)arg1;
- (id)selectedSegmentInfo;
- (void)setHeaderView:(id)arg1;
- (void)setNoContentButtonAction:(SEL)arg1;
- (void)setNoContentButtonTarget:(id)arg1;
- (void)setNoContentButtonTitle:(id)arg1;
- (void)setNoContentMessage:(id)arg1;
- (void)setNoContentTitle:(id)arg1;
- (void)setPlaceholderView:(id)arg1;
- (void)setRootDataSource:(id)arg1;
- (void)setSegmentInfos:(id)arg1;
- (void)setSegmentedHeaderClass:(Class)arg1;
- (void)setSelectedDataSource:(id)arg1;
- (void)setSelectedDataSourceIndex:(unsigned int)arg1 reload:(BOOL)arg2;
- (void)setSelectedDataSourceIndex:(unsigned int)arg1;
- (void)setSelectedSegmentInfo:(id)arg1;
- (void)setShouldHideSegment:(BOOL)arg1;
- (void)setTitle:(id)arg1 forDataSource:(id)arg2;
- (void)setUsePlaceholder:(BOOL)arg1;
- (void)setWaitingForAnimation:(BOOL)arg1;
- (BOOL)shouldHideSegment;
- (void)updatePlaceholderNotify:(BOOL)arg1;
- (BOOL)usePlaceholder;
- (BOOL)waitingForAnimation;

@end