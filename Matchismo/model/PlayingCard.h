//
// PlayingCard.h
//
//
//---------------------------------------------------------------------
//     Copyright David Reeder 2013.  ios@mobilesound.com
//     Distributed under the Boost Software License, Version 1.0.
//     (See ./LICENSE_1_0.txt or http://www.boost.org/LICENSE_1_0.txt)
//---------------------------------------------------------------------

#import "Card.h"

#import "Danaprajna.h"



//---------------------------------------------------- -o-
@interface PlayingCard : Card

  @property (strong, nonatomic)  NSString   *suit;
  @property (nonatomic)          NSUInteger  rank;


  + (NSArray *)   validSuits;
  + (NSUInteger)  maxRank;

@end // PlayingCard -- interface

