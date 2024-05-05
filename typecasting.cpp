//it  define the type of value assign

#include<iostream>
#include<typeinfo>
using namespace std;
main(){
  int a=10;
  double b=3.14;
  char c='a';
  cout<<typeid(a).name()<<endl;
  cout<<typeid(b).name()<<endl;
  cout<<typeid(c).name()<<endl;
}
