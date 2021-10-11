/************************
*Exercise 5
*Name: 王君安
*Student number: 107502509
*Course:2018-CE1003-A
*************************/
#include <iostream>

using namespace std;

int factorial(int n)//Recursion factorial(n)=n!
{
    if(n==1){
        return n;//factorial(1)=1
    }
    return n*factorial(n-1);//factorial(n)=n*factorial(n-1)
}

int main()
{
    int number1=0;
    int number2=0;

    while(1)//let the loop never end
    {
         cout << "Please key in first number : " ;
         cin >> number1;
         if(number1==0)
             break;//number1=0,end the loop
         cout <<"Please key in second number : " ;
         cin >> number2;
         cout <<factorial(number1)/(factorial(number2)*factorial(number1-number2))<<endl;//call the Recursion
         cout <<"===================="<<endl;
    }

    return 0;
}
