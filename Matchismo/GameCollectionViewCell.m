//
// GameCollectionViewCell.m
//

#import "GameCollectionViewCell.h"



@implementation GameCollectionViewCell

//-------------------------- -o-
- (void) setMatchCardView:(MatchCardView *)matchCardView
{
  _matchCardView = matchCardView;
  [_matchCardView addGestureRecognizer:
    [[UIPinchGestureRecognizer alloc] initWithTarget: _matchCardView 
                                              action: @selector(pinch:)]];
}

@end

