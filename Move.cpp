
#include "Header.h"

 Move:: Move(double a , double b) 
{
	 x = a;
	 y = b;
}

 void Move::showmove() const
{
	 cout << "x is " << x << endl;
	 cout << "y is " << y << endl;
}

 //add missing , don't know how to write it

 void Move::reset(double a = 0, double b = 0)
{
	x = a;
	y = b;
}

