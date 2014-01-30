////////////////////////////////////////////////////////////////////////////////
//
//  TYPHOON FRAMEWORK
//  Copyright 2013, Jasper Blues & Contributors
//  All Rights Reserved.
//
//  NOTICE: The authors permit you to use, modify, and distribute this file
//  in accordance with the terms of the license agreement accompanying it.
//
////////////////////////////////////////////////////////////////////////////////

#import <Foundation/Foundation.h>

#import "TyphoonPropertyInjectionInternalDelegate.h"

/**
 * Internal base class for all Typhoon assisted factories. Users should not use
 * this class directly.
 */
@interface TyphoonAssistedFactoryBase : NSObject <TyphoonPropertyInjectionInternalDelegate>

/** Used internally by the getters of the properties in the subclasses */
- (id)injectionValueForProperty:(NSString *)property;

/** Used to get the type encoding during the construction of subclasses */
- (id)_dummyGetter;

/** Used to get the type encoding during the construction of subclasses */
- (void)_setDummySetter:(id)value;

@end
