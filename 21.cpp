// * Age in Days Gym - 287306Q *

#include <iostream>
using namespace std;

int main(){

// getting age in days
int n;
cin>>n;

// calculating years , months & days
int y, m, d;
y = int(n/365);
n-=365*y;
m=int(n/30);
d=n-30*m;

cout<<y<<" years"<<endl<<m<<" months"<<endl<<d<<" days";

return 0;
}
