// Tail-Head Recursion
#include <iostream>

using namespace std;

void fun1(int n)
{
    if(n>0)
    {   
        fun1(n-1);
        cout<<n<<endl;
        
    }
}
void fun2(int n)
{
    if(n>0)
    {
        cout<<n<<endl;
        fun2(n-1);
    }
}

int main()
{
    int x = 3;

    cout<<"returning/descending phase"<<endl;
    fun1(x);
    
    cout<<"calling/ascending phase"<<endl;
    fun2(x);
    
    return 0;
}
