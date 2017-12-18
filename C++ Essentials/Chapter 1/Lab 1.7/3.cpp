#include <iostream>

using namespace std;

int main(void){
	int a,b,c,d;
	cout << "Write the first number:";
	cin >> a;
	cout << "Write the second number:";
	cin >> b;
	cout << "Write the first number:";
	cin >> c;
	cout << "Write the second number:";
	cin >> d;
	if(a <= 255 && a >= 0 && b <= 255 && b >= 0 && c <= 255 && c >= 0 && d <= 255 && d >= 0 ){
		cout << "Your IP-address:" << a << "." << b << "." << c << "." << d;
		return 0;
	}
	else{
		return 1;
	}
}
