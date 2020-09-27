#include <cstdlib>
#include <iostream>
#include "Account.h"

using namespace std;

/*
 * This file contains the "Driver" code for this project.
 */

 /*
  * This is the main method of your program. You should write code here which tests all
  * aspects of your Account class implementation. You are responsible for thoroughly
  * testing your code.
  *
  * Please note: code in this file will not be used in grading evaluation of your
  * assignment. We will use our own driver file which will use YOUR provided Account
  * implementation to test against project requirements.
  */
int main(){
  
	Account account1("Hi");
	Account account2("Bye");

	cout << account1.getName() << endl;
	cout << account1.getBalance() << endl;

	account1.deposit(400);

	cout << account1.getBalance() << endl;

	account1.withdraw(200);

	cout << account1.getBalance() << endl;

	account1.withdraw(200);

	cout << account1.getBalance() << endl;

	account1.deposit(400);

	cout << account1.getBalance() << endl;

	account1.withdraw(600);

	cout << account1.getBalance() << endl;

	cout << account1.interest(0.1) << endl;

	cout << account1.interest(-0.1) << endl;

	account1.setName("Hello");

	cout << account1.getName() << endl;


	cout << account1.transferTo(400, account2) << endl;

	cout << account1.getBalance() << endl;
	cout << account2.getBalance() << endl;

	account1.setName("123456789123456789123456789");

	cout << account1.getName() << endl;

	account1.setBalance(-400);

	cout << account1.getBalance() << endl;

	account1.setBalance(0);

	cout << account1.getBalance() << endl;

        account1.setBalance(1000);

        cout << account1.getBalance() << endl;

        cout << account1.transferTo(300, account2) << endl;

        cout << account1.getBalance() << endl;
        cout << account2.getBalance() << endl;

        account1.setName("HiHi");
        account2.setName("ByeBye");

        cout << account1.getName() << endl;
        account1.interest(-1);
        cout << account1.getBalance() << endl;
        
        cout << account2.getName() << endl;
        account2.interest(1);
        cout << account2.getBalance() << endl;




  return EXIT_SUCCESS;
}
