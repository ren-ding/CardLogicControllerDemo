//
//  Card.h
//  Marchismo
//
//  Created by Ren DING on 7/07/13.
//  Copyright (c) 2013 Ren DING. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString* contents;

@property (nonatomic, getter = isFaceUp) BOOL faceUp;
@property (nonatomic, getter = isUnplayable) BOOL unplayable;

- (int) match:(NSArray *) otherCards;

@end
