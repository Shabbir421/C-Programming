 // strlen method
//   char str[]="shabbir";
//   int l=strlen(str);
//   cout<<l<<endl<<strrev(str);




//   //string copy one string to another
//   char str1[]="Ansari";
//   char str2[13];// size given cumpolsery because there have no storing
//    strcpy(str2,str1);
//   cout<<str2<<endl;




// //string cocate
//   char str3[]="Ansari";
//   char str4[]="shabbir";
//   strcat(str3,str4);
//   cout<<str3;




// //string compare 
//   char str5[]="vishal";
//   char str6[]="kushgwaha";
//   int value =strcmp(str5,str6);
//   if(value==0){
//     cout<<endl<<"STRING ARE EQUAL";
//   } else{
//     cout<<endl<<"string not equal";
//   }



//   //replace value
#include<iostream>
using namespace std;
main()
{
  string a="nalli";
  a.replace(0,5,"balli");
  cout<<endl<<a;
}