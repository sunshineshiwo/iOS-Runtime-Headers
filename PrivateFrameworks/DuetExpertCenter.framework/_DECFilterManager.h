/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECFilterManager : NSObject <_DECFilter> {
    NSArray *_filters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_createFilters;
- (BOOL)acceptPredictionItem:(id)arg1 forConsumer:(unsigned int)arg2;
- (id)init;

@end
