#ifndef GAME_H
#define GAME_H
#include <string>
#include <iostream>
using namespace std;

class player//class for player
{
public:
    player(string,unsigned int,unsigned int,string,unsigned int);
    void fight();
    void hphowmuch();
    void hurt(int);
    void win();
    int hphp();
    void hphp(int);
    string namename();
    string weap();
    int hurtpoints();
private:
    string name;
    unsigned int Hp;
    unsigned int Atk;
    string Weapon;
    unsigned int WeaponAtk;
};

class enemy//class for enemy
{
public:
    enemy(string,unsigned int,unsigned int,string);
    void fight();
    void hphowmuch();
    void hurt(int);
    void win();
    int hphp();
    void hphp(int);
    string namename();
    string weap();
    int hurtpoints();
private:
    string name;
    unsigned int Hp;
    unsigned int Atk;
    string Weapon;
    unsigned int WeaponAtk;
};

#endif

