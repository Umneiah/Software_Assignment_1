
#include "Person.h"

Person::Person(const string &ln, const char *fn ) // *fn ya3ny momkn ab3tloh array
{
  lname = ln;
  strcpy(fname, fn); //copy string fn into fname 
};

void Person::Show() const {
 cout << *fname << " " << lname << endl; 
};

void Person::FormalShow() const {
 cout << lname << " " << *fname << endl; 
};

int main() {
	Person one; 
	Person two("SandraBollock"); // use #2 with one default argument
	Person three("potter", "Harry"); // use #2, no defaults
	one.Show();
	cout << endl;
	one.FormalShow();

	two.Show();
	two.FormalShow();
	cout << endl;

	three.Show();
	three.FormalShow();
	cout << endl;

	system("pause");
	return 0;
}
