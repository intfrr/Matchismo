//
// MatchCardView.h
//
// Adapted directly from P.Hegarty "PlayingCardView.m".
//

#import <UIKit/UIKit.h>


@interface MatchCardView : UIView

  @property (nonatomic)                   NSUInteger     rank;
  @property (strong, nonatomic)           NSString      *suit;

  @property (nonatomic, getter=isFaceUp)      BOOL       faceUp;


  - (void)pinch:(UIPinchGestureRecognizer *)gesture;

@end

