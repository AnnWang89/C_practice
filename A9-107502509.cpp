/*****************************************
* Assignment 9
* Name: ¤ý§g¦w
* Student Number: 107502509
* Course: 2018-CE1003-A
******************************************/
#include <iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
string rectangleornot(int,int,int,int);//a function to know which kind of figure it is
int big(int,int,int,int);//a function to know which is the bigger number
int main()
{
    ifstream infile("A9_in.txt", ios::in);//read the file
    if(!infile){
        cout <<"File could not be opened";//judge if the file can be opened
        exit(1);
    }
    ofstream outfile("A9_out.txt", ios::out);//the result will appear in the file
    if(!outfile){
        cout <<"File could not be opened";//judge if the file can be opened
        exit(1);
    }
    int times=0;//how many cases are there
    int a=0,b=0,c=0,d=0;//4sides of the figure
    string text="";//banana,square,rectangle,or quadrangle
    infile >>times;//read the cases number
    for(int i=0;i<times;i++){
        infile >> a >> b >> c >> d;//read 4sides
        outfile << rectangleornot(a,b,c,d) << endl;//call the function
    }
    return 0;
}
string rectangleornot(int a,int b,int c,int d)
{
    string answer="";
    if(2*big(a,b,c,d)>=a+b+c+d)//the biggest side bigger than the sum of other sides
        answer="banana";
    else if(a==b&&b==c&&c==d)
        answer="square";
    else if(a==c&&b==d)
        answer="rectangle";
    else
        answer="quadrangle";
    return answer;
}
int big(int a,int b,int c,int d)//fide the biggest side
{
    int maxmax=0;
    if(a>maxmax)
        maxmax=a;
    if(b>maxmax)
        maxmax=b;
    if(c>maxmax)
        maxmax=c;
    if(d>maxmax)
        maxmax=d;
    return maxmax;
}
