/********************************
* Exercise 1
* Name: ¤ý§g¦w
* Student Number: 107502509
* Course: 2018-CE1003-A
********************************/

#include <iostream>

using namespace std;

int main()
{
    int score;//set a score variable

    cout <<"Please key in your score:"<< endl;//output these words
    cin >> score;//user enter the score

    if( score >=80 && score <=100 )
        cout <<"You get A"<< endl;
    else if( score >=70 && score <=79 )
        cout <<"You get B"<< endl;
    else if( score >=60 && score <=69 )
        cout <<"You get C"<< endl;
    else if( score >=50 && score <=59 )
        cout <<"You get D"<< endl;
    else if( score <=49 && score >=0 )
        cout <<"You Fail"<< endl;
    else
        cout <<"invalid input"<< endl;//according to the score give you a level


    return 0;
}
