//file handling to create new file and many function like : create file ,open,read,write,copy,delete


#include<iostream>
#include<fstream>
using namespace std;

main(){ 
  
   //------------file create and data write-----------

  // ofstream onfile;   //object file
  // onfile.open("C:\\Users\\shabb\\Desktop\\file.txt "); // create file
  // onfile<<"thank you bro";   //data write in file
  // cout<<"data has been written";  //check if correct 
  // onfile.close();   //file close


//------------ file read-----------------


// ifstream infile;
// string str;
// infile.open("C:\\Users\\shabb\\Desktop\\file.txt ");
// while( getline(infile,str)){
//   cout<<str;
//   infile.close();
//}


//-----------copy file to another file------------

// ifstream infile;
// ofstream onfile;
// char str;
// infile.open("C:\\Users\\shabb\\Desktop\\file.txt");
// onfile.open(" C:\\Users\\shabb\\Desktop\\file_3.txt");
// while(infile.get(str)){
//   onfile.put(str);
// }

//   cout<<"copied";
//   infile.close();
//   onfile.close();


//----------delete file---------------

int value=remove("C:\\Users\\shabb\\Desktop\\file.txt");
if(value==0){
  cout<<"file delete";
}
else{
  cout<<"file not delete";
}
}


