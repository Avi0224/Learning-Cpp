#include<iostream>
using namespace std;
int main(){
  int x,y,z;
  cout<<"Enter x,y and z: ";
  cin>>x >>y >>z;
  if(x<y and x<z)
  cout<<x;
else if(y<z and y<x)
  cout<<y;
else 
cout<<z;

}