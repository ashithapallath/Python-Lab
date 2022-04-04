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
{ int n;char ans;      
  
        cout<<"Enter number of objects:";
        
        cin>>n;
	object o[n];
      for(int i=0;i<n;i++)
	{o[i].setcode();
        }
	object::showcount();
	for(int i=0;i<n;i++)
	{

	o[i].showcode();
        
	}
        cout<<"Do you want to add more objects(y/n):\n";
cin>>ans;
if(ans=='y'||ans=='Y')
{cout<<"Enter how many objects want to be created:\n";
cin>>n;

for(int i=0;i<n;i++)
{
o[i].setcode();
}}
object::showcount();
for(int i=0;i<n;i++)
{o[i].showcode();
}
	return 0;

}





