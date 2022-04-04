#include<iostream>
using namespace std;
class matrix
{
 int **m;
 int d1,d2;
 public:
   matrix(){};
  matrix(int x,int y);
  void input(int &i,int &j,int valuer=0)
   {
  m[i][j]=valuer;
    }
  int get(int ,int );
  void matrix_add(matrix &, matrix &);
  void matrix_mult(matrix &, matrix &);
  void matrix_transpose(matrix &);
  int matrix_trace(int );
  ~matrix()
  {
    for(int i=0;i<d1;i++)
    {delete m[i];}
    delete m;
   cout<<"\n\nMemory has been released!\n"<<endl;
  }
 };
  matrix::matrix(int x,int y)
 {
  d1=x;
  d2=y;
  m=new int *[d1];
  for(int i=0;i<d1;i++)
    {m[i]=new int [d2];}
 }
 int matrix::get(int i,int j)
 {
  return(m[i][j]);
 }
 void matrix:: matrix_add(matrix &a,matrix &b)
 {
  for(int i=0;i<d1;i++)
      { for(int j=0;j<d2;j++)
         {
          m[i][j]=a.m[i][j]+b.m[i][j];
          cout<<m[i][j]<<"  ";
         }
         cout<<endl;
      }
  }  
  void matrix::matrix_mult(matrix &a,matrix &b)
  {
 
  int i,j,k;
   for(i=0;i<a.d1;i++)
   {
    for(j=0;j<b.d2;j++)
    {
     for(k=0;k<b.d1;k++)
     {
     m[i][j]=m[i][j]+a.m[i][k]*b.m[k][j];
     }
     cout<<m[i][j]<<"  ";
    }
    cout<<endl;
   }
   }
  void matrix::matrix_transpose(matrix &a)
  {
   for(int i=0;i<d1;i++)
   {
    for(int j=0;j<d2;j++)
    {
     int v=a.m[j][i];
      cout<<v<<"  ";
    }
    cout<<endl;
   }
   
  }

int matrix::matrix_trace(int n)
{int
sum=0;
 for(int i=0;i<n;i++)
 {
  sum=sum+m[i][i];
  }
return sum;
}

 int main()
    {

     int r1,c1,r2,c2;
     cout<<"\n\nEnter the size of 1st matrix: ";
     cin>>r1>>c1;
     matrix A(r1,c1);
     cout<<"\nEnter the elements in the matrix row by row.\n";
     int i1,j1,value1;
     for(i1=0;i1<r1;i1++)
      { for(j1=0;j1<c1;j1++)
         {
          cin>>value1;
          A.input(i1,j1,value1);
         }
         }
     cout<<"\n\nEnter the size 2nd matrix: ";
     cin>>r2>>c2;
     matrix B(r2,c2);
     cout<<"\nEnter the elements in the matrix row by row.\n";
     int i,j,value;
     for(i=0;i<r2;i++)
      { for(j=0;j<c2;j++)
         {
          cin>>value;
          B.input(i,j,value);
         }
         }
     int ch;
    matrix C1(r1,c1), C2(r1,c2),C3(c1,r1),C4(c2,r2);
   do{

 
    cout<<"\n\nENTER YOUR CHOICE : \n1.Addition of matrices\n2.Product of matrices\n3.Transpose of each matrix\n4.Trace of each matrix\n5.Exit the program\n";
  cin>>ch;

 switch(ch)
    {
  case 1:
      if(r1==r2 && c1==c2)
      {
       cout<<"\n\nSum of the two matrices: \n";
       C1.matrix_add(A,B);}
     else{cout<<"\n\nSorry, sum of these matrices is not possible.\nThey are of different dimensions. Please try again.\n\n";}
     break;
  case 2:
     if(c1==r2)
      {
       cout<<"\n\nProduct of the two matrix: \n";
       C2.matrix_mult(A,B);}
     else{cout<<"\n\nSorry, product of these matrices is not possible .Please try again.\n";}
     break;
  case 3:
      cout<<"\n\nTranspose of first matrix: "<<endl;
      C3.matrix_transpose(A);
   
      cout<<"\n\nTranspose of second matrix."<<endl;
      C4.matrix_transpose(B);
      break;
  case 4:
    if(r1==c1)
     {cout<<"\n\nTrace of 1st matrix is: ";
     int trace=A.matrix_trace(r1);
     cout<<trace<<endl;}
     else
     cout<<"\n\nTrace is not possible for 1st matrix.\n";
    if(r2==c2)
     {cout<<"\n\nTrace of 2nd matrix is: ";
     int trace=B.matrix_trace(r2);
     cout<<trace<<endl;}
     else
     cout<<"\n\nTrace is not possible for 2nd matrix.\n";
     break;
  case 5:
      break;
  default:
      cout<<"\n\n  your choice is wrong.\n";
      break;
     }
     
   }while(ch!=5);

      return 0;
 }


