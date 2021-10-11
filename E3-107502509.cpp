/*****************************************
* Example 3
* Name: 王君安
* Student Number: 107502509
* Course: 2018-CE1003-A
******************************************/
#include <iostream>

using namespace std;

int fibonacci(int);//Define Prototype
int factorial(int);//Define Prototype
int main()
{
    int x;
    while(1)//let the loop continue
       {
        cout <<"Input a number: ";
        cin >>x;
        if(x==0)
            break;
        cout <<"Fibonacci of "<<x<<": ";
        cout << fibonacci(x) << endl;
        cout <<"Factorial of "<<x<<": ";
        cout <<factorial(x) << endl;
        cout <<"==========" << endl;
       }
    return 0;
}
int fibonacci(int x)//Define Fibonacci Body
{
    int num=1;
    int f1=0;
    int f2=1;
    int f=1;
    while(num<x)
    {
        f=f1+f2;
        f1=f2;
        f2=f;
        num=num+1;
    }

    return f;
}
int factorial(int x)//Define Factorial Body
{
    int num=1;
    int f=1;
    while(num<=x)
    {
        f=num*f;
        num=num+1;
    }
    return f;
}
