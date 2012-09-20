/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSSet, NSMutableSet;

@interface CalDAVSupportedCalendarComponentSet : CoreDAVItem  {
    NSMutableSet *_comps;
}

@property(retain) NSMutableSet * comps;
@property(readonly) NSSet * compNames;


- (id)description;
- (void)dealloc;
- (id)init;
- (id)componentsAsString;
- (id)comps;
- (void)setComps:(id)arg1;
- (void)addComp:(id)arg1;
- (id)compNames;
- (id)childrenToWrite;
- (id)copyParseRules;

@end