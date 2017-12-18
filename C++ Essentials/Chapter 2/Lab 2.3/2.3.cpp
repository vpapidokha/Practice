#include <iostream>
using namespace std;
int main(void) { 
 int yearnum,  monthnum,  daynum, result;
 cout << "Input number of years";
 cin >> yearnum;
  cout << "Input number of months";
 cin >> monthnum;
  cout << "Input number of days";
 cin >> daynum;
 monthnum += 2;
 if (monthnum < 0)
 {
     monthnum += 12;
     yearnum-= 1;
     }
 result =  monthnum*83/32 ;
   result = monthnum+daynum;
     result = yearnum + monthnum;
   result = yearnum/4 +monthnum;
   result = monthnum - yearnum/100;
    result = yearnum/400 + monthnum;
    result = monthnum%7;
cout << result;
return 0;
}
