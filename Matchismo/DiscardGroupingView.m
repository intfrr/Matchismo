//
// DiscardGroupingView.m
//

#import "DiscardGroupingView.h"



//--------------------------------------------------------------- -o-
@interface DiscardGroupingView()

  /*EMPTY*/

@end // @interface DiscardGroupingView()




//--------------------------------------------------------------- -o-
#define HORIZONTAL_VIEW_POINTS_SEPARATION  5




//--------------------------------------------------------------- -o-
@implementation DiscardGroupingView


//------------------------ -o-
// setGroup: 
//
- (void) setGroup: (NSArray *)setCardMatchedGroup
{
  _group = setCardMatchedGroup;
  [self setNeedsDisplay];
}



//------------------------ -o-
// drawRect:
//
// self.group represents a set of matched Set Cards.
// Render each card and display them in close quarters.
//
- (void) drawRect: (CGRect)rect
{
  NSUInteger  groupCount    = [self.group count];
  CGFloat     subviewWidth  = 
    (self.bounds.size.width - (HORIZONTAL_VIEW_POINTS_SEPARATION * 2)) / groupCount;
  
  CGFloat  subviewOriginX = 0;
  CGRect   subviewRect;


  for (int i = 0; i < groupCount; i++)
  {
    SetCard_v2  *groupCard = (SetCard_v2 *) self.group[i];

    subviewRect = CGRectMake(subviewOriginX, self.bounds.origin.y, 
                               subviewWidth, self.bounds.size.height);

#ifdef TEXTONLY_DEBUG
    NSAttributedString  *cardText = [[NSAttributedString alloc] initWithString:groupCard.description];
    [cardText drawInRect:subviewRect];
#endif

    SetCardView  *setCardView = [[SetCardView alloc] 
				  initWithFrame: subviewRect
					  count: groupCard.count
					  shape: groupCard.shape
					  color: groupCard.color
					  shade: groupCard.shade ];

    [setCardView generateCardImage];
    [setCardView.setCardImage drawInRect:subviewRect];


    subviewOriginX += subviewWidth + HORIZONTAL_VIEW_POINTS_SEPARATION;

  } // endfor

} // drawRect:



//--------------------------------------------------------------- -o-
#pragma mark - Initialization

//------------------ -o-
- (void)setup
{
    // do initialization here
}

//------------------ -o-
- (void)awakeFromNib
{
    [self setup];
}

//------------------ -o-
- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    [self setup];
    return self;
}

@end

