#include<iostream>
#include<string>
using namespace std;
void payableamount(string day,int tamount);
int main()
{
  string day;
  int tamount;
  cout<<"Enter the day of purchase: ";
  cin>>day;
  cout<<"Enter the total purchase amount: $";
  cin>>tamount;
  payableamount(day,tamount);
}

void payableamount(string day,int tamount)
{
  int discount,payamount;
   if(day=="Sunday")
   {
     discount=(tamount*10)/100;
     payamount=tamount-discount;
     cout<<"Payable amount: $"<<payamount<<endl;
   }
   if(day!="Sunday")
   {
    cout<<"Payable amount: $"<<tamount<<endl;
   }
} 
