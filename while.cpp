//example for while loop to unclock the phone

#include<iostream>
#include<string.h>
using namespace std;
main(){
  int pass=1234;
  int pass1;
  cout<<"enter pass:"<<endl;
  cin>>pass1;
  while(pass>0){
    if(pass==pass1){
      cout<<"correct pass"<<endl;
      break;

    }
    else{
      cout<<"incoorect pass"<<endl;
      break;
    }
  }

}