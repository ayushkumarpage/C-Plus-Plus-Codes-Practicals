/* Write a C++ program for finding greatest of three number. */
// Author : Ayush Kumar

using namespace std;
#include <iostream>

int main()
{
    int num1,num2,num3;
    cout<<" Enter first number";
    cin>>num1;
    
    cout<<" Enter second number";
    cin>>num2;
    
    cout<<" Enter third number";
    cin>>num3;
    
    if(num1>num2&&num1>num3)
    {
        cout<<" First number is greatest:"<<endl<<num1;
    }
    else if(num2>num1&&num2>num3)
    {
        cout<<" Second number is greatest"<<endl<<num2;
    }
    else
    {
        cout<<" Third number is greatest"<<endl<<num3;
    }
    return 0;
}


