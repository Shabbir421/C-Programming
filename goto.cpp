// goto statement 

#include<iostream>
using namespace std;
main(){
  int num ;
  for(num=1; num<=10; num++){
    if(num==5){
      goto out;
    }
    cout<<num;
    out:cout<<"hello bro";
  }
}