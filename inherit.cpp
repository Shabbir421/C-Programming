//inherit the one class to another class

#include<iostream>
using namespace std;

class A{
  protected:
  int a,b;
  public:
  void hello(){
    cout<<"enter the value";
    cin>>a>>b;
    cout<<"output"<<a<<b;
  }
  public:
    void show1(){
      cout<<"public method 2";
    }
};
 class B: public A{
  public:
  void show(){
    cout<<"derived class ";
  }


 };
int main(){
  B obj; A obj2;
  obj.hello();
  obj.show1();
  return 0;
}