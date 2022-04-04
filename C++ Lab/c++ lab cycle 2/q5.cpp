#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;
public:
    student() {}
    student(int a)
    {
        roll_number = a;
    }
    void put_number(void)
    {
        cout << "Roll number : " << roll_number << endl;
    }
};

class test : public student
{
protected:
    float part1, part2;
public:
    test() {}
    test(int a, float t1, float t2) : student(a)
    {
        part1 = t1;
        part2 = t2;
    }
    void put_marks(void)
    {
        cout << "Mark obtained: " << endl
            << "Part1 : " << part1 << endl
            << "Part2 : " << part2 << endl;
    }

};

class sports
{
protected:
    float score;
public:
    sports() {}
    sports(float s)
    {
        score = s;
    }
    void put_score(void)
    {
        cout << "Sports wt : " << score << "\n\n";
    }
};

class result : public test, public sports
{
    float total;
public:
    result() {}
    result(int a, float t1, float t2, float s) : sports(s), test(a, t1, t2)
    {
        total = part1 + part2 + score;
    }
    void display(void);
};

void result::display(void)
{
    put_number();
    put_marks();
    put_score();

    cout << "Total score : " << total << endl;
}

int main()
{
    int rllno;
    float t1, t2, s;
    cout << "Welcome\n\n";
    cout << "Enter the following details.\n\n";
    cout << "Roll number : ";
    cin >> rllno;
    cout << "Enter the mark in part1 and part2 : ";
    cin >> t1 >> t2;
    cout << "Enter the score obtained in sports : ";
    cin >> s;
    result student_1(rllno, t1, t2, s);
    student_1.display();

    return 0;
}
