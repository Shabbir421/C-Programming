// class  object example

#include<iostream>
using namespace std;

class class1{//person details
            private:
            int age ;
            string name;
            string address;
            public:
            void input(){
              cout<<"enter age :";
              cin>>age;
              cout<<"enter name :";
              cin>>name;
              cout<<"enter addres :";
              cin>>address;
            }
            void show(){
              cout<<"age :"<<age<<endl;
              cout<<"name :"<<name<<endl;
              cout<<"add"<<address<<endl;
            }
};
int main(){
  class1 obj;
  obj.input();
  obj.show();
  return 0;

}
