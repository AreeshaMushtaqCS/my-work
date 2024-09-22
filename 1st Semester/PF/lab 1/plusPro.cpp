#include<iostream>
using namespace std;
main()
{
    cout<<"Heelo";
    string num1 ="101";
    string num2 ="011";
    string num3 = "";
    for (int i = 0; i < 3; i++)
    {
        num3[i] = num1[i] xor num2[i];
        cout<<num3[i];
    }
    
}