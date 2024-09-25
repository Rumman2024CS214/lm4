#include<iostream>
using namespace std;
void eligible();
void noteligible();
int main()
{
  int age;
  cout<<"Enter your age: ";
  cin>>age;
  if(age>=18)
   {
    eligible();
   }
  if(age<18)
   {
    noteligible();
   }
}

void eligible()
{
 cout<<"You are eligible to vote.";
}

void noteligible()
{
 cout<<"You are not eligible to vote.";
} 
