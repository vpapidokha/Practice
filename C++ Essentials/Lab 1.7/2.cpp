#include <iostream>

using namespace std;

int main(void) {
	int a,b;
	float a1,b1;
	cout << "Write the first number:";
	cin >> a;
	cout << "Write the second number:";
	cin >> b;
	a1 = 1/a;
	b1 = 1/b;
	if(a1==b1){
		cout << "Results are equal(by 0.000001 epsilon)";
	}
	else {
		cout << "Results are not equal(by 0.000001 epsilon)";
	}
	return 0;
}
