#include<iostream>
#include<string>
using namespace std;
void payableamount(string day,int tpurchase);
int main()
 {
  string day;
  int tpurchase;
  cout<<"Enter the day of purchase: ";
  cin>>day;
  cout<<"Enter total purchase amount: ";
  cin>>tpurchase;
  payableamount(day,tpurchase);
  
 }
 
void payableamount(string day,int tpurchase)
{
 int discount,payamount;
 if(day=="Sunday")
  {
  discount=(tpurchase*10)/100;
  payamount=tpurchase-discount;
  cout<<"Total payable amount: "<<payamount;
  }
 if(day=="Monday")
  {
  discount=(tpurchase*5)/100;
  payamount=tpurchase-discount;
  cout<<"Total payable amount: "<<payamount;
  }
 if(day=="Tuesday")
  {
  discount=(tpurchase*5)/100;
  payamount=tpurchase-discount;
  cout<<"Total payable amount: "<<payamount;
  }
  if(day=="Wednesday")
  {
  discount=(tpurchase*5)/100;
  payamount=tpurchase-discount;
  cout<<"Total payable amount: "<<payamount;
  }
   if(day=="Thursday")
  {
  discount=(tpurchase*5)/100;
  payamount=tpurchase-discount;
  cout<<"Total payable amount: "<<payamount;
  }
   if(day=="Friday")
  {
  discount=(tpurchase*5)/100;
  payamount=tpurchase-discount;
  cout<<"Total payable amount: "<<payamount;
  }
   if(day=="Saturday")
  {
  discount=(tpurchase*5)/100;
  payamount=tpurchase-discount;
  cout<<"Total payable amount: "<<payamount;
  }
 }   