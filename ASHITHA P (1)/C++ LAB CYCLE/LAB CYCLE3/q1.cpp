#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
class Employee
{protected:
 string name;
 int idno;
 float salary;
 public:
   virtual void input(void)=0;
   virtual void display(void)=0;
};

class developer:public Employee
{int yos;
 
 public:
  void input(void)
  {cout<<"Name           :";
  cin>>name;
  cout<<"ID Number      :";
  cin>>idno;
  cout<<"Monthly salary :";
  cin>>salary;
  cout<<"Service Years  :";
  cin>>yos;
  }
  void display(void)
  {cout<<name<<setw(18)<<right<<idno<<setw(19)<<right<<salary<<setw(20)<<right<<salary*12;
  
  cout<<setw(20)<<right<<yos<<endl;
  }
 };
 
 int main()
 {cout<<"\nPURE VIRTUAL FUNCTION AND ABSTRACT BASE CLASSES\n";
 int n;
 cout<<"\nEnter number of employees: ";
 cin>>n;
 developer d[n];
 Employee* e[n];
 for(int i=0;i<n;i++)
 {cout<<"\nEmployee "<<i+1<<endl;
  e[i]=&d[i];
  e[i]->input();}
cout<<"________________________________________________________________________________________________________________\n";
 cout<<"\t\tINPUT DATA\n";
cout<<"----------------------------------------------------------------------------------------------------------------\n";
 cout<<"Sl.no"<<setw(12)<<right<<"Name"<<setw(20)<<right<<"ID number"<<setw(20)<<right<<"Monthly Salary"<<setw(20)<<right<<"Annual Salary"<<setw(20)<<right<<"Year of Service"<<endl;
cout<<"----------------------------------------------------------------------------------------------------------------\n";
 for(int i=0;i<n;i++)
 {cout<<" "<<i+1<<"."<<setw(15)<<right;
 e[i]->display();

 }
 cout<<"________________________________________________________________________________________________________________\n";
 cout<<endl;
return 0;
 }

