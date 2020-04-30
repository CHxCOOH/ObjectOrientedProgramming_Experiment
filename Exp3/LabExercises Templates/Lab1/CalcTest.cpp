// Lab Exercise 1: CalcTest.cpp

#include <iostream>

using std::cout;
using std::endl;

#include "SimpleCalculator.h"

int main()
{
	
	double a = 10.0;
	double b = 20.0;

	SimpleCalculator sc;
	cout << "The value of a is: " << a << "\n";
	cout << "The value of b is: " << b << "\n\n";
	
	double addition = sc.add( a, b );
	cout << "Adding a and b yields " << addition << "\n";

	double subtraction = sc.subtract( a, b );
	cout << "Subtracting b from a yields " << subtraction << "\n";

	double multiplication = sc.multiply( a, b );
	cout << "Multiplying a and b yields " << multiplication << "\n";
	 
	double division = sc.devide( a, b );
	cout << "Dividing a by b yields " << division << endl;

	return 0;
}


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
