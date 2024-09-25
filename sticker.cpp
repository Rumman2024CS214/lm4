#include<iostream>
using namespace std;
void sticker(int side);
int main()
{
   int side;
   cout<<"Enter the side length of rubik's cube: ";
   cin>>side;
   sticker(side);
}

void sticker(int side)
{
 int stick;
 stick=(side*side)*6;
 cout<<"Number of stickers needed: "<<stick<<endl;
} 