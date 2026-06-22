#include<iostream>
using namespace std;
int main(){
  int x,y,z;
  cout<<"Enter the age of Ram: ";
  cin>>x;
  cout<<"Enter the age of Shyam: ";
  cin>>y;
  cout<<"Enter the age of Ajay: ";
  cin>>z;

  if(x>y){
    if(y>z)
      cout<<"Ajay is youngest";
    else
    cout<<"Shyam is youngest";

  }
  else//y>x
    if(x>z)
    cout<<"Ajay is youngest";
  else
  cout<<"Ram is youngest";
}