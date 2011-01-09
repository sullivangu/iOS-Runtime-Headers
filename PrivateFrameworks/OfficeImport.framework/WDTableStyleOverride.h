/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDCharacterProperties, WDTableRowProperties, WDTableCellProperties, WDStyle, WDParagraphProperties, WDDocument;



@interface WDTableStyleOverride : NSObject <NSCopying>
{
    WDDocument *mDocument;
    WDStyle *mStyle;
    NSInteger mPart;
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDTableRowProperties *mTableRowProperties;
    WDTableCellProperties *mTableCellStyleProperties;
    unsigned int mParagraphPropertiesOverridden : 1;
    unsigned int mCharacterPropertiesOverridden : 1;
    unsigned int mTableRowPropertiesOverridden : 1;
    unsigned int mTableCellStylePropertiesOverridden : 1;
}


- (NSInteger)part;
- (BOOL)isParagraphPropertiesOverridden;
- (void)setParagraphPropertiesOverridden:(BOOL)arg1;
- (void)setCharacterPropertiesOverridden:(BOOL)arg1;
- (BOOL)isTablePropertiesOverridden;
- (void)setTableRowPropertiesOverridden:(BOOL)arg1;
- (void)setTableCellStylePropertiesOverridden:(BOOL)arg1;
- (void)setPart:(NSInteger)arg1;
- (id)mutableParagraphProperties;
- (id)mutableTableRowProperties;
- (id)mutableTableCellStyleProperties;
- (BOOL)isTableRowPropertiesOverridden;
- (BOOL)isTableCellStylePropertiesOverridden;
- (id)tableCellStyleProperties;
- (id)tableRowProperties;
- (id)mutableCharacterProperties;
- (id)initWithDocument:(id)arg1;
- (id)tableProperties;
- (BOOL)isCharacterPropertiesOverridden;
- (id)paragraphProperties;
- (id)characterProperties;
- (id)style;
- (void)setStyle:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;

@end