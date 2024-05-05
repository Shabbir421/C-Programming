// string method 
//push_back,pop_back
//strlen
#include<iostream>
#include<string.h>
using namespace std;
main(){
  string myaddress="shabbir ansari";
  cout<<"original value:"<<myaddress<<endl;
  myaddress.push_back('a');
  cout<<"modify value:"<<myaddress<<endl;
  myaddress.pop_back();
  cout<<"remove/pop value: "<<myaddress<<endl;
 cout<<"string length is:"<<myaddress.length();
}