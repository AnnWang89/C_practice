class myTime
{
public:
    myTime();
    myTime(int,int,int);
    void setHour(int);
    void setMinute(int);
    void setSecond(int);
    int getHour();
    int getMinute();
    int getSecond();
    void setTime(int,int,int);
    void printMe();
private:
    int hour;
    int minute;
    int second;

};

