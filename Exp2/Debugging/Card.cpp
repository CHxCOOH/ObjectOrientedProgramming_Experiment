#include "Card.h" //Debugging: Card.cpp

#include <iostream>

using std::cout;
using std::endl;

// default constructor
Card::Card() 
{
   suit = 4; 
   value = 1;

} // end class Card constructor

// constructor
Card::Card( int s, int v ) 
{
   suit = s; value = v;

} // end class Card constructor

// destructor
Card::~Card() 
{
   cout << "The destructor has been invoked\n";

} // end class Card destructor

// set suit
void Card::setSuit( int s ) 
{
   suit = s;

} // end function setSuit

// set value
void Card::setValue( int v ) 
{
   value = v;

} // end function setValue

// function print definition
void Card::print() const
{
   // is card valid
   if ( !validCard() ) {
      cout << "This card is not valid\n";
      return;

   } // end if

   cout << "This is the: ";

   // determine face of card
   switch ( value ) {
      case 1:
         cout << "Ace ";
         break;

      case 11:
         cout << "Jack ";
         break;

      case 12:
         cout << "Queen ";
         break;

      case 13:
         cout << "King ";
         break;

      default:
         cout << value << " ";

   } // end switch

   // determine suit
   switch ( suit ) {
      case 1:
         cout << "of clubs\n";
         break;

      case 2:
         cout << "of diamonds\n";
         break;

      case 3:
         cout << "of hearts\n";
         break;

      case 4:
         cout << "of spades\n";
         break;

      default:
         cout << "\ninvalid suit\n";

   } // end switch

} // end function print

// return suit
int Card::getSuit() const
{
   return suit; 

} // end function getSuit

// return value
int Card::getValue() const
{
   return value;

} // end function getValue

// function validCard definition
bool Card::validCard() const
{
   return value >= 1 && value <= 13 && suit >= 1 && suit <= 4;

} // end function validCard


/**************************************************************************
 * (C) Copyright 1992-2005 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
