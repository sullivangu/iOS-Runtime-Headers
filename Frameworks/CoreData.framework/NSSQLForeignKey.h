/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSSQLToOne;



@interface NSSQLForeignKey : NSSQLColumn 
{
    NSSQLToOne *_toOne;
}


- (id)initWithEntity:(id)arg1 toOneRelationship:(id)arg2;
- (id)initForReadOnlyFetchingOfEntity:(id)arg1 toOneRelationship:(id)arg2;
- (id)toOneRelationship;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (void)dealloc;

@end