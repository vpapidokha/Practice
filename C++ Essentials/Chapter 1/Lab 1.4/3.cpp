#include <iostream>

using namespace std;

int main(void) {
	int i, j, k;
	cout << "Enter i: ";
	cin >> i;
	cout << "Enter j: ";
	cin >> j;
	i+=2;
	j-=i;
	k=i/j;
	k+=k;
	k--;
	j=k%i;
	k+=k+i;
	k+=k/j;
	k*=k*k;
	k+=i*j;
// increment i by 2
// decrement j by i
// divide i by j giving k
// increment k by k
// decrement k by 1
// assign k modulo i to j
// increment k by k added to i
// increment k by k divided by j
// assign k times k times k to k
// increment k by i times j

	cout << k;
	return 0;
}

