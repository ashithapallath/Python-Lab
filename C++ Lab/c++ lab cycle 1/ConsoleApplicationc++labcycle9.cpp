#include<iostream>
using namespace std;
class object
{
	int code;
	static int count;
public:
	void setcode(void)
	{
		code = ++count;
	}
	void showcode(void)
	{
		cout << "object number:" << code << "\n";
	}
	static void showcount(void)
	{
		cout << "count:"<<count << "\n";
	}
};  
int object :: count;
int main()
{
	object o1, o2;
	o1.setcode();
	o2.setcode();
	object::showcount();
	object o3;
	o3.setcode();
	object::showcount();

	o1.showcode();
	o2.showcode();
	o3.showcode();

	return 0;



}



