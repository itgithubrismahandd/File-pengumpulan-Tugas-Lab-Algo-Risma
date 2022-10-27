#include <iostream>
#include <string.h>
using namespace std;

int main(){
  char a[]="FAKULTAS";
  char b[]=" PARIWISATA";
  char c[]=" DAN";
  char d[]=" TEKNOLOGI";
  char e[]=" INFORMASI";
  char huruf[]="FAKULTASPARIWISATADANTEKNOLOGIINFORMASI";
  
  //clrscr();
  cout<<"Risma Handayani"<<endl;
  cout<<"Program menghitung kalimat menggunakan strlen"<<endl;
  cout<<"========================"<<endl;
  
  cout<<a<<b<<c<<d<<e<<endl;
  cout<<"Jumlah huruf yang terdapat pada kalimat diatas adalah "<<strlen(huruf);
  
getchar ();
}