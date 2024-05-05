//using call by value to check its chanmging or not

#include<iostream>
using namespace std;

void change(int num){
  num= num+10;
  cout<<num<<endl;
}

main(){
  int num =100; 
  cout<<num<<endl;//originl value
  change(num);// calling value 
  cout<<num;//this value not chanmge it perform same as original

}