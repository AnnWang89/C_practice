/*****************************************
* Assignment 4
* Name: ¤ý§g¦w
* Student Number: 107502509
* Course: 2018-CE1003-A
******************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    for(int layer = 1;layer <= 10;layer ++)//we want to build 10-layer pyramid(++ means +1)
        {
            if(layer == 10)
            {
                for(int star=1;star <= layer+9;star ++)//we only want 19* at this layer
                cout <<"*";
            }

            else
            {
                cout << setw(11-layer) << "*";//appoint the place to out put
            for(int amount = 1;amount <= (2*layer-3);amount ++)//amount is the variable about the amount of "\"
            {
                cout <<"\\";//because \" means Double quote,do not out put on the screen we have to write \ once
            }
            if(layer>1 && layer<10)
                cout <<"*";//from 2~9layer,the right we have to put a *

            }

            cout <<endl;
        }
    return 0;
}
