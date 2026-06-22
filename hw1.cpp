#include<iostream>
using namespace std;
int main(){
  int l,b,x,y;
  cout<<"Enter the length of the rectangle: ";
  cin>>l;
  cout<<"Enter the breadth of the rectangle: ";
  cin>>b;
  x=l*b;
  y= 2 * l+b;

if(x>y){
  cout<<"Area of Rectangle is greater";
}
else 
cout<<"Perimeter of Rectangle is greater";
}
