#include <iostream>
using namespace std;


class student
{
    int rollno, sub1, sub2, sub3;
    string name, grade;

public:
    void data(void);
    string c_grade(void);
};

void student::data(void)
{
    cout << "Enter Roll No:\n";
    cin >> rollno;
    cout << "Enter name of the student\n";
    cin >> name;
    cout << "Enter mark of first subject\n";
    cin >> sub1;
    cout << "Enter mark of second subject\n";
    cin >> sub2;
    cout << "Enter mark of third subject\n";
    cin >> sub3;

}

string student::c_grade(void)
{
    string c_grade;
    int avg = (sub1 + sub2 + sub3) / 3;
    cout << "Grade: ";
    if (avg >= 91)
        grade = "A+";
    else if (avg >= 81)
        grade = "A";
    else if (avg >= 71)
        grade = "B+";
    else if (avg >= 61)
        grade = "C+";
    else if (avg >= 51)
        grade = "C";
    else if (avg >= 41)
        grade = "D+";
    else
        grade = "D";
    cout << grade << endl;
    return c_grade;
}

int main()
{
    string choice;
    student s;
    while (true)
    {

        s.data();
        s.c_grade();
        cout << "Do you want to continue(y/n): ";
        cin >> choice;
        if (choice == "y")
            continue;
        else
            cout << "Exit";
        return false;
    }
}

