#include <iostream>
#include <iomanip>
#include "myTime.h"
using namespace std;
myTime::myTime()
{
    hour=0;
    minute=0;
    second=0;
}
myTime::myTime(int h,int m,int s)
{
    hour=h;
    minute=m;
    second=s;
}
void myTime::setHour(int h)
{
    hour=h;
}
void myTime::setMinute(int m)
{
    minute=m;
}
void myTime::setSecond(int s)
{
    second=s;
}
int myTime::getHour()
{
    return hour;
}
int myTime::getMinute()
{
    return minute;
}
int myTime::getSecond()
{
    return second;
}
void myTime::setTime(int h,int m,int s)
{
     hour=h;
     minute=m;
     second=s;
}
void myTime::printMe()
{
    cout <<hour<<":"<<minute<<"."<<second<<endl;
}

