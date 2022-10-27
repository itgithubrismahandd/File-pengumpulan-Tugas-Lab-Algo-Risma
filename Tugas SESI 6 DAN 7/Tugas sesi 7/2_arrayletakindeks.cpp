#include <iostream>
using namespace std;

int main(){
  int a[5]={1,4,5,6,3}, tot, bil;
  cout<<"Program mengetahui jumlah bilangan yang dicari dan letak index bilangan"<<endl;
cout<<"Risma Handayani"<<endl;
cout<<"==========================";


  cout<<"\n\nMasukkan banyaknya bilangan = ";
  cin>>tot;

  for (int b=0; b<5; b++){
    cout<<"indeks ke-["<<b<<"]= "<<a[b]<<endl;
    }

  cout<<"\nDeretan bilangan";
  cout<<" "<<a[ 0 ]<<" "<<a[ 1 ]<<" "<<a[ 2 ]<<" "<<a[ 3 ]<<" "<<a[ 4 ]<< " ";
  
  cout<<"\n\nMasukkan bilangan yang akan dicari: ";
  cin>>bil;
 
  for (int i=0; i<5; i++){
  if (a[i] == bil){
    cout << "Bilangan "<<bil;
    cout<<" ditemukan sebanyak 1"<<endl;
    cout<<"Pada posisi no indeks ke-"<<i;
      }
    }
  for (int b=0; b<1; b++){
  if (bil != a[b]){
  cout<<"\nBilangan tidak ditemukan";
     }
 }
  
  return 0;
}
