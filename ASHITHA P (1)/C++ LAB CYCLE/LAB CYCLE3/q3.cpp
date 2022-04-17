#include<iostream>
#include<exception>
#include<cstring>
using namespace std;
void function(float i,float j)
{ float x;
 if(j==0)
    throw 1;
 else
   
    x=i/j;
     cout<<"Quotient   : "<<x;
}

int main()
{  int a,b,ch=1;
  cout<<"\n\t MATHEMATIC OPERATIONS\n";
  do{
  cout<<"\nEnter the two numbers to perform the operations.\n";
  cin>>a>>b;
  cout<<"\n----------------------------------------------------\n";
  cout<<"Sum        : "<<a+b<<endl;
  cout<<"Difference : "<<a-b<<endl;
   try
      { 
        function(a,b);
        
      }
    catch(int i)
      {
        cout<<"Division by 0 is not possible.";
      }
       cout<<"\n----------------------------------------------------\n";
      cout<<"\nDo you want to continue ('1'-continue or '0'-exit) : ";
      cin>>ch;
      }while(ch!=0);
 cout<<endl;
 return 0;
 }
