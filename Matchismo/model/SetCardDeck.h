//
// SetCardDeck.h
//

#import "Deck.h"
#import "SetCard.h"

#import "Danaprajna.h"



//---------------------------------------------------- -o-
#undef debug
//#define debug           

@interface SetCardDeck : Deck

  @property (readonly, strong, nonatomic)  NSDictionary  *cardDict;


  // DESIGNATED INITIALIZER (for subclass)
  - (id) init;

  + (NSAttributedString *)convertToAttributedString: (NSString *)cardMsg
                                           withDeck: (SetCardDeck *)deck;

@end // @interface SetCardDeck : Deck

