//
//  CardMatchingGameThree.h
//

#import <Foundation/Foundation.h>

#import "Deck.h"
#import "SetCardDeck_v2.h"
#import "CardMatchingGame.h"

#import "Danaprajna.h"



//---------------------------------------------------- -o-
@interface CardMatchingGameThree : CardMatchingGame

  - (void) flipCardAtIndex:(NSUInteger)index;


  // Methods to support SetCardDeck_v2.
  //
  - (BOOL)      findRandomMatchWithEnableHint: (BOOL)enableHint;
  - (NSArray *) findFirstMatch;
  - (void)      clearHintedFlags;

@end // CardMatchingGameThree

