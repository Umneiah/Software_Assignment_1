
#include <iostream>
#include <string>
using namespace std;

class Bank_account {
private:
	string depositor_name;
	string account_number;
	double balance;

public:
	Bank_account();   //default constructor
	Bank_account(const string &depositor_name, const string &account_number, double balance);
	void show();
	void deposite(double n);
	void withdraw(double n);
};
