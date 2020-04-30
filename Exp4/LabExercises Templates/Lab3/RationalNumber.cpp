// Lab 3: RationalNumber.cpp
// RationalNumber member-function definitions.
#include <cstdlib>
using std::exit;

#include <iostream> 
using std::cout; 
using std::endl; 

#include "RationalNumber.h"

// RationalNumber constructor sets n and d and calls reduction
RationalNumber::RationalNumber( int n, int d )
{
	if ( d == 0 )	{
		cout << "denominator error" << endl;
		numerator = 0, denominator = 1;
	}
	else if ( n == 0 ) {
		numerator = 0, denominator = 1;
	} else {
		numerator = n, denominator = d;
		reduction();
	}
}

// overloaded + operator
RationalNumber RationalNumber::operator+( const RationalNumber& right ) const
{
	RationalNumber temp;

	if ( denominator == right.denominator )	{
		temp.denominator = denominator;
		temp.numerator = numerator + right.numerator;
	} else {
		temp.denominator = denominator * right.denominator;
		temp.numerator =
			numerator * right.denominator + denominator * right.numerator;
	}
	if ( temp.denominator < 0 )	{
		temp.numerator = -temp.numerator;
		temp.denominator = -temp.denominator;
	}
	temp.reduction();
	
	return temp;
}

// overloaded - operator
RationalNumber RationalNumber::operator-( const RationalNumber& right ) const
{
	return *this + RationalNumber( -right.numerator, right.denominator );
}

// overloaded * operator
RationalNumber RationalNumber::operator*( const RationalNumber& right ) const
{
	RationalNumber temp;

	temp.numerator = numerator * right.numerator;
	temp.denominator = denominator * right.denominator;
	temp.reduction();

	return temp;
}

// overloaded / operator
RationalNumber RationalNumber::operator/( const RationalNumber& right ) const
{
	return *this * RationalNumber( right.denominator, right.numerator );
}

// overloaded > operator
bool RationalNumber::operator>( const RationalNumber& right ) const
{
	return right < *this;
}

// overloaded < operator
bool RationalNumber::operator<( const RationalNumber& right ) const
{
	return double(numerator) / denominator < 
		   double(right.numerator) / right.denominator;
}

// overloaded >= operator
bool RationalNumber::operator>=( const RationalNumber& right ) const
{
	return !( *this < right );
}

// overloaded <= operator
bool RationalNumber::operator<=( const RationalNumber& right ) const
{
	return !( right < *this );
}

// overloaded == operator
bool RationalNumber::operator==( const RationalNumber& right ) const
{
	return numerator == right.numerator && denominator == right.denominator;
}

// overloaded != operator
bool RationalNumber::operator!=( const RationalNumber& right ) const
{
	return !this->operator==(right);
}

// function printRational definition
void RationalNumber::printRational() const
{
	if ( numerator == 0 ) // print fraction as zero
		cout << numerator;
	else if ( denominator == 1 ) // print fraction as integer
		cout << numerator;
	else
		cout << numerator << '/' << denominator;
} // end function printRational

// function reduction definition
void RationalNumber::reduction()
{
	int largest, gcd = 1;  // greatest common divisor;

	largest = ( numerator > denominator ) ? numerator: denominator;

	for ( int loop = 2; loop <= largest; loop++ )
		 if ( numerator % loop == 0 && denominator % loop == 0 )
			 gcd = loop;

	numerator /= gcd;
	denominator /= gcd;
} // end function reduction


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
