//using else if for calculating tax of 1 lakh to many lakh

#include<iostream>
using namespace std;
main(){
  int amt,tax;
  cout<<"enter amt:";
  cin>>amt;
  if(amt<=100000){
    cout<<"no need to tax:"<<endl;
  }
  else if((amt>=100000)&&(amt<=500000)){
    tax=amt*10/100;
    cout<<"10% of tax"<<tax<<endl;
  }
  else{
    tax=amt*40/100;
    cout<<"tax of 40%"<<tax<<endl;
  }
}