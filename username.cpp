#include<iostream>
#include<string>
using namespace std;
void printname(string name);
int main()
{
  string name;
  cout<<"Enter your name: ";
  cin>>name;
  while(true){
   printname(name);
  }
}

void printname(string name)
{
  cout<<name<<endl;
}