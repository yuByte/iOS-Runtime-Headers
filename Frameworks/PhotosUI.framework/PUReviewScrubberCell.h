/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class UIImage, UIImageView;

@interface PUReviewScrubberCell : UICollectionViewCell {
    UIImageView *__checkmarkImageView;
    UIImageView *__suggestedImageView;
    UIImageView *__thumbnailImageView;
    BOOL _favorite;
    UIImage *_image;
    BOOL _suggested;
    BOOL _wantsSmallSuggestionIndicators;
}

@property(readonly) UIImageView * _checkmarkImageView;
@property(readonly) UIImageView * _suggestedImageView;
@property(readonly) UIImageView * _thumbnailImageView;
@property(getter=isFavorite) BOOL favorite;
@property(retain) UIImage * image;
@property(getter=isSuggested) BOOL suggested;
@property BOOL wantsSmallSuggestionIndicators;

- (void).cxx_destruct;
- (id)_checkmarkImageView;
- (void)_commonPUReviewScrubberCellInitialization;
- (id)_suggestedImageView;
- (id)_thumbnailImageView;
- (void)_updateFavoriteView;
- (void)_updateSuggestedView;
- (void)_updateThumbnailImageView;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isFavorite;
- (BOOL)isSuggested;
- (void)layoutSubviews;
- (void)setFavorite:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFavorite:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setSuggested:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSuggested:(BOOL)arg1;
- (void)setWantsSmallSuggestionIndicators:(BOOL)arg1;
- (BOOL)wantsSmallSuggestionIndicators;

@end
