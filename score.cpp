#include<iostream>
using namespace std;
void pass();
void fail();
int main()
{
  int marks;
  cout<<"Enter your score: ";
  cin>>marks;
  if(marks>50)
   {
    pass();
   }
  if(marks<=50)
   {
    fail();
   }
}

void pass()
{
 cout<<"You are pass.";
}

void fail()
{
 cout<<"You are fail.";
} 
