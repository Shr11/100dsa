#include <iostream>
using namespace std;

int main() {

char c ;
// getting a character
cin>>c;

// converting to ascii
int a = (int)c;

// condition for digit  (0-9)  -> ascii (48-57)
if (a >= 48 && a <= 57) 
     cout<<"IS DIGIT"<<endl;

else
{
    cout<<"ALPHA"<<endl;
     if ( a >= 65 && a <= 90) 
           cout<<"IS CAPITAL";
      
     // lower alpha ascii ( 97-122)
     else
           cout<<"IS SMALL";

} 

return 0;
}
