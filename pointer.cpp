// pointer program

#include<iostream>
using namespace std;
main(){
  int a=10;
  int *ptr=&a;
  int **q=&ptr;
  cout<<a;  //a=10
  cout<<ptr<<endl;
  cout<<*ptr<<endl;
  cout<<&ptr<<endl;
  cout<<&a<<endl;
  cout<<**q;

}