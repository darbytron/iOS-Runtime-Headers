/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSMutableArray, TSCHChartStyle, TSCHLegendStyle;

@interface TSCHChartStyleState : TSCHPropertyValueStorageContainer <NSCopying> {
}

@property(copy) NSMutableArray * categoryAxisStyles;
@property(retain) TSCHChartStyle * chartStyle;
@property(retain) TSCHLegendStyle * legendStyle;
@property(copy) NSMutableArray * paragraphStyles;
@property(copy) NSMutableArray * seriesPrivateStyles;
@property(copy) NSMutableArray * seriesThemeStyles;
@property(copy) NSMutableArray * valueAxisStyles;

- (id)allStyles;
- (id)categoryAxisStyles;
- (id)chartStyle;
- (void)checkParagraphStyleIndicies;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)legendStyle;
- (BOOL)otherStateIsEquivalent:(id)arg1 ignoringSeriesThemeStyles:(BOOL)arg2;
- (BOOL)otherStateIsEquivalent:(id)arg1;
- (id)p_locationOfStyleInNetwork:(id)arg1;
- (void)p_replaceReferencedStylesInMap:(id)arg1 withMapper:(id)arg2;
- (BOOL)paragraphStyleIndexesAreValid;
- (id)paragraphStyles;
- (void)replaceStyle:(id)arg1 withStyle:(id)arg2;
- (id)semanticTagToStyleMap;
- (id)semanticUsagesToParagraphStyleMap;
- (id)seriesPrivateStyles;
- (id)seriesThemeStyles;
- (void)setCategoryAxisStyles:(id)arg1;
- (void)setChartStyle:(id)arg1;
- (void)setLegendStyle:(id)arg1;
- (void)setParagraphStyles:(id)arg1;
- (void)setSeriesPrivateStyles:(id)arg1;
- (void)setSeriesThemeStyles:(id)arg1;
- (void)setValueAxisStyles:(id)arg1;
- (id)stateByExpandingSeriesStylesForSeriesCount:(unsigned int)arg1;
- (id)stateByOptimizingParagraphStyleTableWithStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)stateByOptimizingParagraphStyleTableWithStylesheet:(id)arg1;
- (id)stateByReducingSeriesPrivateStyles;
- (id)styleNetworkDescription;
- (id)usesOfParagraphStyleProperties;
- (id)valueAxisStyles;

@end
