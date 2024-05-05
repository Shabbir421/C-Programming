//class 3 local and global class design

#include<iostream>
using namespace std;

void fun(){
  class A{
    private:
    int a,b;
    public:
    void show (){
      cout<<"enter value :"<<endl;
      cin>>a>>b;
      cout<<a<<" "<<b;

    }
  };
  A obj;
  obj.show();

}
int main(){

  fun();
  return 0;
}
