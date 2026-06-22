#include<iostream>
using namespace std;
int main(){
  int x,y;
  char a;
  cin>>x >>a >>y;

  if(a=='+') 
    cout<<x+y;
  else if(a=='-') 
    cout<<x-y;
  else if(a=='*') 
    cout<<x*y;
  else //(a=='/') 
    cout<<x/y;
  

}