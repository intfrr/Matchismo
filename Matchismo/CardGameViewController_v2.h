//
//  CardGameViewController_v2.h
//

#import <UIKit/UIKit.h>

#import "GameViewController_v2.h"

#import "PlayingCardDeck.h"
#import "CardMatchingGame.h"
#import "CardMatchingGameThree.h"
#import "GameSettingsViewController.h"
#import "GameCollectionViewCell.h"
#import "ScoreTuple.h"
#import "MatchCardView.h"

#import "Danaprajna.h"



//---------------------------------------------------- -o-
#undef debug
//#define debug   

@interface CardGameViewController_v2 : GameViewController_v2

  // segmentAction implements switch between 2- and 3-card match game.
  //
#if !defined(TWOCARD_MATCHGAME_ONLY)
  - (IBAction)  segmentAction:  (UISegmentedControl *)  sender;
#endif

  - (void) updateUI;

@end

