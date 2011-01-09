/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, NSArray;



@interface SUNavigationMenu : NSObject <NSCopying>
{
    NSString *_cancelTitle;
    NSString *_closedTitle;
    NSInteger _initialSelectedIndex;
    NSInteger _location;
    NSArray *_menuItems;
    NSArray *_navigationButtons;
    NSString *_openTitle;
}

@property(readonly) NSString *openTitle;
@property(readonly) NSArray *navigationButtons;
@property(readonly) NSArray *menuItems;
@property NSInteger location;
@property(readonly) NSInteger initialSelectedIndex;
@property(readonly) NSString *closedTitle;
@property(readonly) NSString *cancelTitle;


- (id)_newMenuItemsFromArray:(id)arg1;
- (NSInteger)_locationForString:(id)arg1;
- (id)_newNavigationButtonsFromArray:(id)arg1;
- (id)navigationButtons;
- (NSInteger)initialSelectedIndex;
- (id)cancelTitle;
- (void)_loadFromDictionary:(id)arg1;
- (id)navigationButtonForLocation:(id)arg1;
- (id)closedTitle;
- (id)openTitle;
- (id)menuItems;
- (NSInteger)location;
- (void)setLocation:(NSInteger)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;

@end