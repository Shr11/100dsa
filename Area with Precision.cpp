#include <iostream>
#include <iomanip>
//defining a macro
#define pi  3.141592653
using namespace std;

int main(){

// to set fixed precision of 9
cout<< fixed <<setprecision(9)<<endl;
double area=0, r;
cin>>r;
area = pi * (r*r);

cout<<area<<endl; 
return 0;
}
