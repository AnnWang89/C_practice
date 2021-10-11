/*****************************************
* Assignment 11
* Name: ¤ý§g¦w
* Student Number: 107502509
* Course: 2018-CE1003-A
******************************************/
#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring
{
public:
    Mystring(const char*);
    void setString(const char*);
    const char* getString();
    void subString(char*, int, int);
    int length();
private:
    const char *str;
};

void tryParseTime(const char*);

#endif
