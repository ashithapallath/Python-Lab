




#include <iostream>
using namespace std;

class complex {
float x, y;
public:
complex() {}
complex(float a) { x = y = a; }
complex(float real, float imag)
{
x = real;y = imag;
}
friend complex sum(complex, complex);
friend void show(complex);
};
complex sum(complex c1, complex c2) {
complex c3;
c3.x = c1.x + c2.x;
c3.y = c1.y + c2.y;
return(c3);
}
void show(complex c) {
if(c.y<0){
cout << c.x << " " << c.y <<"j"<< endl;
}
else{
cout<<c.x<<"+ "<<c.y<<"j"<<endl;
}
}
int main()
{
float a;
float b, c, d;
{
cout << "Enter real part of 1st complex number:";
cin >> a;
cout << "Enter imaginary part of 1st complex number:";
cin >> b;
cout << "Enter real part of 2nd complex number:";
cin >> c;
cout << "Enter imaginary part of 2nd complex number:";
cin >> d;
}
{
complex A(a, b);
complex B(c, d);
complex C;
C = sum(A, B);
cout << "\n______________Answer_______________                    ";

cout << "\nFirst complex number = ";
show(A);
cout << "\nSecond complex number  = ";
show(B);
cout << "\nSum of two complex numbers : = ";
show(C);}
return 0;


}
