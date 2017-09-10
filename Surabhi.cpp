#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
 float a,no;
 cout<<" \n Enter a number : ";
 cin>>no;
 if(no<0)
 {
  a=no/2;
  cout<<" \n It is a negative number. So the divided value is : "<<a;
 }
 else
 {
  cout<<" It is a positive number. ";
 }
 return 0;
}

