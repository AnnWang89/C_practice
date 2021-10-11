/**********************************
* Assignment 7
* Name: 王君安
* Student Number: 107502509
* Course: 2018-CE1003-A
**********************************/
#include <iostream>

using namespace std;
int main()
{
    int container[6][6]={};//Container is 6 X 6 size and initially is empty.
    int workbench[2][2]={};//Workbench is 2 X 2 size and initially is empty.
    int object;//there are 8 Operation,let user choose which one to use
    int X,Y;//Container number(X,Y)
    int M,N;//Workbench number(M,N),but when object=4 is Container number(M,N)
    int a=0,b=0,c=0,d=0;//the variables to let the container gather
    int num=0,num2=0;//num is to calculate how many materials,and mum2 is to calculate if  materials are in the order
while(1)//let the loop never end
{
    cout <<"Robotic arm simulator Program.\n";
    cout <<"Choose your Operation (1~8):\n";
    cout <<"1. Input material to Container.\n";
    cout <<"2. Move material to Workbench from Container.\n";
    cout <<"3. Back material to Container from Workbench.\n";
    cout <<"4. Change the box's position in Container.\n";
    cout <<"5. Output material from Container.\n";
	cout <<"6. Gathering the boxes.\n";
	cout <<"7. Show Container and Workbench inside.\n";
    cout <<"8. Quit the program.\n";

    cin >> object >> X >> Y >> M >> N;//input 5 integral
    X=X-1;//the array is 0~5,but user key in 1~6,we have to change 1 to 0,2 to 1,3 to 2,4 to 3,5 to 4,6 to 5
    Y=Y-1;//because computer is count 0,1,2,3,4,5 but we count 1,2,3,4,5,6
    M=M-1;
    N=N-1;
    num=0,num2=0;//initial num and num2
         for(int i=0;i<=5;i++)//calculate the materials number
        {
            for(int j=0;j<=5;j++)
            {
                if(container[i][j]==1)
                    num=num +1;
            }
        }
        c=0,d=0;
        for(int i=1;i<=num;i++)//we know there are num materials,and we calculate the first num Container's  material's number
        {
            if(container[c][d]==1)
                num2++;
            d++;
            if(d==6)//change a line to calculate
            {
                d=0;
                c++;
            }
        }

    if(object==8)//Show the Container and Workbench,then Quit the program.
    {
        cout <<"Container:\n";
        for(int i=0;i<=5;i++)
        {
            for(int j=0;j<=5;j++)
            {
                if(container[i][j]==1)
                    cout <<"O";//Container is occupied
                else
                    cout <<"X";//Container is empty
            }
            cout <<endl;
        }

        cout <<"\n";
        cout <<"Workbench:\n";
        for(int i=0;i<=1;i++)
        {
             for(int j=0;j<=1;j++)
             {
                  if(workbench[i][j]==1)
                    cout <<"O";//Workbench is occupied
                  else
                    cout <<"X";//Workbench is empty
             }
                cout <<endl;
        }
        break;
    }
    else if(object>8||object<1)//the choice isn't in 1~8
        cout <<"Error Function Call.\n";//input error
    else if((X>=6||X<0)&&(object!=6)&&(object!=7))//ascertain if input numberX is out of the range
        cout <<X+1<<" is larger than Container Vertical size.\n";
    else if((Y>=6||Y<0)&&(object!=6)&&(object!=7))//ascertain if input numberY is out of the range
        cout <<Y+1<<" is larger than Container Horizontal size.\n";
    else
    {
    switch(object)
    {
    case 1://Input material to Container.
        if(container[X][Y]==1)
             cout <<"Container "<<X+1<<" "<<Y+1<<" already be occupied.\n";//check if the container are occupied
        else
        {
            container[X][Y]=1;//put material in the container
            cout <<"Successfully input material to Container "<<X+1<<" "<<Y+1<<"."<<endl;//we -1 in the front,so +1 now
        }
        break;
    case 2://Move material to Workbench from Container.
        if(M>=2||M<0)
             cout <<M+1<<" is larger than Workbench Vertical size.\n";//ascertain if input numberM is out of the range
        else if(N>=2||N<0)
             cout <<N+1<<" is larger than Workbench Horizontal size.\n";//ascertain if input numberN is out of the range
        else if(container[X][Y]==0)
             cout <<"Container "<<X+1<<" "<<Y+1<<"is empty.\n";//check if the container have material
        else if(workbench[M][N]==1)
             cout <<"Workbench "<<M+1<<" "<<N+1<<" already be occupied.\n";//check if the Workbench are occupied
        else
        {
            cout <<"Successfully move material from Container "<<X+1<<" "<<Y+1<<" to Workbench "<<M+1<<" "<<N+1<<"."<<endl;
            container[X][Y]=0;//take out the material in the container
            workbench[M][N]=1;//put material in the workbench
        }
        break;
    case 3://Back material to Container from Workbench.
        if(M>=2||M<0)
             cout <<M+1<<" is larger than Workbench Vertical size.\n";//ascertain if input numberM is out of the range
        else if(N>=2||N<0)
             cout <<N+1<<" is larger than Workbench Horizontal size.\n";//ascertain if input numberN is out of the range
        else if(workbench[M][N]==0)//check if the Workbench have material
             cout <<"Workbench "<<M+1<<" "<<N+1<<" is empty.\n";
        else if(container[X][Y]==1)//check if the container are occupied
             cout <<"Container "<<X+1<<" "<<Y+1<<" already be occupied.\n";
        else
        {
            cout <<"Successfully move material from Workbench "<<M+1<<" "<<N+1<<" to Container "<<X+1<<" "<<Y+1<<"."<<endl;
            container[X][Y]=1;//put material in the container
            workbench[M][N]=0;//take out the material in the workbench
        }
        break;
    case 4://Change the box's position in Container.
        if(M>=6||M<0)//ascertain if input numberM is out of the range
            cout <<M+1<<" is larger than Container Vertical size.\n";
        else if(N>=6||N<0)//ascertain if input numberN is out of the range
            cout <<N+1<<" is larger than Container Horizontal size.\n";
        else if(container[X][Y]==0)//check if the container have material
             cout <<"Container "<<X+1<<" "<<Y+1<<" is empty.\n";
        else if(container[M][N]==1)//check if the container are occupied
             cout <<"Container "<<M+1<<" "<<N+1<<" already be occupied.\n";
        else
         {
             cout <<"Successfully change material from Container "<<X+1<<" "<<Y+1<<" to Container "<<M+1<<" "<<N+1<<"."<<endl;
             container[X][Y]=0;//take out the material in the container
             container[M][N]=1;//put material in the container
         }
        break;
    case 5://Output material from Container.
        if(container[X][Y]=0)
            cout <<"Container "<<X+1<<" "<<Y+1<<" is empty.\n";
        else
        {
            container[X][Y]=0;
            cout <<"Successfully output material from Container "<<X+1<<" "<<Y+1<<endl;
        }
    case 6://Gathering the boxes.
        if(num==0)//check if all the container are empty
            cout <<"Container all is empty.\n";
        else if(num2==num)//check if all the material are in the order
            cout <<"Nothing to do.\n";
        else
        {
            a=0,b=0;//put every material in the first num box
            for(int i=1;i<=num;i++)
            {
                container[a][b]=1;
                b++;
                if(b==6)
                {
                    b=0;
                    a++;
                }
            }
            a=0,b=0;
            for(int i=1;i<=(36-num);i++)//take of other materials in the box
            {
                container[5-a][5-b]=0;
                b++;
                if(b==6)
                {
                    b=0;
                    a++;
                }
            }
            cout <<"Done.\n";
        }
        break;
    case 7://Show Container and Workbench inside.
        cout <<"Container:\n";
        for(int i=0;i<=5;i++)//Show Container
        {
            for(int j=0;j<=5;j++)
            {
                if(container[i][j]==1)
                    cout <<"O";
                else
                    cout <<"X";
            }
            cout <<endl;
        }

        cout <<"\n";
        cout <<"Workbench:\n";
        for(int i=0;i<=1;i++)//Show  Workbench
        {
             for(int j=0;j<=1;j++)
             {
                  if(workbench[i][j]==1)
                    cout <<"O";
                  else
                    cout <<"X";
             }
                cout <<endl;
        }
        break;
    }
    }

}
    return 0;
}
