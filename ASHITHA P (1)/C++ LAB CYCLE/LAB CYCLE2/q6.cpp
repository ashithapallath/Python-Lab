#include <iostream>
#include <cstring>
using namespace std;

class student
{
    string Name;
    int Rno;
public:
    void get_student_details(int r, string n)
    {
        Rno = r;
        Name = n;
    }
    void show_student_details(void)
    {
        cout << Rno << "\t" << Name << "\t";
    }
};

class test : virtual public student
{
protected:
    float S1, S2, S3;
public:
    void get_test_score(float a, float b, float c)
    {
        S1 = a; S2 = b; S3 = c;
    }
    void show_test_score(void)
    {
        cout << S1 << "\t" << S2 << "\t" << S3 << "\t";
    }
};

class sports : virtual public student
{
protected:
    float E1, E2;
public:
    void get_sport_score(float e1, float e2)
    {
        E1 = e1; E2 = e2;
    }
    void show_sport_score(void)
    {
        cout << E1 << "\t" << E2 << "\t";
    }
};

class Result : public test, public sports
{
public:
    void getdatas(void);
    void show_result(void);
};

void Result::getdatas(void)
{
    string Nm;
    int Rno;
    float s1, s2, s3, e1, e2;
    cout << "\nFill in the details";
    cout << "\nName      : "; cin >> Nm;
    cout << "\nRoll NO   : "; cin >> Rno;
    cout << "\nMarks in ";
    cout << "\nSubject 1 :"; cin >> s1;
    cout << "\nSubject 2 :"; cin >> s2;
    cout << "\nSubject 3 :"; cin >> s3;
    cout << "\nSports 1  :"; cin >> e1;
    cout << "\nSports 2  :"; cin >> e2;
    get_student_details(Rno, Nm);
    get_test_score(s1, s2, s3);
    get_sport_score(e1, e2);
}

void Result::show_result(void)
{
    float total = S1 + S2 + S3 + E1 + E2;
    float avg = total / 5;
    show_student_details();
    show_test_score();
    show_sport_score();
    cout << avg << "\n";
}
int main()
{
    Result* Rlist;
    int Snos;
    //Menu
    cout << "1. Add student details\n";
    cout << "2. Get the results\n";
    cout << "3. Exit\n";
    int choice = 0;
    while (choice != 3)
    {
        cout << "Pick an option :"; cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "Enter the number of students : ";
            cin >> Snos;
            Rlist = new Result[Snos];
            for (int i = 0; i < Snos; i++)
            {
                Rlist[i].getdatas();
            }
            break;
        }
        case 2:
        {
            cout << "Here are the Final Results \n\n";
            cout << "Rno\tName\tSub1\tSub2\tSub3\tSport1\tSport2 \t Avg\n\n";
            for (int i = 0; i < Snos; i++)
            {
                Rlist[i].show_result();
            }
            break;
        }
        case 3:
        {
            cout << "Thanks for using\n";
            break;
        }
        default:
            cout << "Invalid option\n";
            break;
        }
    }


    return 0;
}


