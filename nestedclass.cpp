//nested class declared inside another class

#include<iostream>
using namespace std;


class P{
  public:    //if nested then it not declare the values
  class C{    //all value declare second class
    int a,b;
    public:
    void input(){   //member function of class
      cout<<"enter value :";
      cin>>a>>b;
    }
    void show(){
      cout<<a<<" "<<b;
    }
  };
};
int main(){
  P::C obj;
  obj.input();
  obj.show();
  return 0;
}