//
// GameCollectionViewCell.h
//

#import <UIKit/UIKit.h>

#import "MatchCardView.h"

#import "SetCardView.h"
#import "DiscardGroupingView.h"



//--------------------------------------------------------- -o-
@interface GameCollectionViewCell : UICollectionViewCell

  @property (weak, nonatomic)  IBOutlet  MatchCardView  *matchCardView;

  @property (weak, nonatomic)  IBOutlet  SetCardView    *setCardView;
  @property (weak, nonatomic)  IBOutlet  DiscardGroupingView 
                                                        *setCardDiscardGroupingView;
@end

