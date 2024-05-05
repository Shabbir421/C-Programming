// in this call by value its use of pointer
#include<iostream>
using namespace std;

void change(int *p){
  *p=*p+10;
  cout<<"pointer value"<<*p<<endl;

}
main(){
  int num;
  cout<<"enter the number:";
  
  cin>>num;
  cout<<"original value:"<<num<<endl;
  change(&num);
  cout<<"new value: "<<num<<endl;

}