#include <iostream>
using namespace std;

int main ()
{
  char ulang;
  int a,b;
  cout <<"Risma Handayani\n222310015";
  cout <<"===========================\nTugas Program dengan goto\n===========================";
  
  start:
  cout <<"\nMasukkan bilangan yang ingin dihitung: ";
  cin >> a;

  b = a % 2;

  cout <<"Hasil sisa nilai bilangan % 2 adalah "<<b<<endl;
  cout<<"\n\n#Apakah ingin menghitung lagi? (y/t)";
  cin >>ulang;

  if (ulang=='Y'||ulang=='y'){
    goto start;
  }
  if (ulang=='T'||ulang=='t'){
    goto end;
  }
  end:
  cout <<"Goodbye don't forget to visit again:)";
 return 0;
}