#include <iostream>
using namespace std ;

class Time{
    int hours ;
    int minutes ;
    int seconds ;
    public:
        void get_time(void){
            cout << "Enter time in hours: " ;
            cin >> hours ;
            cout << "Enter time in minutes: " ;
            cin >> minutes ;
            cout << "Enter time in seconds: " ;
            cin >> seconds ;
            
        }
        friend Time addtime(Time A , Time B);
        void displaytime(){
            cout << hours << " hours, " << minutes;
            cout << " minutes and " << seconds << " seconds" ; 
            cout << "\n";
        }
};

Time addtime(Time A , Time B){
    Time x ;
    x.seconds = A.seconds + B.seconds ;
    x.minutes = x.seconds / 60 ;
    x.seconds = x.seconds % 60 ;
    x.minutes = x.minutes + A.minutes + B.minutes ;
    x.hours = x.minutes / 60 ;
    x.minutes = x.minutes % 60 ;
    x.hours = x.hours + A.hours + B.hours;
    return x ;
}

int main()
{
    Time A,B,C ;
    cout << "Enter time 1 " << endl ;
    A.get_time();
    cout << "Enter time 2 " << endl ;
    B.get_time();
    C = addtime(A,B);
    
    cout << "\n\nA = " ;
    A.displaytime();
    cout << "B = " ;
    B.displaytime();
    cout << "sum = " ;
    C.displaytime();
    return 0 ;
}


