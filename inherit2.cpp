//inheritance

#include<iostream>
using namespace std;

class P{
  public:
  int num=5;
  public:
  void show(){
    num=num+3;
    cout<<num;
  }
};

class C :public P{
  public:
  int a=10;
   void display(){
    a=a+num;
    cout<<a;
  } 
};
int main(){
  C c1;
  c1.show();
  c1.num=10;
  c1.display();
  c1.a=15;
  c1.display();
  return 0;
}