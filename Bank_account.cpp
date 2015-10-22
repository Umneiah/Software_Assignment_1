
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

int main() {
	
	Bank_account bank_account = Bank_account("Adam", "327gj897", 207546.0);
	bank_account.show();

	cout << "Deposite money" << endl;
	bank_account.deposite(100.2);
	bank_account.show();

	cout << "withdraw money" << endl;
	bank_account.withdraw(50.1);
	bank_account.show();

	return 0;
}
