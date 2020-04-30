// Debugging: CardTest.cpp

#include <iostream>

using std::cout;
using std::endl;
#include "Card.h"
int main()
{
	Card c1;  
	Card c2( 3, 4 );
	Card c3( 1, 14 );

	Card *p1 = &c2;

	c1.print();
	c2.print();
	c3.print();
	p1->print();
	cout << endl;

	c1.setSuit( p1->getSuit() );
	c3.setValue(12);
	p1->setValue(5);
	
	c1.print();
	c2.print();
	c3.print();
	p1->print();
	cout << endl;

	return 0;

} // end main


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
