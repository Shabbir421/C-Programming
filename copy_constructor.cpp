#include<iostream>
using namespace std;

class P{
  int a,b;
  public:
  P(int x,int y){
    a=x;
    b=y;

  }
  P(P &ref){
    a=ref.a;
    b=ref.b;
  }
  void show (){
    cout<<a<<" "<<b<<endl;
  }
};

int main(){
  P obj(12,15);
  obj.show();
  return 0;
}