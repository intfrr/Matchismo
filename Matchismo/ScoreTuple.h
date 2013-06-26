//
//  ScoreTuple.h
//

#import "Danaprajna.h"



//---------------------------------------------------- -o-

//
// Tags for ScoreTuple property list.
//
#define ST_SCORE        @"ST_SCORE"
#define ST_FLIPSCOUNT   @"ST_FLIPSCOUNT"
#define ST_DATE         @"ST_DATE"
#define ST_GAMETYPE     @"ST_GAMETYPE"



@interface ScoreTuple : NSObject

  @property (nonatomic)          int            score;
  @property (nonatomic)          unsigned int   flipsCount;
  @property (strong, nonatomic)  NSDate        *date;
  @property (nonatomic)          unsigned int   matchGameType;


  // DESIGNATED INITIALIZER.
  //
  - (id) initWithScore: (int)          score__
            flipsCount: (unsigned int) flipsCount__
                  date: (NSDate *)     date__
              matchGameType: (unsigned int) matchGameType__;

  - (id) initWithPropertyList: (id)plist;

  //
  - (NSDictionary *) propertyListValue;
  + (NSArray *)      arrayFromPropertyList: (NSArray *)plistArray;

  //
  - (NSComparisonResult) compareScore:      (ScoreTuple *)otherTuple;
  - (NSComparisonResult) compareFlipsCount: (ScoreTuple *)otherTuple;
  - (NSComparisonResult) compareDate:       (ScoreTuple *)otherTuple;

@end

