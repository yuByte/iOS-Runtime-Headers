/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, SALocalSearchBusiness2, SAUIImageResource;

@interface SAMovieV2ShowtimeSnippet : SAUISnippet {
}

@property(retain) SAUIImageResource * attributionLogo;
@property(copy) NSString * movieName;
@property(copy) NSArray * showtimes;
@property(retain) SALocalSearchBusiness2 * theater;
@property(copy) NSString * theaterName;

+ (id)showtimeSnippet;
+ (id)showtimeSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)attributionLogo;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)movieName;
- (void)setAttributionLogo:(id)arg1;
- (void)setMovieName:(id)arg1;
- (void)setShowtimes:(id)arg1;
- (void)setTheater:(id)arg1;
- (void)setTheaterName:(id)arg1;
- (id)showtimes;
- (id)theater;
- (id)theaterName;

@end
