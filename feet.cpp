#include<iostream>
using namespace std;
void feet(float inch);
int main()
{
   float inch;
   cout<<"Enter the measurement in inches: ";
   cin>>inch;
   feet(inch);
}

void feet(float inch)
{
 float feets;
 feets=inch/12;
 cout<<"Measurement in feet: "<<feets<<endl;
} 