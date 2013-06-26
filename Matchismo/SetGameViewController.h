//
//  SetGameViewController.h
//

#import <UIKit/UIKit.h>

#import "SetCardDeck.h"
#import "CardMatchingGameThree.h"

#import "GameViewController.h"
#import "GameSettingsViewController.h"

#import "ScoreTuple.h"



//---------------------------------------------------- -o-
#undef debug 			  
//#define debug             

@interface SetGameViewController : GameViewController

  - (void) updateUI;

@end

