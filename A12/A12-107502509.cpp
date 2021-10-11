/***************************
* Assignment 12
* Name: ¤ý§g¦w
* Student Number: 107502509
* Course: 2018-CE1003-A
***************************/
#include <iostream>
#include "A12-107502509class.h"
#include <string>
using namespace std;

int main()
{
    string namehero,nameenemy,Weapon,DropItem;
    unsigned int Hp,Atk,WeaponAtk;
    int choose;
    cout << "Please Create a hero" <<endl;
    cout << "Name: ";
    cin >> namehero;
    cout <<"Hp: ";
    cin >> Hp;
    cout <<"Atk: ";
    cin >> Atk;
    cout << namehero << "'s Weapon: ";
    cin >> Weapon;
    cout << namehero << "'s Weapon Atk: ";
    cin >> WeaponAtk;
    cout <<"\n";
    player hero(namehero,Hp,Atk,Weapon,WeaponAtk);//call the class
    cout << "Please Create a enemy:" <<endl;
    cout <<"Name: ";
    cin >>nameenemy;
    cout <<"Hp: ";
    cin >> Hp;
    cout <<"Atk: ";
    cin >> Atk;
    cout << "DropItem: ";
    cin >> DropItem;
    cout << "==========\n\n";
    enemy enemy(nameenemy,Hp,Atk,DropItem);
    cout << "A Wild "<< enemy.namename() <<" appeared!"<<endl;
    while(1){//let it keep running
    hero.fight();//call the class
    hero.hphowmuch();//call the class
    enemy.hphowmuch();//call the class
    cout <<"1.Attack 2.Do nothing"<<endl;
    cin >> choose;//in put the choice
    switch(choose)
    {
    case 1:
        cout <<hero.namename()<<" use "<<hero.weap()<<" and hurt "<<enemy.namename()<<" "<<hero.hurtpoints()<<" points.\n";
        enemy.hurt(hero.hurtpoints());//hero attack enemy
        break;
    case 2:
        cout <<hero.namename()<<" is doing nothing.\n";//hero do nothing
        break;
    }
    if(enemy.hphp()<=0)//enemy died
    {
        hero.win();
        cout <<enemy.namename()<<" dropped item \""<< enemy.weap()<<"\" left on the ground."<<endl;
        cout <<"Want another adventure?"<<endl;
        cout <<"1. Yes 2. No"<<endl;
        cin >> choose;
        if(choose==2)
           break;//game over
        if(choose==1)
        {
             enemy.hphp(Hp);
             cout << "\nA Wild "<< enemy.namename() <<" appeared!"<<endl;
             continue;//back to while top
        }
    }
    cout <<enemy.namename()<<" hurt "<<hero.namename()<<" "<<enemy.hurtpoints()<<" points.\n";
        hero.hurt(enemy.hurtpoints());//enemy hurt hero
    if(hero.hphp()<=0)//hero died
    {
        enemy.win();
        cout <<hero.namename()<<"'s weapon \""<< hero.weap() <<"\" left on the ground."<< endl;
        break;
    }
    }
    cout <<"Game Over"<<endl;

    return 0;
}
