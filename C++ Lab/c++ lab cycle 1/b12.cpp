#include<iostream>
using namespace std;
class Complex
{
	float x;
	float y;
public:
	void input(float real, float img)

	{
		x = real; y = img;
	}

	friend Complex sum(Complex, Complex);
	void show(Complex);
};
Complex sum(Complex c1, Complex c2)
{
	Complex c3;
	c3.x = c1.x + c2.x;
	c3.y = c1.y + c2.y;
	return(c3);
}
void Complex::show(Complex c)
{
	cout << c.x << " +j" << c.y << "\n";
}
int main()
{ float a,b,c,d;
	Complex A, B, C;
	cout<<"Enter the realpart of first number:";
	cin>>a;
	cout<<"Enter the imaginarypart of first number:";
	cin>>b;
	cout<<"Enter the realpart of second  number:";
	cin>>c;
	cout<<"Enter the imaginarypart of second number:";
	cin>>d;
	A.input( a,b);
	B.input( c,d);
	
	C = sum(A, B);
	cout << "A ="; A.show(A);
	cout << "B ="; B.show(B);
	cout << "C ="; C.show(C);

	return 0;


}



