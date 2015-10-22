
#include "Bank_account.h"
#include <iostream>

using namespace std;

Bank_account::Bank_account(const string &name, const string &number, double balanc)
{
	depositor_name = name;
	account_number = number;
	balance = balanc;
}


void Bank_account::show() {
	cout << "Depositor's name" << depositor_name <<endl
		<< "Account number" << account_number << endl
		<< "Balance" << balance << endl;
}

void Bank_account::deposite(double n) {
	balance += n;
}

void Bank_account::withdraw(double n) {
	balance -= n;
}
