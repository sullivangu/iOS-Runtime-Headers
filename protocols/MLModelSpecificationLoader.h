/* Generated by RuntimeBrowser.
 */

@protocol MLModelSpecificationLoader <NSObject>

@required

+ (<MLModeling> *)loadModelFromSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model {} *x_1_1_1; struct __shared_weak_count {} *x_1_1_2; } x1; }*)arg1 configuration:(MLModelConfiguration *)arg2 error:(id*)arg3;

@end