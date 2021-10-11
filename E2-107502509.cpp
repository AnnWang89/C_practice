/*****************************************
* Example 2
* Name: 王君安
* Student Number: 107502509
* Course: 2018-CE1003-A
******************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    for(int number=1;number<10;number++)//the first loop,every time number +1 until number>=10 then stop the loop
   {
       for(int counter=1;counter<10;counter++)//the net loop,every time number +1 until number>=10 then stop the loop
       {
           cout <<number<<"*"<<counter<<"="<<number*counter;
           cout <<"\t";//let every number in the same line
       }
       cout <<  endl;
   }


    return 0;
}
