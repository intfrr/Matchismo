//
// PlayingCardDeck.m
//

#import "PlayingCardDeck.h"



//---------------------------------------------------- -o-
@implementation PlayingCardDeck


//------------------- -o-
- (id) init
{
  self = [super init];

  if (self) 
  {
    for (NSString *suit in [PlayingCard validSuits]) 
    {
      for (NSUInteger rank = 1; rank <= [PlayingCard maxRank]; rank++)
      {
        PlayingCard *card = [[PlayingCard alloc] init];
        card.rank = rank;
        card.suit = suit;
        [self addCard:card atTop:YES];
      }
    }
  } // endif

  return self;
}


@end // PlayingCardDeck -- implementation

