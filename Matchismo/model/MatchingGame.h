//
//  MatchingGame.h
//

#import <Foundation/Foundation.h>

#import "Deck.h"

#import "Danaprajna.h"



//---------------------------------------------------- -o-
@interface MatchingGame : NSObject

#define MATCHGAME_NUMCARDS_MAX          52
#define MATCHGAME_NUMCARDS_MIN          2
#define MATCHGAME_NUMCARDS_DEFAULT      22


  @property (strong, readonly, nonatomic)  NSMutableArray  *cards;  // of Card

  @property (readonly, nonatomic)          int              score;

  @property (strong, readonly, nonatomic)  NSString        *action;
  @property (strong, readonly, nonatomic)  NSMutableArray  *actionHistory;

  @property (readonly, nonatomic)          NSUInteger       flipCost;
  @property (readonly, nonatomic)          NSUInteger       mismatchPenalty;

  @property (readonly, nonatomic)          Deck            *deck;


  // DESIGNATED INITIALIZER.
  //
  - (id)      initWithCardCount: (NSUInteger) cardCount
                      usingDeck: (Deck *)     deck
                       flipCost: (NSUInteger) flipCost
                mismatchPenalty: (NSUInteger) mismatchPenalty;

  - (Card *)     cardAtIndex:         (NSUInteger)index;
  - (NSArray *)  discardGroupAtIndex: (NSUInteger)index;

  - (NSUInteger) deckSize;
  - (NSUInteger) deckSizeOfDiscardPile;
  - (void)       userMessage: (NSString *)message;
  - (void)       updateScore: (int)score;
  - (Card *)     drawRandomCard;
  - (void)       addCardsToDiscardPile: (NSArray *)cardList;


@end // MatchingGame

