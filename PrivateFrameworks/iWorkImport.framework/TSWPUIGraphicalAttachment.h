/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface TSWPUIGraphicalAttachment : TSWPAttachment {
}

@property(readonly) float baselineOffset;
@property(readonly) struct CGSize { float x1; float x2; } size;

- (float)baselineOffset;
- (int)elementKind;
- (id)initFromArchive:(const struct UIGraphicalAttachment { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; int x3; unsigned int x4[1]; }*)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (void)invalidate;
- (id)rendererForAttachment;
- (void)saveToArchive:(struct UIGraphicalAttachment { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; int x3; unsigned int x4[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (struct CGSize { float x1; float x2; })size;
- (BOOL)wantsSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1;

@end
