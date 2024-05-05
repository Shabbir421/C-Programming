//constructor is special member function of class to create obj

#include<iostream>
using namespace std;

class P{
  public:
  int a;
   P(){    //if its not used then o/p is garbage
        //if not any parameter set then its a default parameter .if set then its a parameterized consutructor
    a=100;
  }
  void show(){
    cout<<a;
  }
};
int main(){
  P obj=P();
  obj.show();
  return 0;
}