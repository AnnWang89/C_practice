#include"A12-107502509class.h"
#include <iostream>
#include <string>
using namespace std;

player::player(string n,unsigned int H,unsigned int A,string W,unsigned int WA)
{
    name=n;//put every variable in the class
    Hp=H;
    Atk=A;
    Weapon=W;
    WeaponAtk=WA;
}
void player::fight()//fight or not
{
    cout << "What will "<< name <<" do?"<<endl;
}
void player::hphowmuch()//show the HP
{
     cout <<name<<"'s Hp: "<< Hp <<endl;
}
string player::namename()
{
    return name;
}
string player::weap()
{
    return Weapon;
}
int player::hurtpoints()
{
    return Atk+WeaponAtk;
}
void player::hurt(int a)
{
    Hp=Hp-a;
}
int player::hphp()
{
    return Hp;
}
void player::hphp(int a)
{
    Hp=a;
}
void player::win()
{
    cout <<name<<" win!"<<endl;
}


enemy::enemy(string n,unsigned int H,unsigned int A,string W)
{
    name=n;//put every variable in the class
    Hp=H;
    Atk=A;
    Weapon=W;
    WeaponAtk=0;
}
void enemy::fight()
{

    cout << "What will "<< name <<" do?"<<endl;
}
void enemy::hphowmuch()
{
     cout <<name<<"'s Hp: "<< Hp <<endl;
}
string enemy::namename()
{
    return name;
}
string enemy::weap()
{
    return Weapon;
}
int enemy::hurtpoints()
{
    return Atk+WeaponAtk;
}
void enemy::hurt(int a)
{
    Hp=Hp-a;
}
int enemy::hphp()
{
    return Hp;
}
void enemy::hphp(int a)
{
    Hp=a;
}
void enemy::win()
{
    cout <<name<<" win!"<<endl;
}
