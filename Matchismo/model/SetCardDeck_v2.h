//
// SetCardDeck_v2.h
//

#import "Deck.h"
#import "SetCard_v2.h"

#import "Danaprajna.h"



//---------------------------------------------------- -o-
#undef debug
//#define debug           


@interface SetCardDeck_v2 : Deck

  @property (readonly, strong, nonatomic)  NSDictionary  *cardDict;


  // DESIGNATED INITIALIZER (for subclass)
  - (id) init;

  - (BOOL) findRandomMatch: (NSArray *) deck
                enableHint: (BOOL)      enableHint;

  - (NSArray *) findFirstMatch: (NSArray *) deck;

  - (void) clearHintedFlags: (NSArray *) deck;

@end // @interface SetCardDeck_v2 : Deck

