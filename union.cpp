// using union function print the data type size

#include<iostream>
#include<typeinfo>
using namespace std;
union emp{
  int eid;
  double salary;   //8 byte consider for all datatype in union
  char ch;
};
main(){
  union emp e;
    cout<<sizeof(emp);
  
}