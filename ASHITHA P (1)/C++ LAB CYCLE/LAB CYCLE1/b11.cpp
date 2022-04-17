
#include <iostream>
using namespace std;
int temp;
class class_2;
class class_1
{
	int value1;
	int value2;
        
public:
	void indata(int a) { value1 = a;}
	void display(void) { cout << value1 << "\n"; }
	friend void exchange(class_1&, class_2&);
};
class class_2
{
	int value2;
public:
	void indata(int a) { value2 = a; }
	void display(void) { cout << value2 << "\n"; }
	friend void exchange(class_1&, class_2&);



};
void exchange(class_1 &x, class_2 &y)
{
        temp = x.value1;
	x.value1 = y.value2;
	y.value2 = temp;
}
int main()
{int n,m;
	class_1 C1;
	class_2 C2;
        cout<<"Enter the two numbers to swipe:";
        cin>>n;
        cin>>m;
	C1.indata(n);
        
        
        
	C2.indata(m);

	cout << "values before swapping" << "\n";
	C1.display();
	C2.display();
	exchange(C1, C2);

	cout << "values after swapping" << "\n";
	C1.display();
	C2.display();
	return 0;
}




