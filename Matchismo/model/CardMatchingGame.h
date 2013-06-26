//
//  CardMatchingGame.h
//

#import <Foundation/Foundation.h>

#import "Deck.h"
#import "MatchingGame.h"

#import "Danaprajna.h"



//---------------------------------------------------- -o-
@interface CardMatchingGame : MatchingGame

  @property (strong, readonly, nonatomic)  NSMutableArray  *cards;  // of Card

  @property (readonly, nonatomic)          int              score;


  - (void)    flipCardAtIndex:(NSUInteger)index;

@end // CardMatchingGame

