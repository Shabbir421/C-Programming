#include<iostream>
using namespace std;

class P{
  private:
  int a,b;
  public:
  P(int x,int y){   //special member function
    a=x; b=y;
  }
  void show(){
    cout<<a<<" "<<b;
  }
};

int main(){
  P obj(20,25);
  obj.show();
  return 0;
}

