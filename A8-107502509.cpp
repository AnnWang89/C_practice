/*****************************************
* Assignment 8
* Name: ���g�w
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
            getline(cin, sentence); //�h���h�l������get rid of "\n"
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
//��J�@�r��A�^�ǬۤϪ��r�� Input a string and return reversed string

//�n��@���a�� Implement your method
}
void ReverseInts( int numbers[], int length )
{
    for(int i=0;i<floor(length/2);i++)
    {

        SWAP(&numbers[i],&numbers[length-1-i]);//call the function SWAP
    }
//��J�@�}�C�A�N�}�C�Ʀr����½�� Input a integer array and reversed it.

//�n��@���a��A�B�@�w�n�ϥ� SWAP �禡 Implement your method, and Have to use SWAP function
}
void SWAP(int* a, int* b)
{
    int t=0;
    t=*a;//pointer
    *a=*b;
    *b=t;

//��J����� ��ը���V���Ʀr Input two pointer, swap numbers which these pointers pointed to.

//�n��@���a�� Implement your method
}
