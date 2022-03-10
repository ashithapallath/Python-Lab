#include <iostream>
using namespace std;

class Time
{
    int hours;
    int minutes;
    int seconds;

public:
    void getTime(void);
    void putTime(void);
    void addTime(Time T1, Time T2);
};

void Time::getTime(void)
{
    cout << "Enter time:" << endl;
    cout << "Enter hours";
    cin >> hours;
    cout << "Enter minues";
    cin >> minutes;
    cout << "Enter seconds";
    cin >> seconds;
}

void Time::putTime(void)
{
    cout << endl;
    cout << "Time after addition: ";
    cout << hours << "hours and" << minutes << "minutes and" << seconds << "seconds" << endl;
}

void Time::addTime(Time T1, Time T2)
{

    this->seconds = T1.seconds + T2.seconds;
    this->minutes = T1.minutes + T2.minutes + this->seconds / 60;;
    this->hours = T1.hours + T2.hours + (this->minutes / 60);
    this->minutes %= 60;
    this->seconds %= 60;
}


int main()
{
    Time T1, T2, T3;
    T1.getTime();
    T2.getTime();
    T3.addTime(T1, T2);
    T3.putTime();

    return 0;
}
