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
{
	Complex A, B, C;
	A.input( 4.1,5.5 );
	B.input( 3.7,2.1 );

	C = sum(A, B);
	cout << "A ="; A.show(A);
	cout << "B ="; B.show(B);
	cout << "C ="; C.show(C);

	return 0;


}


