//
// Card.h
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>



//---------------------------------------------------- -o-
@interface Card : NSObject


  @property (strong, nonatomic)               NSString  *contents;

  @property (nonatomic, getter=isFaceUp)      BOOL       faceUp;
  @property (nonatomic, getter=isUnplayable)  BOOL       unplayable;


  - (int) match: (NSArray *)otherCards;


@end // Card

