/**********************************
* Exercise 6
* Name: ¤ý§g¦w
* Student Number: 107502509
* Course: 2018-CE1003-A
**********************************/
#include <iostream>

using namespace std;

int main()
{
    int container[6][6]={};
    int workbench[2][2]={};
    int object;
    int X,Y;
    int M,N;
    int br=0;
while(1)
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

    cin >> object >> X >> Y >> M >> N;
    X=X-1;
    Y=Y-1;
    M=M-1;
    N=N-1;
    if(object==8)
        br=1;
    else if(object>8||object<1)
        cout <<"Error Function Call.\n";
    else if(X>=6||X<0)
        cout <<X+1<<"is larger than Container Vertical size.\n";
    else if(Y>=6||Y<0)
        cout <<Y+1<<"is larger than Container Horizontal size.\n";
    else
    {
    switch(object)
    {
    case 1:
        if(container[X][Y]==1)
             cout <<"Container "<<X+1<<" "<<Y+1<<" already be occupied.\n";
        else
        {
            container[X][Y]=1;
            cout <<"Successfully input material to Container "<<X+1<<" "<<Y+1<<"."<<endl;
        }
        break;
    case 2:
        if(M>=2)
             cout <<M+1<<" is larger than Workbench Vertical size.\n";
        else if(N>=2)
             cout <<N+1<<" is larger than Workbench Horizontal size.\n";
        else if(container[X][Y]==0)
             cout <<"Container "<<X+1<<" "<<Y+1<<"is empty.\n";
        else if(workbench[M][N]==1)
             cout <<"Workbench "<<M+1<<" "<<N+1<<" already be occupied.\n";
        else
        {
            cout <<"Successfully move material from Container "<<X<<" "<<Y<<" to Workbench "<<M+1<<" "<<N+1<<"."<<endl;
            container[X][Y]=0;
            workbench[M][N]=1;
        }
        break;
    case 3:
        if(M>=2)
             cout <<M+1<<"is larger than Workbench Vertical size.\n";
        else if(N>=2)
             cout <<N+1<<"is larger than Workbench Horizontal size.\n";
        else if(workbench[M][N]==0)
             cout <<"Workbench "<<M+1<<" "<<N+1<<" is empty.\n";
        else if(container[X][Y]==1)
             cout <<"Container "<<X+1<<" "<<Y+1<<" already be occupied.\n";
        else
        {
            cout <<"Successfully move material from Workbench "<<X<<" "<<Y<<" to Container "<<M+1<<" "<<N+1<<"."<<endl;
            container[X][Y]=1;
            workbench[M][N]=0;
        }
        break;
    case 4:
        if(M>=6||M<0)
            cout <<M+1<<" is larger than Container Vertical size.\n";
        else if(N>=6||N<0)
            cout <<N+1<<" is larger than Container Horizontal size.\n";
        else if(container[X][Y]==0)
             cout <<"Container "<<X+1<<" "<<Y+1<<" is empty.\n";
        else if(container[M][N]==1)
             cout <<"Container "<<M+1<<" "<<N+1<<" already be occupied.\n";
        else
         {
             cout <<"Successfully change material from Container "<<X<<" "<<Y<<" to Container "<<M+1<<" "<<N+1<<"."<<endl;
             container[X][Y]=0;
             container[M][N]=1;
         }
        break;
    case 5:
        if(container[X][Y]=0)
            cout <<"Container "<<X+1<<" "<<Y+1<<"is empty.\n";
        else
        {
            container[X][Y]=0;
            cout <<"Successfully output material from Container "<<X+1<<" "<<Y+1<<endl;
        }
    case 6:
        break;
    case 7:
        break;
    case 8:
        break;

    }
    }

    cout <<"Container:\n";
    for(int i=0;i<=5;i++)
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

    cout <<"\n\n";
    cout <<"Workbench:\n";
    for(int i=0;i<=1;i++)
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
    if(br==1)
        break;

}
    return 0;
}
