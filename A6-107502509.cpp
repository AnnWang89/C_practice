/*****************************************
* Assignment 6
* Name: ¤ý§g¦w
* Student Number: 107502509
* Course: 2018-CE1003-A
******************************************/
#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int star(int,int);//function prototype
int main()
{
    int answer;//a random number for the game
    int maxhp;//MaxHP user set by themselves
    int guess;//user guess the number
    int times=0;//how many times the user guess
    int Max=100;//the range of the game,from 0 to 100 in the beginning
    int Min=0;//the range of the game,from 0 to 100 in the beginning
    srand(time(NULL));//according to the time and give a random number
    answer=rand()%101;//random number is from 0 to 100
    cout << "The answer number is : " << answer << endl;//out put the answer
    cout << "Set your MaxHp : ";
    cin >> maxhp ;//input the MaxHp
    cout << "HP : ";
    for(int i=0;i<maxhp;i++)
        cout <<"¡¯";//how many Hp how many stars
    while(times<maxhp)
    {
        cout <<"\n\nPlease guess a number from "<< Min <<" to "<< Max << endl;//the range will be smaller after user guess some number
        cout <<"You guess : ";
        cin >> guess;
        times++;//calculate how many times the user guess
        if(guess == answer)//the user get the right answer
            {
                cout << "Congratulations! You get the answer in " << times << " times" << endl;
                break;//end the loop
            }
        if(guess != answer)//the user guess wrong
        {
            if((guess > Max) || (guess < Min))//user guess out of the range
                cout << "Your guess is out of range, please try again" << endl;
            else //user guess in the range
                {
                    if(guess > answer)
                        Max=guess;//shorten the range
                    if(guess < answer)
                        Min=guess;//shorten the range
                    cout << "Wrong answer." << endl;
                }
            cout << "HP : ";
            for(int i=0;i<star(maxhp,times);i++)//call the function
                cout <<"¡¯";//how many Hp left
            for(int j=0;j<times;j++)
                cout <<"¡Ä";//how many Hp has used
        }

    }
    if(times==maxhp)
        cout << "\nSorry, you die" << endl;

    return 0;
}
int star(int maxhp,int times)//the function
{
    int num;
    num=maxhp-times;
    return num;//return the left of the Hp
}

