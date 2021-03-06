//
//  Copyright (c) Samuel Défago. All rights reserved.
//
//  Licence information is available from the LICENCE file.
//

#import <Foundation/Foundation.h>

/**
 * NSManagedObject does not implement the NSCopying protocol. Instead, you can have your managed objects
 * implement the HLSManagedObjectCopying protocol. Objects implementing this protocol can be copied
 * (within a single context) using the HLSModelManager -copyObject: method. Refer to the documentation
 * of this method for the copy behavior which is applied
 */
@protocol HLSManagedObjectCopying <NSObject>

@optional

/**
 * If some keys need to be excluded during copy, simply implement this method to return the corresponding
 * name strings
 */
- (NSSet *)keysToExclude;

@end
