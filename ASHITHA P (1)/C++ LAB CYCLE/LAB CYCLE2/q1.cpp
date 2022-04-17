#include<iostream>
#include<cmath>
using namespace std;
class Vector  
{float v1,v2,v3;
float magnitude;
public:
Vector()
{
}
Vector(float x,float y,float z)
{v1=x;
v2=y;
v3=z;
magnitude=sqrt((x*x)+(y*y)+(z*z));
}

void display();
int operator==(Vector &);
int operator!=(Vector &);
int operator<(Vector &);
int operator<=(Vector &);
int operator>(Vector &);
int operator>=(Vector &);

};
int Vector:: operator==(Vector &V)
{if(magnitude==V.magnitude)
    {return 1;
    }
else
    {return 0;
    }
}
int Vector::operator!=(Vector &V)
{
if(magnitude!=V.magnitude)
   {return 1;
   }
else
   {return 0;}
}

int Vector::operator<=(Vector &V)
{
if(magnitude<=V.magnitude)
   {return 1;}
else
   {return 0;}

}
int Vector::operator<(Vector &V)
{
if(magnitude<V.magnitude)
   {return 1;}
else
   {return 0;}

}
int Vector::operator>(Vector &V)
{
if(magnitude>V.magnitude)
   {return 1;
   }
else
   {return 0;
   }

}
int Vector::operator>=(Vector &V)
{
if(magnitude>=V.magnitude)
   {return 1;
   }
else
   {return 0;
   }
}
void Vector:: display(void)
{
if(v2>=0 && v3>=0)
cout<<v1<<"i+"<<v2<<"j+"<<v3<<"k"<<endl;
else if(v2>=0 && v3<0)
cout<<v1<<"i+"<<v2<<"j"<<v3<<"k"<<endl;
else if (v2<0 && v3>=0)
cout<<v1<<"i"<<v2<<"j+"<<v3<<"k"<<endl; 
else if (v2<0 && v3<0)
cout<<v1<<"i"<<v2<<"j"<<v3<<"k"<<endl; 
cout<<"Magnitude="<<magnitude;
cout<<endl;

}
int main()
{
int s;int n;char ans;
float a,b,c;
cout<<"Enter i,j and k terms for Vector 1:\n";
cin>>a>>b>>c;
Vector V1(a,b,c);
cout<<"Enter i,j and k terms for Vector 2:\n";
cin>>a>>b>>c;
Vector V2(a,b,c);
cout<<" Displaying vector 1 :"<<endl;
    V1.display();
cout<<" Displaying vector 2 :"<<endl;
    V2.display();
do 


{cout<<"Do you want to continue?(y/n)\n";
cin>>ans;
cout<<"Select any operations:\n";
cout<<"_________________________________________________*_____________________________________________________________________\n";
cout<<"1.Check the vectors are equal\n";

cout<<"2.Check it is less than another vector\n";
cout<<"3.Check it is less than or equal toanother vector\n";
cout<<"4.Check it is greater than another vector\n";
cout<<"5.Check it is greater than or equal to another vector\n";
cout<<"6.Exit\n";
cout<<"_______________________________________________*________________________________________________________________________\n";
if(ans=='y')
{cout<<"Enter an option:\n";
    cin>>n;
switch(n)
{
case 1:
if(V1==V2)
     {cout<<"Vector 1 is equal to (==)Vector 2\n ";
     }
else
    {cout<<"Vector 1 is not equal to (==) vector 2\n";
     }
     cout<<endl;
break;
case 2:
if(V1!=V2)
     {cout<<"Vector 1 is not equal to (!=) Vector 2\n";
     }
else
    {cout<<"Vector 1 is  equal to (!=) vector 2\n";
    }
    break;
     cout<<endl;
case 3:if(V1<V2)
    {cout<<"Vector 1 is less than (<) vector 2\n";
    }
    else
    {cout<<"Vector 2 is lesser than (<) vector 1\n";
    }
    break;
     cout<<endl;
case 4:if(V1<=V2)
{cout<<"Vector 1 is less than or equal to (<=) Vector 2\n";
     }
else
    {cout<<"Vector 2 is less than or equal to (<=) vector 1\n";
    }
break;
 cout<<endl;
case 5:if(V1>V2)
{cout<<"Vector 1 is greater than (>) Vector 2\n";
     }
else
    {cout<<"Vector 2 is greater than (>) vector 1\n";
    }
break;
 cout<<endl;
case 6:if(V1>=V2)
{cout<<"Vector 1 is greater than or equal to (>=) Vector 2\n";
     }
else
    {cout<<"Vector 2 is greater than or equal to (>=) vector 1\n";
    }
break;
 cout<<endl;
 case 7:
 cout<<"You have exited successfully!\n";
 break;
default:cout<<"Wrong option!!\n";


}
}
else if(ans=='n')
cout<<"Press 6\n";
}while(n!=6);

return 0;
}
	

