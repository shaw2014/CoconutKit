//
//  HLSBindingInformationEntry.h
//  CoconutKit
//
//  Created by Samuel Défago on 04.11.14.
//  Copyright (c) 2014 Samuel Défago. All rights reserved.
//

/**
 * Contains information related to a binding entry
 */
@interface HLSBindingInformationEntry : NSObject

/**
 * Create an entry with a given name (mandatory), text and object (optional). If an object is passed it will
 * be used to generated a description text, otherwise the specified text will be used
 */
- (instancetype)initWithName:(NSString *)name text:(NSString *)text object:(id)object NS_DESIGNATED_INITIALIZER;

/**
 * Convenience initializers
 */
- (instancetype)initWithName:(NSString *)name text:(NSString *)text;
- (instancetype)initWithName:(NSString *)name object:(id)object;

/**
 * Properties
 */
@property (nonatomic, readonly, strong) NSString *name;
@property (nonatomic, readonly, strong) NSString *text;
@property (nonatomic, readonly, strong) id object;

/**
 * Return YES iff highlighting is possible
 */
- (BOOL)canHighlight;

/**
 * Highlight the object (if possible)
 */
- (void)highlight;

@end

@interface HLSBindingInformationEntry (UnavailableMethods)

- (instancetype)init NS_UNAVAILABLE;

@end
