#include <iostream>
using namespace std;

class Time {
 int hours;
 int minutes;
 int seconds;
public:
 void gettime(int h, int m,int s)
 {
  hours = h;minutes = m; seconds = s;
 }
 void puttime(void) {
  cout << hours << " Hours and ";
  cout << minutes << " minutes and ";
  cout << seconds << "seconds " << endl;
 }
 void sum(Time, Time);
};
void Time::sum(Time t1, Time t2) //t1,t2 are objects
{
 minutes = t1.minutes + t2.minutes;
 hours = minutes / 60;
 minutes = minutes % 60;
 seconds = seconds % 60;
 hours = hours + t1.hours + t2.hours;
 seconds = t1.seconds+t2.seconds;
}
int main() 
{
 int a, b, c, d, e, f;
    Time T1, T2, T3;
 cout << "Enter first time to add in hours,minutes and seconds respectively : ";
  cin >> a >> b >> c;
    cout << "Enter second time to add in hours,minutes and seconds respectively : ";
  cin >> d >> e >> f;
 T1.gettime(a,b,c); //get T1
 T2.gettime(d,e,f);//get T2

 T3.sum(T1, T2);
 cout << "T1 = ";
 T1.puttime();
 cout << "T2 = ";
 T2.puttime();
 cout << "T3 = ";
 T3.puttime();

 return 0;
}

