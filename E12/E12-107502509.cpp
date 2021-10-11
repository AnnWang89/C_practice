/*****************************************
* Exercise 12
* Name: ¤ý§g¦w
* Student Number: 107502509
* Course: 2018-CE1003-A
******************************************/
#include <iostream>

using namespace std;
void sortsort(int *const,const int);//a selection sort
void swap(int*const,int *const);//change the number
void fin(int *const,const int,int);//find the number
int main()
{
    int datasize,findfind;
    cout << "Input number of data: ";
    cin >> datasize;//input the data size
    int numbers[datasize]={};
    cout <<"Unsort: ";
    for(int i=0;i<datasize;i++)
        cin >> numbers[i];//input all data
    cout <<"Sorted: ";
    sortsort(numbers,datasize);//selection sort
    for(int i=0;i<datasize;i++)
        cout << numbers[i] <<" ";
    cout <<"\nWant to find: ";//find the number you want
    while(cin >> findfind)
    {
        fin(numbers,datasize,findfind);
        cout <<"Want to find: ";
    }
    return 0;
}
void sortsort(int*const num,int const length)
{
    int small;
    for(int i=0;i<length-1;i++)
    {
        small=i;//suppose that the left is the smallest
        for(int j=i+1;j<length;j++)
        {
            if(num[j]<num[small])
                small=j;//if find something smaller than change the number
        }
        swap(&num[i],&num[small]);//change the number
    }
}
void swap(int*const change,int *const fron)
{
    int hold;
    hold=*change;
    *change=*fron;
    *fron=hold;
}
void fin(int*const num,int length,int findd)
{
    int index=-1;
    for(int i=0;i<length;i++)
    {
        if(findd==num[i])
            index=i;
    }
    if(index==-1)//can't find the number
        cout <<"The target number is not in the array."<<endl;
    else
        cout <<"The target number is at the index "<<index<<endl;
}
