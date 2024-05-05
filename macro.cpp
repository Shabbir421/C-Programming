//finding area of circle using macro

#include<iostream>
using namespace std;

#define pi 3.14  // macro it use global
#define square(r) ((r)*(r))  //it is a macro value(#desine macro_name macro_value)

main(){
  int r;
  cout<<"enter radius:";
  cin>>r;
  double  area=pi*square(r);
  cout<<"area of circle is :"<<area;

}