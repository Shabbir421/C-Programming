// string method 
#include<iostream>
#include<string.h>
using namespace std;
main(){
  char name[20];//fix value,mutable in array
  cout<<"enter full name"<<endl;
  gets(name);
  puts(name);


  string myaddress;//dynamic in nature ,immutable
  cout<<"enter your add"<<endl;
  getline(cin,myaddress);//input for value
  cout<<"full address"<<endl<<myaddress;

}