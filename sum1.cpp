#include<iostream>
using namespace std;
void add(int a,int b);
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
}

void add(int a,int b)
{
 int sum;
 sum=a+b;
 cout<<"Sum: "<<sum<<endl;
} 