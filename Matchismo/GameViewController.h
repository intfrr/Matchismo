//
//  GameViewController.h
//

#import <UIKit/UIKit.h>

#import "GameSettingsViewController.h"

#import "Danaprajna.h"



//---------------------------------------------------- -o-
// Allows TWO-card match game only.  
//   Makes THREE-card game inaccessible.
//
//#define TWOCARD_MATCHGAME_ONLY           

#define ALPHA_OFF       1.0
#define ALPHA_GREY      0.7
#define ALPHA_DISABLED  0.25



//---------------------------------------------------- -o-
@interface GameViewController : UIViewController

  @property (weak, nonatomic)    IBOutlet UILabel     *flipsLabel;
  @property (nonatomic)                   int          flipsCount;

  @property (weak, nonatomic)    IBOutlet UILabel     *scoreLabel;
  @property (weak, nonatomic)    IBOutlet UILabel     *descriptionLabel;

  @property (weak, nonatomic)    IBOutlet UISlider    *historySlider;
  @property (nonatomic)                   int          historyIndex;

  @property (strong, nonatomic)  IBOutletCollection(UIButton) 
                                          NSArray     *cardButtons;


  - (IBAction)  flipCard:      (UIButton *)  sender;
  - (IBAction)  dealAction:    (UIButton *)  sender;
  - (IBAction)  sliderAction:  (UISlider *)  sender;

  + (void) recordCurrentMatchGameScore;
  + (void) recordCurrentSetGameScore;

@end

