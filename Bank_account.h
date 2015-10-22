
#ifndef BankAccount_H_
#define BankAccount_H_
#include <iostream>
#include <string>
using namespace std;

class Bank_account {
private:
	string depositor_name;
	string account_number;
	double balance;

public:
	Bank_account(const string &name, const string &number, double balanc);
	void show();
	void deposite(double n);
	void withdraw(double n);
};

#endif
