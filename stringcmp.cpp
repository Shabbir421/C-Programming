//string compare 


 #include<iostream>
#include<string.h>
using namespace std;
main(){
  char str5[]="vishal";
  char str6[]="kushgwaha";
  int value =strcmp(str5,str6);
  if(value==0){
    cout<<endl<<"STRING ARE EQUAL";
  } else{
    cout<<endl<<"string not equal";
  }
  }