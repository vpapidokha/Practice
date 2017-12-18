#include<iostream>

using namespace std;

int main(void) {
	int year;
	cout << "Enter a year: ";
	cin >> year;
	if(year%4 <= 0 || year%400 <= 0){
		cout << "It's a common year.";
	}
	else
		cout << "It's a leap year";
	return 0;
}

