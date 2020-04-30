// Lab 2: Date.cpp
// Member-function definitions for class Date.
#include <iostream> 
using std::cout; 

#include "Date.h" // include definition of class Date

Date::Date( int m, int d, int y ) 
{
	setDate( m, d, y ); // sets date 
} // end Date constructor

void Date::setDate( int mo, int dy, int yr )
{
	setMonth( mo ); // invokes function setMonth 
	setDay( dy ); // invokes function setDay																bug！在setYear和Month之前setDay，有可能导致没有对非闰年的2月29日做合法性检测，交换该行与下一行即可。
	setYear( yr ); // invokes function setYear
} // end function setDate

void Date::setDay( int d )
{
	if ( month == 2 && leapYear() )  
		day = ( d <= 29 && d >= 1 ) ? d : 1; 
	else
		day = ( d <= monthDays() && d >= 1 ) ? d : 1;
} // end function setDay

void Date::setMonth( int m ) 
{ 
	month = m <= 12 && m >= 1 ? m : 1; // sets month  
} // end function setMonth

void Date::setYear( int y ) 
{
	year = y >= 1900 ? y : 1900; // sets year
} // end function setYear

int Date::getDay() 
{
	return day;
} // end function getDay

int Date::getMonth() 
{ 
	return month; 
} // end function getMonth

int Date::getYear() 
{ 
	return year; 
} // end function getYear

void Date::print()
{
	cout << month << '-' << day << '-' << year << '\n'; // outputs date
} // end function print

void Date::nextDay()				// Write code to define member function nextDay;
{									//make sure to check if the new day is the start of
	if ( day < monthDays() )	{	//a new month or a new year
		setDay(day+1);
	} else if ( month < 12 )	{
		setDay( 1 ), setMonth( month + 1 );
	} else	{
		setDate( 1, 1, year + 1 );
	}
}

bool Date::leapYear()
{
	if ( getYear() % 400 == 0 || ( getYear() % 4 == 0 && getYear() % 100 != 0 ) )
			return true; // is a leap year
		else
			return false; // is not a leap year
} // end function leapYear

int Date::monthDays()
{
	const int days[ 12 ] =  
	  { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	return getMonth() == 2 && leapYear() ? 29 : days[ getMonth() - 1 ];
} // end function monthDays


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
