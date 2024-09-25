#include<iostream>
using namespace std;
void fuel(float a);
int main()
{
   float d;
   cout<<"Enter the distance: ";
   cin>>d;
   fuel(d);
}

void fuel(float d)
{
 float f;
 f=d*10;
 cout<<"Fuel needed: "<<f<<endl;
} 