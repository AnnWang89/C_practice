/*****************************************
* Exercise 4
* Name:¤ý§g¦w
* Student Number: 107502509
* Course: 2018-CE1003-A
******************************************/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
    int cases;//a variable of number of cases
    int animals;//a variable of the number of the total animal
    cout << "Input the number of cases : " ;
    cin >> cases;

   for(int a=0;a<cases;a++)//a loop that how many cases run how many times
   {
       enum ANIMAL{
       cat=0,dog,bird,fish,rabbit};//set an animal enum
       int x;//set a variable of the random number
       int c=0,d=0,b=0,f=0,r=0;//they are all=0 in the beginning
       cout << "Input the number of animals : ";
       cin >> animals;
       ANIMAL animal;
       srand(time( NULL ));//to set the seed of random as the argument
       for(int i=0;i<animals;i++)//a loop to count how many each animal
    {
        x=rand()%5;
        if(x==cat)//how many cat
            c++;
        if(x==dog)//how many dog
            d++;
        if(x==bird)//how many bird
            b++;
        if(x==fish)//how many fish
            f++;
        if(x==rabbit)//how many rabbit
            r++;

    }
       cout <<"cat:" <<"\t"<<c<<endl;
       cout <<"dog:" <<"\t"<<d<<endl;
       cout <<"bird:" <<"\t"<<b<<endl;
       cout <<"fish:" <<"\t"<<f<<endl;
       cout <<"rabbit:" <<"\t"<<r<<endl<<endl;//show animals numbers on the screen
   }
    return 0;

}



