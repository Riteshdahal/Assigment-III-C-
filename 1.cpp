#include <iostream>
using namespace std;

class Time
{
    int hour;
    int minute;
    int second;

public:
    Time()
    {
        hour = 0;
        minute = 0;
        second = 0;
    }

    Time(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }

    void display()
    {
        cout << hour << ':' << minute << ':' << second << endl;
    }

    void add(Time t1, Time t2)
    {
        cout << t1.hour + t2.hour << ':' << t1.minute + t2.minute << ':' << t1.second + t2.second << endl;
    }
};

int main()
{
    Time t1(2, 2, 2), t2(3, 5, 10);
    t1.display();
    t1.add(t1, t2);
};