/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@class WebBookmark, WebBookmarkCollection;

@interface BAChangeRecord : NSObject {
    WebBookmark *_bookmark;
    int _changeType;
    WebBookmarkCollection *_collection;
}

@property(readonly) WebBookmark * bookmark;
@property(readonly) int changeType;
@property(readonly) WebBookmarkCollection * collection;

- (id)bookmark;
- (int)changeType;
- (id)changeTypeDescription;
- (id)collection;
- (void)dealloc;
- (id)description;
- (id)initWithBookmarkCollection:(id)arg1 bookmark:(id)arg2 changeType:(int)arg3;

@end
