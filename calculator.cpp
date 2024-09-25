#include<iostream>
using namespace std;
void add(int a,int b);
void subtract(int a,int b);
void product(int a,int b);
void division(int a,int b);
int main()
{
   int a,b;
   char op;
   cout<<"Enter Number 1: ";
   cin>>a;
   cout<<"Enter Number 2: ";
   cin>>b;
   cout<<"Enter Operator(+,-,/,*): ";
   cin>>op;
   if(op=='+')
   {
   add(a,b);
   }
   if(op=='*')
   {
   product(a,b);
   }
   if(op=='-')
   {
   subtract(a,b);
   }
   if(op=='/')
   {
   division(a,b);
   }
}

void add(int a,int b)
{
 int sum;
 sum=a+b;
 cout<<"Sum: "<<sum<<endl;
}

void subtract(int a,int b)
{
 int sub;
 sub=a-b;
 cout<<"Subtraction: "<<sub<<endl;
}

void product(int a,int b)
{
 int multiply;
 multiply=a*b;
 cout<<"Product: "<<multiply<<endl;
}

void division(int a,int b)
{
 int div;
 div=a/b;
 cout<<"Division: "<<div<<endl;
} 