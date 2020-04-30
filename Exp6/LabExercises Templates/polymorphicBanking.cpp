// Lab 1: polymorphicBanking.cpp
// Processing Accounts polymorphically.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setprecision;
using std::fixed;

#include <vector>
using std::vector;

#include "Account.h" // Account class definition
#include "SavingsAccount.h" // SavingsAccount class definition
#include "CheckingAccount.h" // CheckingAccount class definition

int main()
{
	// create vector accounts
	vector<Account*> accounts(4);

	// initialize vector with Accounts
	accounts[ 0 ] = new SavingsAccount( 25.0, .03 ); 
	accounts[ 1 ] = new CheckingAccount( 80.0, 1.0 );
	accounts[ 2 ] = new SavingsAccount( 200.0, .015 ); 
	accounts[ 3 ] = new CheckingAccount( 400.0, .5 );

	cout << fixed << setprecision( 2 );

	// loop through vector, prompting user for debit and credit amounts
	for ( size_t i = 0; i < accounts.size(); i++ )
	{
		cout << "Account " << i + 1 << " balance: $" 
			<< accounts[i]->getBalance() << endl;

		double withdrawalAmount = 0.0;
		cout << "\nEnter an amount to withdraw from Account " << i + 1 
			<< ": ";
		cin >> withdrawalAmount;
		accounts[i]->debit( withdrawalAmount );

		double depositAmount = 0.0;
		cout << "Enter an amount to deposit into Account " << i + 1 
			<< ": ";
		cin >> depositAmount;
		accounts[i]->credit( depositAmount );

		// downcast pointer
		SavingsAccount *savingsAccountPtr =
							dynamic_cast<SavingsAccount*>( accounts[i] );

		// if Account is a SavingsAccount, calculate and add interest
		if ( savingsAccountPtr != NULL )
		{
			double interestEarned = savingsAccountPtr->calculateInterest();
			cout << "Adding $" << interestEarned << " interest to Account "
				<< i + 1 << " (a SavingsAccount)" << endl;
			savingsAccountPtr->credit( interestEarned );
		} // end if
		
		cout << "Updated Account " << i + 1 << " balance: $" 
			<< accounts[i]->getBalance() << "\n\n";
	} // end for

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

/*
Account 1 balance: $25.00

Enter an amount to withdraw from Account 1: 15.00
Enter an amount to deposit into Account 1: 10.50
Adding $0.61 interest to Account 1 (a SavingsAccount)
Updated Account 1 balance: $21.11

Account 2 balance: $80.00

Enter an amount to withdraw from Account 2: 90.00
Debit amount exceeded account balance.
Enter an amount to deposit into Account 2: 45.00
$1.00 transaction fee charged.
Updated Account 2 balance: $124.00

Account 3 balance: $200.00

Enter an amount to withdraw from Account 3: 75.50
Enter an amount to deposit into Account 3: 300
Adding $6.37 interest to Account 3 (a SavingsAccount)
Updated Account 3 balance: $430.87

Account 4 balance: $400.00

Enter an amount to withdraw from Account 4: 56.81
$0.50 transaction fee charged.
Enter an amount to deposit into Account 4: 37.83
$0.50 transaction fee charged.
Updated Account 4 balance: $380.02

*/