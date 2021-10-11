/********************************
* Assignment 3
* Name: 王君安
* Student Number: 107502509
* Course: 2018-CE1003-A
********************************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int first;//the first side of triangle
    int second;//the second side of triangle
    int third;//the third side of triangle
    int s;//the sum of three side of triangle and /2
    int total;//the area of triangle

    cout <<"Please key in first number:"<< endl;
    cin >> first;//user enter the first number
    cout <<"Please key in second number:"<< endl;
    cin >> second;//user enter the second number
    cout <<"Please key in third number:"<< endl;
    cin >> third;//user enter the third number

    s=(first+second+third)/2;//before using Heron's formula we have to know this first
    total=sqrt(s*(s-first)*(s-second)*(s-third));//use Heron's formula to know the area of triangle



    if( first + second <= third || first + third <= second || third + second <= first)
        cout << "Total area = 0 \n"<<"Not triangle" << endl;//the sum of two side never smaller than the other side and it is not triangle so no area
    else if (( first == second )&&( second== third ))
        cout << "Total area = "<<total<<"\n"<<"Regular triangle"<< endl;//each side have same length
    else if((( first == second ) || ( second == third )|| (first == third ) ) && (( first*first + second*second == third*third ) || ( first*first + third*third == second*second )||( third*third + second*second == first*first )))
        cout << "Total area = "<<total<<"\n"<<"Isosceles right triangle"<< endl;//two side have same length and match the Pythagorean theorem
    else if (( first == second ) || ( second == third )|| (first == third ) )
        cout << "Total area = "<<total<<"\n"<<"Isosceles triangle"<< endl;//two side have same length
    else if (( first*first + second*second == third*third ) || ( first*first + third*third == second*second )||( third*third + second*second == first*first ))
        cout << "Total area = "<<total<<"\n"<<"Right triangle"<< endl;//match the Pythagorean theorem
    else
        cout << "Total area = "<<total<<"\n"<<"Triangle"<< endl;//Triangle not above

    return 0;
}
