#include <iostream>
using namespace std;


class student
{
    string name;
    int roll_no;
    float mark1, mark2, mark3;
    char grade;

public:
    void data_manipulation(void);
    char calculate_grade(void);
    void display();
};

void stud::data_manipulation(void)
{
    cout << "Enter the Name :";
    cin >> name;
    cout << "Enter the Roll number:";
    cin >> roll_no;
    cout << "Enter the marks of 3 subjects:";
    cin >> mark1 >> mark2 >> mark3;

}

char student::calculate_grade(void)
{
    float totalMark;
    totalMark = (mark1 + mark2 + mark3) / 3;
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
    return grade;
}
void student::display()
{
    cout << "Student Name : " << name << endl;
    cout << "Roll number : " << roll_no << endl;
    cout << "Mark of subject 1: " << mark1 << "\nMark of subject 2: " << mark2 << "\nMark of subject 3: " << mark3 << endl;
    cout << "Total Grade: " << grade;
}
int main()
{
   
        student s;
        s.data_manipulation();
        s.calculate_grade();
        s.display();

        cout << "do you want to continue(y/n): ";
        cin >> tf;
        if (tf == "y" or tf == "Y")
            continue;
        else
            cout << "exiting...";
        return false;
    
    
}
