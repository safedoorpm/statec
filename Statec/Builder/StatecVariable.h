//
//  SFInstanceVariable.h
//  Statec
//
//  Created by Matt Mower on 30/01/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Statec.h"

@interface StatecVariable : NSObject {
}


@property (assign) StatecScope scope;
@property (strong) NSString *type;
@property (strong) NSString *name;

- (id)initWithScope:(StatecScope)scope name:(NSString *)name type:(NSString *)type;

- (BOOL)isInstanceScope;
- (BOOL)isGlobalScope;

- (NSString *)declarationString;
- (NSString *)definitionString;

@end
