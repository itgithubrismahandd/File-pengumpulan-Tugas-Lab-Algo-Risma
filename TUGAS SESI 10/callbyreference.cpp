/*----------------------*/
/*Penggunaan Call By Reference*/
/*Program Tambah Nilai*/
/*------------------*/
#include <iostream>
using namespace std;

void tambah(int*c, int *d);

int main(){
  int a=4, b=6;
  cout<<"Nilai sebelum pemanggilan fungsi";
  cout<<"\na = "<<a<<" b = "<<b<<endl;
  tambah(&a, &b);
  cout<<"\nNilai setelah pemanggilan fungsi";
  cout<<"\na = "<<a<<" b = "<<b;
  getchar();
}
void tambah(int *c, int *d){
  *c+=7;
  *d+=5;
  cout<<"\nNilai diakhir fungsi tambah()";
  cout<<"\nc = "<<*c<<" d = "<<*d<<endl;
}