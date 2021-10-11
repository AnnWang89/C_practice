/*****************************************
* Exercise 9
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
    void determinant();//calculate the determinant
    void diagonal();//only want diagonal,others are 0
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
void Matrix::determinant(){//calculate determinant a+b+c-d-e-f
    int a=1,b=1,c=1,d=1,e=1,f=1;
    for(int i=0;i<=2;i++){
        a=a*number[i][i];
    }
    b=number[0][1]*number[1][2]*number[2][0];
    c=number[1][0]*number[2][1]*number[0][2];
    for(int i=0;i<=2;i++){
        d=d*number[i][2-i];//number[0][2],number[1][1],number[2][0]
    }
    e=number[0][1]*number[1][0]*number[2][2];
    f=number[0][0]*number[2][1]*number[1][2];
    cout << a+b+c-d-e-f<<endl;
}
void Matrix::diagonal(){
    int a[3]={number[0][0],number[1][1],number[2][2]};//copy the diagonal to a
    int b[3][3]={};//use a new array
    for(int i=0;i<3;i++){
        b[i][i]=a[i];//put diagonal in it
    }
    for(int i=0;i<3;i++){//show the Matrix
        for(int j=0;j<3;j++){
           cout << b[i][j] <<" ";
        }
        cout << endl;
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
            M.determinant();//call the function
        else if(func==3)
            M.diagonal();//call the function
        else if(func==-1)//end the loop
            break;
    }
    return 0;
}
