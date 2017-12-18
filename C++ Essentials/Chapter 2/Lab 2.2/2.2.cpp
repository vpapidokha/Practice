#include <iostream>
using namespace std;
int main(void) { 
 int system;
float metres, foot, inches;
cin>> system;
if (system == 0)
{
   cin>> metres;
   foot = metres*3.281;
   cout << foot;
    }
    else if (system == 1)
    {
       cin >> foot;
       metres = foot*0.3048;
       cout << metres << "m";
        }
    else 
    cout << "I don't know such a system";
return 0;
}
