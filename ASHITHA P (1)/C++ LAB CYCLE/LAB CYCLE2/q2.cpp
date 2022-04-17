#include<iostream>
using namespace std;


class complex
{
    float real;
    float imag;
public:
    complex() {}
    complex(float r, float l) {
        real = r; imag = l;
    }
    void show() {
        if (imag >= 0)
        {
            cout << real << " + " << imag << "i\n";
        }
        else { cout << real << " - " << -imag << "i\n"; }
    }
    friend complex operator+(complex, complex);
    friend complex operator*(complex, complex);
};

complex operator+(complex A, complex B)
{
    complex C;
    C.real = A.real + B.real;
    C.imag = A.imag + B.imag;
    return C;
}

complex operator*(complex A, complex B)
{
    complex C;
    C.real = (A.real * B.real) - (A.imag * B.imag);
    C.imag = (A.real * B.imag) + (A.imag * B.real);
    return C;
}

int main()
{
    cout << "Enter real and imaginary parts\n";
    float a1, b1, a2, b2;
    cout << "For A :";
    cin >> a1 >> b1;
    complex A(a1, b1);
    cout << "For B :";
    cin >> a2 >> b2;
    complex B(a2, b2);
    complex C, D;
    C = A + B;
    D = A * B;
    cout << "A = ";
    A.show();
    cout << "B = ";
    B.show();
    cout << "C = A + B = ";
    C.show();
    cout << "D = A * B = ";
    A.show();
    return 0;
}


