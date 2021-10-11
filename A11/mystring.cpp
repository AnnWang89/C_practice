/*****************************************
* Assignment 11
* Name: ¤ý§g¦w
* Student Number: 107502509
* Course: 2018-CE1003-A
******************************************/
#include "mystring.h"
#include<iostream>
using namespace std;

//create a Mystring object and set str a value
Mystring::Mystring(const char* s)
{
    str=s;//pointer
}

//set str a value
void Mystring::setString(const char* s)
{
    str=s;//pointer
}

//return value of str
const char* Mystring::getString()
{
    return str;// const char *str;
}

//dst: get substring, start and length: start the ith char to get each char and stop when length of substring >= length
void Mystring::subString(char* dst, int start, int length)
{
    for(int j=0;j<100;j++)
        dst[j]=0;//initial
    for(int i=0;i<length;i++)
    {
        dst[i]=str[start+i];//put str in dst
    }
}

//return length of str
int Mystring::length()
{
    int num=0;
    for(int i=0;i<100;i++)
    {
        if(str[i]!=0)
            num++;//count the char
        if(str[i]==0)
            break;//end
    }
       return num;
}


//Parse whether a digits string is Time format. if true, print it; else, print error
void tryParseTime(const char* s)
{
    int num=0;
    for(int i=0;i<100;i++)
    {
        if(s[i]!=0)
            num++;
        if(s[i]==0)
            break;
    }

    if(s[0]=='-')
    {
        cout <<"B.C. ";//BC
        for(int i=0;i<4;i++){
           if(num==9)
              cout << s[num-8+i];
           if(num==8){
              cout << s[num-7+i];
              if(i==2)
                break;
           }
           if(num==7){
              cout << s[num-6+i];
              if(i==1)
                break;
           }
           if(num==6){
              cout << s[num-5+i];
              break;
           }
        }
        cout <<"-";
        for(int i=0;i<2;i++)
           cout << s[num-4+i];
        cout <<"-";
        for(int i=0;i<2;i++)
           cout << s[num-2+i];
        cout <<endl;

    }
    else{
        cout <<"A.D. ";//AC
        for(int i=0;i<4;i++)
           cout << s[i];
        cout <<"-";
        for(int i=4;i<6;i++)
           cout << s[i];
        cout <<"-";
        for(int i=6;i<8;i++)
           cout << s[i];
        cout <<endl;
    }

    //20181230
    //AC 2018-12-30
    //-20000506
    //BC 2000-05-06
}

