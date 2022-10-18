#include <iostream>
using namespace std;

int main (){
  int a=3, b=2, c=1, bil;
  cout <<"Perulangan FOR dengan Break\n";
  cout <<"-----------------------------\n";
  cout <<" Bil-A    | Bil-B    | Bil-C \n";
  cout <<"-----------------------------"<<endl;

  for(bil=1; bil<=10; ++bil){
   a+=b; b+=c; c+=2;
   cout <<"\n" << a;
   cout <<"\t  |"<< b;
   cout <<"\t     |"<< c;                                           
    if (c == 13)
    break;
  }
  return 0;
}