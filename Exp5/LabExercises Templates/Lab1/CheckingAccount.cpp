// Lab 1: CheckingAccount.cpp
// Member-function definitions for class CheckingAccount.
#include <iostream>
using std::cout;
using std::endl;

#include "CheckingAccount.h" // CheckingAccount class definition

// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount(double initBalance, double initFee)
	: Account(initBalance), transactionFee(initFee) { }

// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit( double amount )
{
	Account::credit(amount);
	chargeFee();
}

// debit (subtract) an amount from the account balance and charge fee
bool CheckingAccount::debit( double amount )
{
	if ( Account::debit(amount) )	{
		chargeFee();
		return true;
	}
	return false;
}

// subtract transaction fee
void CheckingAccount::chargeFee()
{
	if ( getBalance() >= 1 )	{
		Account::debit( transactionFee );
		cout << "$" << transactionFee << " transaction fee charged." << endl;
	} else {
		cout << "$" << getBalance() << " transaction fee charged." << endl;
		setBalance( 0 );
	}
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
