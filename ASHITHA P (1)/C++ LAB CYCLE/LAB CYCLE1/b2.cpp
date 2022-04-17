#include <iostream>
#include<cmath>
using namespace std;
class Area {
public:
	void area(int);
	void area(int, int);
	void area(float, float);
	void area(double);
	void area(double, double);
};
void area(int r) {
	
	cout << "Area of circle is " << 3.14 * r * r;
}
void area(int l, int w) {
	
	cout << "Area of rectangle is " << l * w;
}
void area(float b, float h) {
	
	cout << "Area of a right triangle is " << 0.5 * b * h;
}
void area(double a) {
	
	cout << "Area of a square is " << a * a;

}
void area(double c, double d) {
	
	cout << "Area of a parallellogram is " << c * d;
}
int main()
{
	int r, l, w;
	float b, h;
	double a, c, d;
	int ch;
	string rp;
	while (true)
	{
		cout << "\n ________Area calculation_________";
		cout << "\n 1.Area of a circle  ";
		cout << "\n 2.Area of right triangle  ";
		cout << "\n 3.Area of rectangle  ";
		cout << "\n 4.Area of a square  ";
		cout << "\n 5.Area of a parallelogram  ";
                cout << "\n 6.Exit  ";
		cout << "\n ENTER YOUR CHOICE : ";
		cin >> ch;

		if (ch == 1)

		{
			cout << "\n Enter radius of circle";
			cin >> r;
			area(r);

		}
		else if (ch == 2)
		{
			cout << "\n Enter base and height of triangle  :";
			cin >> b >> h;
			area(b, h);

		}
		else if (ch == 3)
		{
			cout << "\n Enter length and breadth of rectangle  :";
			cin >> l >> w;
			area(l, w);

		}
		else if (ch == 4)
		{
			cout << "\n Enter side length of square  :";
			cin >> a;
			area(a);

		}
		else if (ch == 5)
		{
			cout << "\n Enter length and height of parallellogram  :";
			cin >> c >> d;
			area(c, d);


		}
		cout << "\nDo you want to continue(y/n): ";
		cin >> rp;
		if (rp == "y" or rp == "Y")
			continue;
		else
			return false;
	}

}


