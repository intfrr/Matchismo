//
// Card.m
//

#import "Card.h"



//---------------------------------------------------- -o-
@interface Card()
@end



//---------------------------------------------------- -o-
@implementation Card


//------------------- -o-
// match
//
// Effectively: an abstract method.
//

- (int) match: (NSArray *)otherCards
{
  int score = 0;

  for (Card *card in otherCards) {
    if ([card.contents isEqualToString:self.contents]) {
      score = 1;
      break;
    }
  }

  return score;

} // match


@end // @implementation Card

