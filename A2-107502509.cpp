/********************************************
* Assignment 2
* Name: 王君安
* Student number:107502509
* Course: 2018-CE1003
********************************************/
#include <iostream>

using namespace std;

int main()
{
    int input_number1;//this is the first input number
    int input_number2;//this is the second input number
    int Addition;//this is the addition variable
    int Subtraction;//this is the subtraction variable
    int Multiplication;//this is the multiplication variable
    int Division;//this is the division variable
    int Modulus;//this is the modulus variable

    cout << "Please enter 1st number " ;//output "Please enter 1st number "
    cin >> input_number1;//user input the number 17

    cout << "Please enter 2nd number " ;//output "Please enter 2nd number "
    cin >> input_number2;//user input the number 3


    Addition = input_number1 + input_number2;
    Subtraction = input_number1 - input_number2;
    Multiplication = input_number1 * input_number2;
    Division = input_number1 / input_number2;
    Modulus = input_number1 % input_number2;


    cout <<"1st+2nd="<< Addition <<endl;//output the addition result
    cout <<"1st-2nd="<< Subtraction <<endl;//output the subtraction result
    cout <<"1st*2nd="<< Multiplication <<endl;//output the multiplication result
    cout <<"1st/2nd="<< Division<<endl;//output the division result
    cout <<"1st%2nd="<< Modulus <<endl;//output the modulus result

    return 0;
}
