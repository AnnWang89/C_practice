/*****************************************
* Assignment 11
* Name: ¤ý§g¦w
* Student Number: 107502509
* Course: 2018-CE1003-A
******************************************/
#include <iostream>
#include "mystring.h"
using namespace std;

int main()
{
    Mystring str("Hello World");
    char sub[100]={};
    char read[100]={};
    int i;
    int start,len=0;

    do{
        cout << "Choose case: ";
        cin >> i;
        switch (i)
        {
        case 1: cout << "Mystr:\t" << str.getString() << endl; break;
        case 2:
            start =0;
            len=0;

            cout<<"input start and length:";
            cin >>start>>len;
            if(len!=0)
            {
                str.subString(sub, start, len);
                cout << "substr:\t" << sub <<endl;
            }
            break;
        case 3: cout << "length:\t" << str.length()<<endl; break;
        case 4:
            cout<< "input any string: ";
            cin.getline(read,100);
            cin.getline(read,100);
            str.setString(read);
            break;
        case 5:
            cout <<endl <<"Advance test:" << endl;
            //yyymmdd or yyyymmdd
            //20180711
            //-1401201
            //20180931
            cout<<"input digit string: ";
            cin >> read;
            tryParseTime(read);
            break;
        }
    }while(i!=0);
    return 0;
}

