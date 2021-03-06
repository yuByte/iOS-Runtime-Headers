/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SUMescalSession;

@interface SUAccountViewController : SUStorePageViewController {
    BOOL _failed;
    SUMescalSession *_mescalSession;
    int _mescalState;
    NSString *_primingSignature;
    int _style;
}

@property(getter=_mescalSession,readonly) SUMescalSession * _mescalSession;
@property int style;

+ (id)_latestAccountViewController;

- (id)_authenticationQueryParametersForStyle:(int)arg1;
- (id)_bagKeyForStyle:(int)arg1;
- (void)_closeMescalSession;
- (void)_forceOrientationBackToSupportedOrientation;
- (void)_mescalDidOpenWithSession:(id)arg1 error:(id)arg2;
- (id)_mescalSession;
- (id)copyArchivableContext;
- (void)dealloc;
- (void)enqueueFetchOperation;
- (void)handleFailureWithError:(id)arg1;
- (id)init;
- (id)initWithExternalAccountURL:(id)arg1;
- (id)newFetchOperation;
- (id)newViewControllerForPage:(id)arg1 ofType:(int)arg2 returningError:(id*)arg3;
- (void)setStyle:(int)arg1;
- (int)style;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
