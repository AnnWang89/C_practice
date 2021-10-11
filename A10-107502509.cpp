/*****************************************
* Assignment 10
* Name: ¤ý§g¦w
* Student Number: 107502509
* Course: 2018-CE1003-A
******************************************/
#include <iostream>

using namespace std;
class Matrix{// set a class
public:
    Matrix();//constructor
    void setvalue(int,int,int);//a function to put number in the matrix
    int sum();//calculate the sum of matrix
    void transpose();//transpose the matrix
    void print();//show the matrix on the screen
private:
    int number[3][3];
};
Matrix::Matrix()//initial the Matrix
{
    int a=1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           number[i][j]=a;
           a++;
        }
    }
}
void Matrix::setvalue(int x,int y,int num){
    number[x][y]=num;//put the number in number[x][y]
}
int Matrix::sum(){//calculate the sum of matrix
    int s=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           s = number[i][j]+s;
        }
    }
    return s;
}
void Matrix::transpose(){
    int number2[3][3]={};//use a new array
    for(int i=0;i<3;i++){//change the number x to y,y to x
        for(int j=0;j<3;j++){
           number2[i][j]=number[j][i];
        }
    }
    for(int i=0;i<3;i++){//show the Matrix
        for(int j=0;j<3;j++){
           number[i][j]=number2[i][j];
        }//put the consequence to the number2[i][j]
    }
}
void Matrix::print(){//show the Matrix
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           cout << number[i][j] <<" ";
        }
        cout << endl;
    }
}
int main()
{
    Matrix M;
    int func=0;//choose what to do
    int x=0,y=0,num=0;
    while(1){
        cout <<"please input operation :"<<endl;
        cin >> func;
        if(func==4)
            M.print();
        else if(func==1){
            cout <<"please input coordinate and value :"<<endl;
            cin >> x >> y >>num;
            M.setvalue(x,y,num);//call the function
        }
        else if(func==2)
           cout << M.sum()<<endl;//call the function
        else if(func==3)
            M.transpose();//call the function
        else if(func==-1)//end the loop
            break;
        else
            break;
    }
    return 0;
}
