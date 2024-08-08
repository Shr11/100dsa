#include <iostream>
using namespace std;

int main(){

// taking 4 numbers in int 
int a, s, d, f;
cin>>a>>s>>d>>f;

// storing multiplication of last 2 digits
int multi = (a%100)*(s%100)*(d%100)*(f%100);

// taking last 2 digits 
multi%=100;

// edge case : if m = 1-9
if (multi < 10)
    {
     // display 0 i.e 03
     cout<<0;
    }

cout<<multi;


return 0;
}
