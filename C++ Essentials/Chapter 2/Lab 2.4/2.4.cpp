#include <iostream>
using namespace std;
int main(void) { 
    int  a, b, c, d, e, y;
	cout << "Input year";
cin >> y;
a = y/19;
b = y%4;
c = y%7;
d = (a*19+24)%30;
e = (2*b + 4*c + 6*d + 5)%7;
if (d+e < 10)
{
    cout << "Easter falls on the"<< d+e+22 << "day of March";
}

else 
{cout << "Easter falls on the"<< d+e-9 << "day of April"; }
}
