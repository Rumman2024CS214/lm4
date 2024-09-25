#include<iostream>
using namespace std;
void sum(int a,int b);
int main()
{
   int a,b;
   cout<<"Enter a number: ";
   cin>>a;
   cout<<"Enter second number: ";
   cin>>b;
   sum(a,b);
}

void sum(int a,int b)
{
 int sum;
 sum=a+b;
 cout<<"Sum: "<<sum<<endl;
} 