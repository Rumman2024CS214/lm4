#include<iostream>
using namespace std;
void fuel(float dist);
int main()
{
  float dist;
  cout<<"Enter the distance: ";
  cin>>dist;
  fuel(dist);
}

void fuel(float dist)
{
  float fuel;
  fuel=dist*10;
  if(fuel<100)
   {
    cout<<"Fuel needed: 100";
   }
  if(fuel>100) 
   {
    cout<<"Fuel needed: "<<fuel;
   }
}

