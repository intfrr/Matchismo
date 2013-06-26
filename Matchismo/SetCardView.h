//
// SetCardView.h
//

#import <UIKit/UIKit.h>

#import "SetCard_v2.h"

#import "Danaprajna.h"



//--------------------------------------------------------------- -o-
#undef debug
//#define debug 			

@interface SetCardView : UIView

  @property (nonatomic)  NSUInteger  count;
  @property (nonatomic)  SCShape     shape;  
  @property (nonatomic)  SCColor     color; 
  @property (nonatomic)  SCShade     shade;

  @property (nonatomic, getter=isFaceUp)  BOOL  faceUp;
  @property (nonatomic, getter=isHinted)  BOOL  hinted;


  // XXX  g*Magic numbers must be set on a per-view basis
  //        -OR-  use (UIImage *) self.setCardImage.
  //
  @property  (nonatomic)  CGFloat  gWidthMagic;
  @property  (nonatomic)  CGFloat  gHeightMagic;

  @property  (nonatomic)  CGFloat  gWidthOffsetMagic;
  @property  (nonatomic)  CGFloat  gHeightOffsetMagic;


  //
  @property  (nonatomic)  UIImage *setCardImage;  // Rendered image of this card

  
  //
  // DESIGNATED INITIALIZER
  - (id)initWithFrame: (CGRect)     frame;

  - (id)initWithFrame: (CGRect)     frame
		count: (NSUInteger) count
		shape: (SCShape)    shape
		color: (SCColor)    color
		shade: (SCShade)    shade;

  //
  - (void) generateCardImage;

  - (void) borderUnselected;
  - (void) borderSelected;
  - (void) borderHint;

@end

