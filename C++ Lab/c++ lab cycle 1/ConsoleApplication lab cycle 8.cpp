#include<iostream>
using namespace std;

class complex_no
{
    int real, imag;
public:
    complex_no()
    {
        real = 0;
        imag = 0;
    }
    complex_no(int i)
    {
        real = i;
        imag = i;
    }
    complex_no(int a, int b)
    {
        real = a;
        imag = b;
    }

    void add(complex_no c1, complex_no c2)
    {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }
    void display()
    {
        cout << real << "+" << imag << "i";
    }
};

int main()
{
    int real, imag;
    cout << "\n Enter one value for real and imaginary parts of the first complex number : ";
    cin >> real;
    complex_no c1(real);

    cout << "\n First complex number is given by- ";
    c1.display();

    cout << "\n\n Enter different values for real and imaginary parts of the second complex number : ";
    cin >> real >> imag;
    complex_no c2(real, imag);

    cout << "\n Second complex number is given by - ";
    c2.display();

    complex_no c3;
    cout << "\n\n Initially third complex number is - ";
    c3.display();

    c3.add(c1, c2);

    cout << "\n\n Third complex number is given by - ";
    c3.display();

    cout << "\n";

    return 0;
}