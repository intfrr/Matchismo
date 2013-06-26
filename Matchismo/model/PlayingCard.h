//
// PlayingCard.h
//

#import "Card.h"

#import "Danaprajna.h"



//---------------------------------------------------- -o-
@interface PlayingCard : Card

  @property (strong, nonatomic)  NSString   *suit;
  @property (nonatomic)          NSUInteger  rank;


  + (NSArray *)   validSuits;
  + (NSUInteger)  maxRank;

@end // PlayingCard -- interface

