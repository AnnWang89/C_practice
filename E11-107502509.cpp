/**************
* Exercise 11
* Name: ¤ı§g¦w
* Student Number: 107502509
* Course: 2018-CE1003-A
**************/
#include <iostream>
#include<vector>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
    int range1,range2;
    int num,number=0;
    int searchnumber;
    vector<int>intvec;
    cout <<"What range would like to search?"<<endl;
    cin >> range1 >> range2;
    cout <<"Scanning txt...\n";
    ifstream infile("LotOfNumbers.txt", ios::in);//read the file
    if(!infile){
        cout <<"File could not be opened";//judge if the file can be opened
        exit(1);
    }
    while(infile >> num){//put the number which is in the file in intvec
        intvec.push_back(num);
        if( num <= range2 && num >= range1)//count the number in the range
            number++;
    }
    cout <<"Find "<<number<<endl;
    cout <<"Input number want to search:";
    while(cin >> searchnumber){
        for(int i=0;i<intvec.size();i++)
        {
            if(intvec[i]==searchnumber)
                cout <<i<<" ";//show the searchnumber place
        }
        cout <<endl<<"Input Searched num:";
    }
    return 0;
}
