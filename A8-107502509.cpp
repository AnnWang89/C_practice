/*****************************************
* Assignment 8
* Name: 王君安
* Student Number: 107502509
* Course: 2018-CE1003-A
******************************************/
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

string ReverseString(string);

void ReverseInts(int[], int length);
void SWAP(int* a, int* b);

int main()
{
    int casesLen = 0;
    cin >> casesLen;
    for(int caseNum = 0 ; caseNum < casesLen; caseNum++ )
    {
        string feature("");
        cin >>feature;
        if(feature =="sentence")
        {
            string sentence("");
            getline(cin, sentence); //去除多餘的換行get rid of "\n"
            getline(cin, sentence);
            cout << ReverseString(sentence)<<endl;
        }
        if(feature =="numbers")
        {
            int num = 0;
            cin >> num;
            int nums[num] = {};
            for(int i = 0 ; i < num ; i++ )
            {
                cin >> nums[i];
            }
            ReverseInts(nums,num);
            for(int i=0;i<num;i++)
            {
                cout <<nums[i]<<" ";
            }
        }
    }
    cout << endl;
    return 0;
}
string ReverseString( string sentence )
{
    int a=sentence.length();//the length of the sentence
    char t=0;
    for(int i=0;i<floor(a/2);i++)
    {
         t=sentence[i];
         sentence[i]=sentence[a-1-i];//change two words
         sentence[a-1-i]=t;
    }
    return sentence;
//輸入一字串，回傳相反的字串 Input a string and return reversed string

//要實作的地方 Implement your method
}
void ReverseInts( int numbers[], int length )
{
    for(int i=0;i<floor(length/2);i++)
    {

        SWAP(&numbers[i],&numbers[length-1-i]);//call the function SWAP
    }
//輸入一陣列，將陣列數字水平翻轉 Input a integer array and reversed it.

//要實作的地方，且一定要使用 SWAP 函式 Implement your method, and Have to use SWAP function
}
void SWAP(int* a, int* b)
{
    int t=0;
    t=*a;//pointer
    *a=*b;
    *b=t;

//輸入兩指標 對調其指向的數字 Input two pointer, swap numbers which these pointers pointed to.

//要實作的地方 Implement your method
}
