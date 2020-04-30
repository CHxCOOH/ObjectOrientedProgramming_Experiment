// Debugging: Debugging.cpp

#include <iostream>

using std::cout;
using std::endl;
using std::cin;

#include "Animal.h"
#include "Lion.h"
#include "Dog.h"

void setHeightWeight( Animal& );

int main()
{
	Dog dog1( 60, 120, "Fido" );
	Lion lion1( 45, 300 );

	setHeightWeight( lion1 );
	setHeightWeight( dog1 );

	return 0;

} // end main

// function setHeightWeight definition
void setHeightWeight( Animal& ani )
{
	Animal* a = &ani;
	int height;
	int weight;

	a->print();
	cout << "Enter a new height (using standard units): ";
	cin >> height;
	a->setHeight( height );

	cout << "Enter a new weight (using standard units): ";
	cin >> weight;
	a->setWeight( weight );

	height = a->getHeight();
	weight = a->getWeight();

	cout << "Here are the new height and weight values:\n"
		  << height << endl
		  << weight << endl << endl;

} // end function setHeightWeight


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

/*
This animal is a lion
This animal's height and weight are as follows:
Height: 45      Weight: 300

Enter a new height (using standard units): 50
Enter a new weight (using standard units): 400
Here are the new height and weight values:
50
400

This animal is a dog, its name is: Fido
This animal's height and weight are as follows:
Height: 60      Weight: 120

Enter a new height (using standard units): 50
Enter a new weight (using standard units): 116
Which units would you like to see the height in? (Enter 1 or 2)
        1. metric
        2. standard
2
Which units would you like to see the weight in? (Enter 1 or 2)
        1. metric
        2. standard
1
Here are the new height and weight values:
50
54

*/
