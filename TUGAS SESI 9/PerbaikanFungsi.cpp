/* Penggunaan Call By Value */
/* Program Tambah Nilai */
/* ------------------------ */
#include<iostream>
using namespace std;

int tambah(int m, int n);

int main(){
  int a, b;
  a = 5;
  b = 9;

  cout <<"Nilai Sebelum Fungsi Digunakan "<<endl;
  cout <<"a = "<<a<<" b = "<<b;
  
  tambah(a,b);
  
  cout <<"\nNilai Setelah Fungsi Digunakan"<<endl;
  cout <<"a = "<<a<<" b = "<<b;
getchar();
}
int tambah(int m, int n){
  m+=5;
  n+=7;
  cout<<"\n\nNilai di dalam Fungsi Tambah()"<<endl;
  cout<<"m = "<<m<<" n = "<<n;
  cout<<endl;
  
  return 0;
  }