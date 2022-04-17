#include<iostream>
using namespace std;


class Shape
{
protected:
    float area;
public:
    virtual void createarea() {};
    virtual void show() {};
};

class Circle : public Shape
{
    float r;
public:
    void createarea()
    {
        cout << "Enter Radius of the circle:";
        cin >> r;
        area = 3.14 * r * r;
    }
    void show()
    {
        cout << "Circle Area = " << area << "\n";
    }
};

class Square : public Shape
{
    float a;
public:
    void createarea()
    {
        cout << "Enter side of square:";
        cin >> a;
        area = a * a;
    }
    void show()
    {
        cout << "Square Area = " << area << "\n";
    }
};

class Rectangle : public Shape
{
    float l, b;
public:
    void createarea()
    {
        cout << "\nRectangle\n";
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter breadth: ";
        cin >> b;
        area = l * b;
    }
    void show()
    {
        cout << "Rectangle Area = " << area << "\n";
    }
};

class Ellipse : public Shape
{
    float MajA, MinA;
public:
    void createarea()
    {
        cout << "\nEllipse\n";
        cout << "Enter Major Axis length: ";
        cin >> MajA;
        cout << "Enter Minor Axis length: ";
        cin >> MinA;
        area = 3.14 * MajA * MinA;
    }
    void show()
    {
        cout << "Ellipse Area = " << area << "\n";
    }
};

int main()
{

    cout << "Choose an option : \n";
    cout << "1 - Circle\n";
    cout << "2 - Square\n";
    cout << "3 - Ellipse\n";
    cout << "4 - Rectangle\n";
    cout << "5 - Exit\n";
    Shape* sptr;
    int choice = 0;
    while (choice != 5)
    {
        cout << "\n\nSelect an option : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            sptr = new Circle;
            sptr->createarea();
            sptr->show();
            break;
        }
        case 2:
        {
            sptr = new Square;
            sptr->createarea();
            sptr->show();
            break;
        }
        case 3:
        {
            sptr = new Ellipse;
            sptr->createarea();
            sptr->show();
            break;
        }
        case 4:
        {
            sptr = new Rectangle;
            sptr->createarea();
            sptr->show();
            break;
        }
        case 5:
        {
            cout << "   \n";
            break;
        }
        default:
            cout << "Invalid Option Try Again!!!\n";
            break;
        }
    }
}


