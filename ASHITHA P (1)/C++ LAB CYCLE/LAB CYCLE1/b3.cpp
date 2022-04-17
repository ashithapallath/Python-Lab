
#include <iostream>
using namespace std;
class bank
{int acc_no;
char cust_name[30];
char acc_type[15];
int balance;
public:
void input_det();
void show_det();
void withdraw();
void deposit();
int search(int);
void print();
};
void bank::input_det()
{char ans;
cout<<"To open a account,Rs 500 is added to your balance:\n";
cout<<"Do you want to continue(y/n)\n";
cin>>ans;
if(ans=='y'||ans=='Y')
{balance=500;
cout<<"Enter details of the customer:\n";
cout<<"Enter account number:\n";
cin>>acc_no;
cout<<"Enter name:\n";
cin>>cust_name;
cout<<"Enter account type:"<<endl;
cin>>acc_type;
}
else
cout<<"You cant open bank account.\nThank you! Visit again!\n";
}
void bank::show_det()
{
cout<<"***********************Displaying details*************************\n";
cout<<"Account number:"<<acc_no<<"\n";
cout<<"Name of the customer:"<<cust_name<<endl;
cout<<"Balance:"<<balance<<endl;
cout<<"Account type:"<<acc_type<<endl;
cout<<"*******************************************************************\n";
}

void bank::withdraw()
{char ans;
cout<<"Do you want to continue(y/n)\n";
cin>>ans;
if(ans=='y'||ans=='Y')
{
 long with_mon;
cout<<"\nEnter amount to withdraw:\n";
cin>>with_mon;
balance-=with_mon;
 if(balance<500)
  {balance+=with_mon;
   cout<<"Sorry!Money can't be withdrawn!!\n-->Minimum balance should be 500\n";
  }
 else
  {
   cout<<" -->"<<with_mon<<"Rs has been withdrawn from your balance.\n";
   cout<<"--->Balance left is:"<<balance<<endl;

  }
}
else
cout<<"Choose any option\n";
}
void bank::deposit()
{char ans;
cout<<"Do you want to continue(y/n)\n";
cin>>ans;
if(ans=='y'||ans=='Y')
{
long dep_mon;
cout<<"\nEnter amount to be deposited onto the account:\n";
cin>>dep_mon;
balance+=dep_mon;
cout<<"-->"<<dep_mon<<"Rs have been deposited onto the account"<<endl;
cout<<"-->Balance left is:"<<balance<<endl;
}
else
cout<<"Choose any other option\n";
}
int bank::search(int num)
{if(acc_no==num)
{show_det();
return 1;
}
return 0;
}
void bank::print()
{cout<<"\t \t ___________________________________________________________"<<endl;
 cout<<"\t \t                Print Statement                            "<<endl;
 cout<<"\t \t ---------------------------------------------------------- "<<endl;
 cout<<"\t \t Account number:"<<acc_no<<"                               "<<endl;
 cout<<"\t \t Name of the account holder:"<<cust_name<<"                "<<endl;
 cout<<"\t \t Account type:"<<acc_type<<"                               "<<endl;
 cout<<"\t \t Balance:"<<balance<<"                                     "<<endl;
 cout<<"\t \t                                                           "<<endl;
 cout<<"\t \t__________________________________________________________"<<endl;
 }
int main()
{int ch;int n;bank b[20];int f=0;
do{menu:
{cout<<"\n**********************Welcome to bank**************************\n";
cout<<"1.Enter details of the customers\n";
cout<<"2.Display details of the customer\n";
cout<<"3.Deposit money to the account\n";
cout<<"4.Withdraw money from the account\n";
cout<<"5.Print Account statement\n";
cout<<"6.Exit\n";
cout<<"Enter your choice:";
cin>>ch;
}
 {switch(ch)
  {
      case 1:cout<<"****************Enter details of the customers*************\n";
      cout<<"-->Enter how many customers whose details should be entered:\n";
      cin>>n;
        for(int i=0;i<n;i++)
        {b[i].input_det();
        b[i].show_det();
        }
        break;
       
     case 2:cout<<"************Displaying details of the customer details********\n";
     cout<<"Enter the account number:\n";
     int num;
     cin>>num;
     for(int i=0;i<n;i++)
     {
     f=b[i].search(num);
      b[i].show_det();
     f=1;
     if(f==1)
     break;
    }
     if(f==0)
     cout<<"Not found!"<<endl;
     break;
     case 3:cout<<"\n*****************Deposit money to account**************\n";
     cout<<"Account number to deposit money:\n";
     cin>>num;
     for(int i=0;i<n;i++)
     {f=b[i].search(num);
     if(f==1)
     {b[i].deposit();
     break;
     }
     }
     if(f==0)
     cout<<"Not found!\n";
     break;
     case 4:cout<<"\n***************Withdraw money from account**************\n";
     cout<<"Enter Account number to withdraw money:\n";
     cin>>num;
     for(int i=0;i<n;i++)
     {f=b[i].search(num);
     if(f==1)
     {b[i].withdraw();
     break;
     }
     }
     if(f==0)
     cout<<"Not found!\n";
     break;    
     case 5:cout<<"\n**************Print statement of customer details*************************\n";
     cout<<"Enter Account number :\n";
     cin>>num;
     for(int i=0;i<n;i++)
     {f=b[i].search(num);
     if(f==1)
     {b[i].print();
     break;
     }
     }
     if(f==0)
     cout<<"Not found!\n";
     break;
     case 6:cout<<"\t\t\t******Visit again******\n";
     cout<<"\t\t\t******Have a nice day*****\n";
     break;
     default:
     cout<<"Wrong option"<<endl;
     goto menu;
     }
     }}while(ch!=6);
     return 0;
}   
