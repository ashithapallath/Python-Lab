#include <iostream>
using namespace std;
class strng
{
	string s1, s2, sum;
public:
	void put_data(string, string);
	void compare(void);
	void concat(void);
	void len(void);

};

void strng::put_data(string a, string b)
{
	s1 = a, s2 = b;
}

void strng::compare(void)
{
	if (s1 == s2)
		cout << "both are same\n";
	else
		cout << "the strings are different\n";
}

void strng::concat(void)
{
	sum = s1 + s2;
	cout << "after concatination\n" << sum << endl;
}

void strng::len(void)
{
	cout << "lenght of s1: " << s1.size() << endl
		<< "length of s2: " << s2.size();
}

int main()
{
	strng a;
	a.put_data("hello", "world");
	a.compare();
	a.concat();
	a.len();

	return 0;
}

