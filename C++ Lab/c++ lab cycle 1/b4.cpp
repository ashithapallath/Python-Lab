#include<iostream>
#include<cstring>
using namespace std;
class String
{char *str;
int length;
public:
String()
{length=0;
str=new char[length+1];
}
String(const char *s)
{length=strlen(s);
str=new char[length+1];
strcpy(str,s);
}
void get_string()
{
cin>>str;
}
void display()
{cout<<str<<endl;
}
void concat(String a,String b);
void stlength();
void compare(String s1,String s2);
};
void String:: concat(String a,String b)
{length=a.length+b.length;
delete str;
str=new char[length+1];
strcpy(str,a.str);
strcat(str,b.str);
cout<<endl;
}
void String::stlength()
{cout<<strlen(str);
cout<<endl;
}
void String::compare(String s1,String s2)
{int m,n;
m=strlen(s1.str);
n=strlen(s2.str);
if (m>n)
cout<<s1.str<<" is greater than" <<s2.str<<"\n";
else
cout<<s2.str<<" is greater than "<<s1.str<<"\n";
}
int main()
{int ans;
String Str1,Str2,Str3;

do{cout<<"Operations on Strings:\n";
cout<<"1.String concatenation\n";
cout<<"2.String length comparison\n";
cout<<"3.Comparison of strings\n";
cout<<"4.Exit:\n";
cout<<"Enter choice:\n";
cin>>ans;
switch(ans)
{
case 1:cout<<"1.String concatenation\n";
       cout<<"Enter first string:\n";
       Str1.get_string();
       cout<<"Enter second string:\n";
       Str2.get_string();
       cout<<"First string is:";
       Str1.display();
       cout<<"Second string is:";
       Str2.display();
       Str3.concat(Str1,Str2);
       cout<<"After concatenation:\n";
       Str3.display();
       cout<<endl;
       break;
case 2:cout<<"2.String comparison\n";
       cout<<"Enter first string:\n";
       Str1.get_string();
       cout<<"Enter second string:\n";
       Str2.get_string();
       cout<<"First string is:";
       Str1.display();
       cout<<"Second string is:";
       Str2.display();
      cout<<"\nLength of first string:";
      Str1.stlength();
      cout<<"\nLength of second string:";
      Str2.stlength();
      cout<<"\nLength of concatenated string:";
      Str3.stlength();
      cout<<endl;
      break;
case 3:cout<<"3.Comparison of strings\n";
cout<<"Enter first string:\n";
       Str1.get_string();
       cout<<"Enter second string:\n";
       Str2.get_string();
       cout<<"First string is:";
       Str1.display();
      Str3.compare(Str1,Str2);
      break;
case 4:
      break;
default:cout<<"Invalid operation!!\n";
}
}while(ans!=4);

return 0;
}



