//
// Deck.h
//

#import <Foundation/Foundation.h>

#import "Card.h"
#import "Danaprajna.h"



//---------------------------------------------------- -o-
@interface Deck : NSObject

  @property (strong, readonly, nonatomic)  NSMutableArray  *discardPile;  // groups of Card


  - (void)   addCard:(Card *)card  atTop:(BOOL)atTop;
  - (void)   addCardsToDiscardPile:(NSArray *)cardList;

  - (Card *) drawRandomCard;

  - (NSUInteger)  size;
  - (NSUInteger)  sizeOfDiscardPile;

  - (NSArray *)   discardGroupAtIndex: (NSUInteger)index;

@end // Deck

