#include<iostream>
using namespace std;
class Area
{
public:
	void area(int);
	void area(int, int);
	void area(float, float);
	void area(double, double);

};
void area(int r)
{
	cout << "area of a circle is" << 3.14 * r * r;

}
void area(int l, int w)
{
	cout << "area of a rectangle is" << l * w;
}
void area(float b, float h)
{
	cout << "area  of a right traingle is " << 0.5*b*h;
}
void area(double a)
{
	cout << "area of a square is" << a * a;
}
void area(double c, double d)
{
	cout << "area of parallelogram" << c * d;
}
int main()
{
	int r, l, w;
	float b, h;
	double a, c, d;
	int ch;
	{
		cout << "\n 1.area of a circle";
		cout << "\n 2. area of a right traingle";
		cout << "\n 3.area of a rectangle";
		cout << "\n 4.area of a square ";
		cout << "\n 5.area of a parallellogram ";
		cout << "\n  Enter your choice:";
		cin >> ch;

		switch (ch)
		{
		case 1:
		{
			cout << "\n enter radius of circle";
			cin >> r;
			area(r);
			break;
		}
		case 2:
		{
			cout << "\n enter base and height of traingle";
			cin >> b >> h;
			area(b, h);
			break;
		}
		case 3:
		{
			cout << "\n enter length and breadth of a rectangle";
			cin >> l >> w;
			area(l, w);
			break;
		}
		case 4:
		{
			cout << "\n enter side length of square";
			cin >> a;
			area(a);
			break;
		}
		case 5:
		{
			cout << "\n enter length and height of parallellogram";
			cin >> c >> d;
			area(c, d);
			break;
		}
		default:
			cout << "\n enter a valid number";
			break;
		}
		return 0;
	}
}