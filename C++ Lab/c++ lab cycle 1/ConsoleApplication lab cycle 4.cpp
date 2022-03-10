#include <iostream>
#include<cstring>
using namespace std;
class String
{
	char* name;
	int length;
public:
	String()
	{
		length = 0;
		name = new char[length + 1];
	}
	void input(void);
	void display(void);
	void concatenate(String a, String b);
	int compare(String& t);
	void stlength(void);
};
void String::display(void)
{
	cout << name;
}
void String::concatenate(String a, String b)
{
	length = a.length + b.length;
	delete name;
	name = new char[length + 1];
	strcpy(name, a.name);
	strcat(name, " ");
	strcat(name, b.name);
}
void String::stlength(void)
{
	cout << "The length : " << strlen(name) << endl;
}
int String::compare(String& s)
{
	int m = strlen(s.name);
	int n = length;
	if (m >= n)
		return 1;
	else
		return 0;
}
int main()
{
	String s1, s2, s3;
	s1.input();
	s2.input();
	cout << "The comparison of the string objects ";
	if (s1.compare(s2))
	{
		cout << "\n\t";
		s1.display();
		cout << "Smaller than ";
		s2.display();
		cout << " \n";
	}
	else
	{
		cout << "\n\t";
		s2.display();
		cout << "Smaller than ";
		s1.display();
		cout << " \n";
	}
	cout << "The concatenation of string : ";
	s3.concatenate(s1, s2);
	s3.display();
	cout << "\nThe length of the string objects : \n\tString 1 : ";
	s1.stlength();
	cout << "\tString 2 : ";
	s2.stlength();
	cout << "\tString 2 : ";
	s3.stlength();
	cout << "\tString 2 : ";
	return 0;
}

