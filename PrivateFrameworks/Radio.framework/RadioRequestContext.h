/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class <RadioSAPContext>, RadioStoreBag;

@interface RadioRequestContext : NSObject <NSCopying> {
    <RadioSAPContext> *_mescalContext;
    RadioStoreBag *_storeBag;
    BOOL _usesLocalNetworking;
}

@property(retain) <RadioSAPContext> * SAPContext;
@property(retain) RadioStoreBag * storeBag;
@property BOOL usesLocalNetworking;

- (void).cxx_destruct;
- (id)SAPContext;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setSAPContext:(id)arg1;
- (void)setStoreBag:(id)arg1;
- (void)setUsesLocalNetworking:(BOOL)arg1;
- (id)storeBag;
- (BOOL)usesLocalNetworking;

@end
