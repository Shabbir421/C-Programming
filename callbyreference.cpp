//call by refernce assign value

#include<iostream>
using namespace std;

main(){
  int a=100;
  cout<<a<<endl;
  int &ref=a;
  cout<<ref<<endl;
  cout<<++ref<<endl;  //increment in ref value
  cout<<a;   //reference value assign in a

}