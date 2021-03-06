/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIClientContext, SKUIGiftTheme, SKUIItem, SKUIItemArtworkContext, SKUIItemOfferButton, SKUIItemState, UIImage, UIImageView, UILabel;

@interface SKUIGiftItemView : UIView {
    NSString *_artistName;
    NSString *_categoryName;
    SKUIClientContext *_clientContext;
    SKUIItem *_item;
    UIImageView *_itemImageView;
    SKUIItemOfferButton *_itemOfferButton;
    SKUIItemState *_itemState;
    int _itemStyle;
    int _numberOfUserRatings;
    NSString *_price;
    UIImageView *_starRatingImageView;
    UILabel *_subtitleLabel1;
    UILabel *_subtitleLabel2;
    SKUIGiftTheme *_theme;
    UILabel *_titleLabel;
    float _userRating;
    UILabel *_userRatingCountLabel;
}

@property(copy) NSString * artistName;
@property(readonly) SKUIItemArtworkContext * artworkContext;
@property(copy) NSString * categoryName;
@property(readonly) int giftItemStyle;
@property(readonly) SKUIItem * item;
@property(retain) UIImage * itemImage;
@property(readonly) SKUIItemOfferButton * itemOfferButton;
@property(retain) SKUIItemState * itemState;
@property int numberOfUserRatings;
@property(copy) NSString * price;
@property(copy) SKUIGiftTheme * theme;
@property(copy) NSString * title;
@property float userRating;

- (void).cxx_destruct;
- (void)_enumerateMetadataViewsUsingBlock:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_imageEdgeInsets;
- (struct CGSize { float x1; float x2; })_imageSize;
- (void)_itemOfferConfirmAction:(id)arg1;
- (id)_newLabel;
- (float)_paddingLeft;
- (float)_paddingRight;
- (void)_reloadItemState:(BOOL)arg1;
- (void)_reloadSubtitles;
- (void)_reloadUserRatingViews;
- (id)_subtitleColor;
- (id)_titleColor;
- (id)_userRatingColor;
- (id)artistName;
- (id)artworkContext;
- (id)categoryName;
- (void)dealloc;
- (int)giftItemStyle;
- (id)initWithStyle:(int)arg1 item:(id)arg2 clientContext:(id)arg3;
- (id)item;
- (id)itemImage;
- (id)itemOfferButton;
- (id)itemState;
- (void)layoutSubviews;
- (int)numberOfUserRatings;
- (id)price;
- (void)setArtistName:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCategoryName:(id)arg1;
- (void)setItemImage:(id)arg1;
- (void)setItemState:(id)arg1 animated:(BOOL)arg2;
- (void)setItemState:(id)arg1;
- (void)setNumberOfUserRatings:(int)arg1;
- (void)setPrice:(id)arg1;
- (void)setTheme:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserRating:(float)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)theme;
- (id)title;
- (float)userRating;

@end
