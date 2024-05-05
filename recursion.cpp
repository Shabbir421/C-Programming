//recusive funtion to print factorial of value

#include<iostream>
using namespace std;
int fact(int num){
  if(num==0){
    return 1;
  }
  else{
    return num*fact(num-1);
  }
}

main(){
  int num;
  cout<<"Enter the number:";
  cin>>num;
  int r=fact(num);
  cout<<"factorial of "<<num<<" is:"<<r;

}