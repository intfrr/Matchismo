

README :: Matchismo
========================================


This Xcode project represents a solution to the Matchismo assignments given
by Paul Hegarty to his students at Stanford during his Winter 2012-2013
course titled "Developing Apps for iOS" (CS193P) which covers the
fundamentals of development with iOS 6.


For more information about these courses, and how to download the lectures
and materials via iTunesU, please see:

  http://www.stanford.edu/class/cs193p


Barring a few trivial exceptions, this version of Matchismo solves every
Requirement and includes all Extra Credit given in assignments #1 through
#3.  Since Matchismo underwent significant revision between assigments #2
and #3, the UITabViewController has been extended to allow selection of the
first versions (v1) of the Match and Set games.  Files and objects for the
second version of the Match and Set games are sometimes suffexed with "_v2".

This solution to Matchismo includes:

  . implementation of Match and Set game, versions 1 and 2

  . clear use of MVC design patterns
  
  . clear use of subclassing in both the view and the model

  . use of the storyboard, target-actions and outlets
  
  . use of protocols for Delegation design pattern

  . demonstration of UICollectionViews including: multiple, dynamically 
      allocated sections; heterogeneous, dynamic UICollectionViewCells;
      supplementary Headers and Footers.

  . use if UITabViewContorller including custom control over
      UITabBarController defaults.

  . customized UIViews to handle image and text

  . use of Pinch and Tap gestures

  . custom drawings with UIBezierPath (ie: programmer art!)

  . animations for sequences that highlight cards before updating the
      UICollectionView

  . clear feedback to the user at all times during the game

  . two and three card match games; game history

  . a simple UIWebView to document Set via Wikipedia

  . Settings tab to configure the games and score display, including
      choosing which game appears first at boot

  . test for the existence of Set matches as a means to improve
      scoring, display of hints and to determine proper game play

  . small library of utility classes for debugging, logging, management
      of user defaults, CGPoint calculations and other miscellaneous


Note contrary to the bold paragraph above, this repository still lacks, and
will soon be updated to include the following:

  . use of Autolayout in both Portrait and Landscape mode

  . user status messages that include card images, for use in Set Game

