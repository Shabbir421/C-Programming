// creting class and object in cpp
//normal calculator using class and object


#include<iostream>
using namespace std;


class file{
  public:
  int a,b,c;
  public:
  void add(){
    cout<<"enter value :";
    cin>>a>>b;
    c=a+b;
    cout<<"addition is :"<<c<<endl;

  }
  void sub(){
    cout <<"enter two number :";
    cin>>a>>b;
    c=a-b;
    cout<<"subtraction is :"<<c;
  }

};
int main(){
  file obj;
  obj.add();
  obj.sub();

}