#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
class determinants
{
 private:
 int i,j;
 float a[2][2], d, b[3][3];
 public:
 int n;
 void two();
 void three();
 };
 void determinants:: two()
 {

 cout<<"enter the elements of the determinant"<<endl;
 for(i=0;i<2;i++)
 {
    for(j=0;j<2;j++)
    cin>>a[i][j];
 }
   cout<<endl;
	for(i=0;i<2;i++)
	{
	       cout<<"|";
		for(j=0;j<2;j++)
		{
			cout<<" "<<a[i][j]<<" ";

		}
		cout<<"|"<<endl;
	}
	cout<<"determinant value = ("<<a[0][0]<<"*"<<a[1][1]<<") - ("<<a[0][1]<<"*"<<a[1][0]<<")"<<endl;
	d=(a[0][0] * a[1][1])-(a[0][1] * a[1][0]);
	cout<<"d = "<<d;
 }

void determinants::three()
{
 cout<<"enter the elements of the determinant"<<endl;
 for(i=0;i<3;i++)
 {
    for(j=0;j<3;j++)
    cin>>a[i][j];
 }
    cout<<endl;
	for(i=0;i<3;i++)
	{
	       cout<<"|";
		for(j=0;j<3;j++)
		{
			cout<<" "<<a[i][j]<<" ";

		}
		cout<<"|"<<endl;
	}
	cout<<"determinant value = "<<a[0][0]<<"[("<<a[1][1]<<"*"<<a[2][2]<<")-("<<a[1][2]<<"*"<<a[2][1]<<")]"
			     <<"  -"<<a[0][1]<<"[("<<a[1][0]<<"*"<<a[2][2]<<")-("<<a[1][2]<<"*"<<a[2][0]<<")]"
			     <<"  +"<<a[0][2]<<"[("<<a[1][0]<<"*"<<a[2][1]<<")-("<<a[1][1]<<"*"<<a[2][0]<<")]"<<endl;
	d=(a[0][0])*(( a[1][1]*a[2][2] )-( a[1][2]*a[2][1] ))  -
	  (a[0][1])*(( a[1][0]*a[2][2] )-( a[1][2]*a[2][0] ))  +
	  (a[0][2])*(( a[1][0]*a[2][1] )-( a[1][1]*a[2][0] ))  ;

	cout<<"d = "<<d;
 }

 void main()
{
  clrscr();
  determinants obj;
  cout<< " DETERMINANT CALCULATOR "<<endl;
  cout<<" enter the number of rows or coloumns of the determinant "<<endl;
  cin>>obj.n;
  if(obj.n==2)
  {
	obj.two();
  }
  else if (obj.n==3)
  {
	obj.three();
  }
  else
  cout<<" cannot calculate "<<endl;
  getch();
}