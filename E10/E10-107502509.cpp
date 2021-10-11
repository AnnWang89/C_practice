/*****************************************
* Exercise 10
* Name: ¤ý§g¦w
* Student Number: 107502509
* Course: 2018-CE1003-A
******************************************/

#include <iostream>
#include"myTime.h"
using namespace std;

int main()
{
    myTime wakeUp(6, 45, 0);
    myTime noon;
    myTime sleep;
    noon.setHour(12);
    noon.setMinute(0);
    noon.setSecond(0);
    sleep.setTime(22,0,0);
    cout <<wakeUp.getHour() <<"-"<< wakeUp.getMinute()<<"-"<<wakeUp.getSecond()<<endl;
    wakeUp.printMe();
    noon.printMe();
    return 0;
}
