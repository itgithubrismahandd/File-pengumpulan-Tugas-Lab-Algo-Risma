#include <iostream>
using namespace std;

int main (){
  int a, b=19, c=10, d=0;
  cout <<"Risma Handayani";
  cout <<"\nProgram Menghitung Deret 10 Bilangan Ganjil \nLETSS GOOOOO!!!" <<endl;
  for (a=1; a<=b; a+=2){
       cout <<a;
       if (a<b){
        cout << " + ";
      }
  }
      cout <<" = ";
      d = c/2*(2+(c-1)*2);
      cout << d;
getchar();   
}