#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
public:
	// add constructors here -- see description in assignment

	explicit Account(std::string accountName) {
		name = accountName;
		accountBalance = 0;
	}

	double getBalance() {
		// add code here -- a basic getter, return the balance of the account

		return accountBalance;			/* replace this */
	}

	void setBalance(double balance) {
		// add code here -- a basic setter, return nothing.
		if (balance >= 0) {
			accountBalance = balance;
		}
	}

	double deposit(double depositAmount) {
		// your code should check to ensure that depositAmount is positive (e.g.
		// deposit 100 dollars). It should only update the account balance if it is
		// positive. Returns balance after any changes

		// add code here
		if (depositAmount > 0) {
			accountBalance += depositAmount;
		}

		return accountBalance;			/* replace this */

	}

	double withdraw(double withdrawalAmount) {
		// This method should ensure that the withdrawalAmount is positive (e.g.
		// withdraw 100 dollars). It should only update the account balance if the
		// account can cover the withdrawal. Returns balance after any changes

		// add code here
		if (withdrawalAmount > 0 && accountBalance - withdrawalAmount >= 0) {
			accountBalance -= withdrawalAmount;
		}

		return accountBalance;			/* replace this */
	}

	double interest(double percent) {
		// This method should accept percent (positive or negative). (e.g. to grow
		// the account by 10% you would call interest(0.1). To decay the account by
		// 20% you would call interest(-0.2)) Returns balance after any changes

		// add code here
		accountBalance += (accountBalance * percent);
		return accountBalance;			/* replace this */
	}

	std::string getName() const {
		// add code here

		return name;			/* replace this */
	}

	void setName(std::string newName) {
		// Your code should ensure that the name of the account has a max of 20
		// characters. If the newName passed to this function is longer than 20, you
		// should set the account name to be the first 20 characters of the
		// argument.

		// add code here
		if (newName.length() <= 20) {
			name = newName;
		}
		else {
			name = newName.substr(0, 20);
		}
	}

	// write the transferTo method here -- see assignment
	bool transferTo(double amount, Account& otherAccount) {
		// add code here
		if (amount > 0 && accountBalance - amount >= 0) {
			withdraw(amount);
			otherAccount.deposit(amount);
			return true;
		}

		return false; 		/* replace this */
	}

private:
	// add more code here -- see description in assignment
	std::string name;
	double accountBalance;
};

#endif
