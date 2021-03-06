/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSString;

@interface _PLClientTransaction : PLClientServerTransaction {
    int _fileDescriptor;
    NSString *_path;
    id _processAssertion;
}

@property int fileDescriptor;
@property(retain) NSString * path;
@property(retain) id processAssertion;

- (void)abortTransaction;
- (void)dealloc;
- (id)description;
- (int)fileDescriptor;
- (id)init;
- (id)path;
- (id)processAssertion;
- (void)setFileDescriptor:(int)arg1;
- (void)setPath:(id)arg1;
- (void)setProcessAssertion:(id)arg1;

@end
