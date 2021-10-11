/*****************************************
* Exercise 8
* Name: ¤ý§g¦w
* Student Number: 107502509
* Course: 2018-CE1003-A
******************************************/
#include <iostream>

using namespace std;


void printArray(int arr[], int lenght)
{
    for(int i=0; i<lenght; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void append(int arr[], int length, int data)
{
    for(int i=0;i<(length-1);i++)
        arr[i]=arr[i+1];//move front the number
    arr[length-1]=data;
    printArray(arr, length);
}
void append(int arr[], int length, int data, int index)
{
    for(int i=length;i>index;i--)
        arr[i]=arr[i-1];//move back the number
    arr[index]=data;
    printArray(arr, length);
}
int main()
{
    int len = 5;
    int arry[len] = {1,3,5,7,9};
    printArray(arry, len);
    while(true)
    {
        int input,pos;
        cout << "input, position: ";
        cin >> input >> pos;
        if (input == -1)
            break;
        if (pos < 0 || pos >= len)
            append(arry, len, input);
        else
            append(arry, len, input, pos);
        cout << "===================================" <<endl;
    }
    return 0;
}

