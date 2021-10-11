/*****************************************
 * Assignment 5
 * Name: ¤ý§g¦w
 * Student Number: 107502509
 * Course: 2018-CE1003-A
 ******************************************/

#include <iostream>

using namespace std;
int greatest(int number1,int number2);//define Greatest Common Divisor
int lowest(int number1,int number2,int greatestnumber);//define Lowest Common Multiple

int main()
{
    int choose;//break or Greatest Common Divisor or define Lowest Common Multiple
    int number1;//the first number
    int number2;//the second number

    while (1)//a loop
    {
        cout << "(1)Find Greatest Common Divisor of two number." << endl;
        cout << "(2)Find Lowest Common Multiple." << endl;
        cout << "(0)Quit the Program." << endl;
        cout << "Input the number to choose:" ;
        cin >> choose;

        if(choose==0)
            break;//end

        cout << "Input two numbers:" ;
        cin >> number1 >> number2;//enter two number
        cout << "Result:" ;
        if(choose==1)
            cout << greatest(number1,number2) << endl;//Call the function and out put it
        if(choose==2)
            cout << lowest(number1,number2,greatest(number1,number2)) << endl;//Call the function and out put it
        cout << "=========="<< endl;
    }

    return 0;
}

int greatest(int number1,int number2 )//Define Body
{
    int dividend;
    int divisor;
    int quotient;
    int remainder;//set 4 variables to calculate

    if ( number1 >= number2)//the bigger number calculate first
    {
         dividend = number1;
         divisor = number2;
    }
    if ( number1 < number2)//the bigger number calculate first
    {
         dividend = number2;
         divisor = number1;
    }
    while(remainder != 0)//use Euclidean algorithm to get the answer
    {
        quotient=0;//quotient from 0 and accumulate later

        while(quotient*divisor <= dividend)//to get the correct quotient of dividend/divisor
        {
            quotient=quotient+1;
        }
        quotient=quotient-1;//because in the while loop +1 in the end so -1 to return the correct quotient
        remainder=dividend-quotient*divisor;//calculate remainder
        dividend=divisor;//the divisor will become the next dividend
        divisor=remainder;//the remainder will become the next divisor
    }

    return(dividend);//the divisor will be the Greatest Common Divisor of two number,but divisor=remainder=0,so return dividend
}

int lowest(int number1,int number2,int greatestnumber)//Define Body
{
    return(number1*number2/greatestnumber);//calculate Lowest Common Multiple of two number and return
}
