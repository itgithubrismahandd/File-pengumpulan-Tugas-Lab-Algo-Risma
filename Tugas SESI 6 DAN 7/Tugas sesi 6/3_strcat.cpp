#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
int main()
{
  char a[20]="Teknik";
  char b[20]=" Informatika";

  cout<<"Risma Handayani";
  cout<<"\nProgram penggabungan dua buah string"<<endl;
  cout<<"====================================="<<endl;
  cout<<"Kalimat 1 = "<<a<<endl;
  cout<<"Kalimat 2 ="<<b<<endl;
  
  strcat(a, b);
  cout<<"Hasil Penggabungannya "<<a;
getchar();
}