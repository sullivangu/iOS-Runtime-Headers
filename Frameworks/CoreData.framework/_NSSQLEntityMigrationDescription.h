/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSSQLEntity, NSMutableArray, NSEntityMapping;



@interface _NSSQLEntityMigrationDescription : NSObject 
{
    NSEntityMapping *_entityMapping;
    NSMutableDictionary *_sqlValuesByColumnName;
    NSMutableDictionary *_sourceEntitiesByToOneWithNewEntityKey;
    NSMutableDictionary *_mappingsByName;
    NSSQLEntity *_dstEntity;
    NSSQLEntity *_srcEntity;
    NSInteger _migrationType;
    NSMutableArray *_addedManyToManys;
    NSMutableArray *_removedManyToManys;
    NSMutableArray *_transformedManyToManys;
    NSMutableArray *_processedTransforms;
    NSMutableArray *_pendingTransforms;
}

@property(readonly) NSInteger migrationType;
@property(readonly) NSEntityMapping *entityMapping;
@property(readonly) NSSQLEntity *destinationEntity;
@property(readonly) NSSQLEntity *sourceEntity;


- (id)initWithEntityMapping:(id)arg1 sourceEntity:(id)arg2 destinationEntity:(id)arg3;
- (id)mappingsByName;
- (void)_generateSQLValueMappingsWithMigrationContext:(struct _NSSQLMigrationContext { id x1; })arg1;
- (id)sourceEntitiesByToOneWithNewEntityKey;
- (void)_populateSQLValuesForDestinationToOne:(id)arg1 fromSourceToOne:(id)arg2;
- (id)_unmappedRelationshipForFormerlyVirtualToOne:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (void)_populateSQLValuesForVirtualToOnesWithMigrationContext:(struct _NSSQLMigrationContext { id x1; })arg1;
- (void)_populateSQLValuesByPropertyFromTransforms:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)sqlValueForColumnName:(id)arg1 migrationContext:(struct _NSSQLMigrationContext { id x1; })arg2;
- (id)addedManyToManys;
- (id)removedManyToManys;
- (id)transformedManyToManys;
- (id)nextPropertyTransform;
- (NSInteger)migrationType;
- (id)entityMapping;
- (id)sourceEntity;
- (id)destinationEntity;
- (void)dealloc;

@end