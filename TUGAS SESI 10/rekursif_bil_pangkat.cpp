#include <iostream>
using namespace std;

int pangkat(int x, int y){
  if (y == 0||y==1){
    return x;
  }else{
    return x*pangkat(x,y-1);
  }
}

int main (){
  int x, y;
  cout<<"Risma Handayani (222310015)"<<endl;
  cout<<"TUGAS PROGRAM C++ MENGHITUNG PANGKAT DENGAN REKURSIF"<<endl;
  cout<<"================================================="<<endl;
  cout<<"Masukkan nilai X = ";
  cin>>x;
  cout<<"Masukkan nilai Y(Pangkat) = ";
  cin>>y;
  
  int hasil = pangkat(x,y);
  cout<<"Hasil "<<x<<" dipangkatkan "<<y<<" = "<<hasil;
  
  return 0;
}