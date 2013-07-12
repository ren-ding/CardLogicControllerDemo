//
//  PlayingCard.h
//  Marchismo
//
//  Created by Ren DING on 7/07/13.
//  Copyright (c) 2013 Ren DING. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;
@end
