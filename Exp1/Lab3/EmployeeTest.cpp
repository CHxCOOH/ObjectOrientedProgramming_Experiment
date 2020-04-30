// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
#include "Employee.h" // include definition of class Employee
using std::cout;
using std::endl;

// function main begins program execution
int main()
{
   /* Create two Employee objects and assign them to Employee variables. */
   Employee e1("Bob", "Jones", 2875), e2("Susan", "Baker", 3150);
   /* Output the first name, last name and salary for each Employee. */
   
   cout << "Employee 1: "<< e1.getFirstName() << ' ' << e1.getLastName()
        << "; Yearly Salary: " << 12 * e1.getMonthlySalary() << endl;

   cout << "Employee 2: "<< e2.getFirstName() << ' ' << e2.getLastName()
        << "; Yearly Salary: " << 12 * e2.getMonthlySalary() << endl;

   /* Give each Employee a 10% raise. */
   cout << "\nIncreasing employee salaries by 10%" << endl;
   e1.setMonthlySalary(e1.getMonthlySalary()*1.1);
   e2.setMonthlySalary(e2.getMonthlySalary()*1.1);

   /* Output the first name, last name and salary of each Employee again. */
   cout << "Employee 1: "<< e1.getFirstName() << ' ' << e1.getLastName()
        << "; Yearly Salary: " << 12 * e1.getMonthlySalary() << endl;

   cout << "Employee 2: "<< e2.getFirstName() << ' ' << e2.getLastName()
        << "; Yearly Salary: " << 12 * e2.getMonthlySalary() << endl;
   
   return 0; // indicate successful termination
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
