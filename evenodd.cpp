#include<iostream>
using namespace std;
void even(int number);
void odd(int number);
int main()
{
  int number;
  cout<<"Enter a number: ";
  cin>>number;
  if(number%2==0)
   {
    even(number);
   }
  if(number%2==1)
   {
    odd(number);
   }
}

void even(int number)
{
 cout<<"Number "<<number<<" is even";
}

void odd(int number)
{
 cout<<"Number "<<number<<" is odd";
} 
