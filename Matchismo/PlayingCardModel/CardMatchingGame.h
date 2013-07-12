//
//  CardMatchingGame.h
//  Marchismo
//
//  Created by Ren DING on 7/07/13.
//  Copyright (c) 2013 Ren DING. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "Card.h"
#import "Deck.h"

@interface CardMatchingGame : NSObject


- (id)initWithCardCount:(NSUInteger)count
              usingDeck:(Deck *)deck;

- (void)flipCardAtIndex:(NSUInteger)index;

- (Card *)cardAtIndex:(NSUInteger)index;

@property (readonly, nonatomic) int score;

@end