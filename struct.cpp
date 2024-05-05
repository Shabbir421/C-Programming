// structure used to diff. diff. datatype into single memory dcided for each

#include<iostream>
using namespace std;

struct emp{
  string name;  //8 byte consider for the 8*3=24 byte
  int eid;
  double salary;

};

main(){
  struct emp e;
    cout<<sizeof(e.name)<<" byte"<<endl;
    cout<<sizeof(e.eid)<<" byte"<<endl;
    cout<<sizeof(e.salary)<<" byte"<<endl;
  }