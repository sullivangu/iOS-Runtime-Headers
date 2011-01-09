/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */



@interface DOMTreeWalker : DOMObject 
{
}

@property(retain,readonly) DOMNode *root;
@property(readonly) NSUInteger whatToShow;
@property(retain,readonly) <DOMNodeFilter> *filter;
@property(readonly) BOOL expandEntityReferences;
@property(retain) DOMNode *currentNode;


- (id)previousSibling;
- (id)nextNode;
- (id)parentNode;
- (void)finalize;
- (id)lastChild;
- (id)firstChild;
- (id)nextSibling;
- (void)dealloc;
- (id)currentNode;
- (void)setCurrentNode:(id)arg1;
- (id)root;
- (NSUInteger)whatToShow;
- (id)filter;
- (BOOL)expandEntityReferences;
- (id)previousNode;

@end