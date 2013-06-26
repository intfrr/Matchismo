//
// SetCard_universal.h
//
// Set Match game categories for shapes, colors and shades.
//



//---------------------------------------------------- -o-
typedef enum { 
  SCShapeOne=0, SCShapeTwo, SCShapeThree, SCShapeMax }       SCShape;

typedef enum { 
  SCColorOne=0, SCColorTwo, SCColorThree, SCColorMax }       SCColor;

typedef enum { 
  SCShadeFull=0, SCShadePartial, SCShadeClear, SCShadeMax }  SCShade;

#define SETCARD_COUNT_MAX  3

