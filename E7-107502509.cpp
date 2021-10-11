/*****************************************
* Exercise 7
* Name: ¤ý§g¦w
* Student Number: 107502509
* Course: 2018-CE1003-A
******************************************/
#include <iostream>

using namespace std;

int main()
{
    int times=0;
    int lon=0;//calculate the character number
    char a;//to distinguish capital letter from lower letter
    string sentence="";
    cin >> times;
    for(int i=0;i<times;i++)//in put the times user want
    {
        getline(cin, sentence);
        getline(cin, sentence);//input the sentence
        lon=sentence.length();//the sentence length
        for(int j=0;j<lon;j++)
        {
            a=sentence[j];
            if(a>=65 && a<=90 )//capital letter to lower letter
                sentence[j]=a+32;
            if(a>=97 && a<=122 )
                sentence[j]=a-32;//lower letter to capital letter
        }
        cout << sentence ;
    }

    return 0;
}
