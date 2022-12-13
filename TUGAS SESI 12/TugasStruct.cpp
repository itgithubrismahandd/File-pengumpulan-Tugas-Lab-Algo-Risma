#include <iostream>
using namespace std;

struct mhs{
  char nama[20], nim[10], matkul[15];
  int sks;
};

int main (){
  mhs bayar[2];
  int bts, var, tetap;

  for (int i=0; i<2; i++){
    cout<<"-----------------------------"<<endl;
    cout<<"Nama Mahasiswa = ";
    cin>> bayar[i].nama;
    cout<<"NIM = ";
    cin>>bayar[i].nim;
    cout<<"Mata Kuliah = ";
    cin>> bayar[i].matkul;
    cout<<"Jumlah sks = ";
    cin>>bayar[i].sks;

    if(bayar[i].sks<=0||bayar[i].sks>2){
      cout<<"Program tidak sesuai\n";
    }
    
    if (bayar[i].sks == 1){
      tetap = 250000;
      var = bayar[i].sks*250000;
    }else if(bayar[i].sks == 2){
      tetap = 300000;
      var = bayar[i].sks*300000;
    }cout<<endl;

    cout<<"-----------------------------\n";
    cout<<"OUTPUT"<<endl;
    cout<<"-----------------------------\n";
    cout<<"Nama Mahasiswa = "<<bayar[i].nama<<endl;
    cout<<"NIM = "<<bayar[i].nim<<endl;
    cout<<"Mata Kuliah = "<<bayar[i].matkul<<endl;
    cout<<"Jumlah sks = "<<bayar[i].sks<<endl;
    cout<<"SPP tetap = Rp. "<<tetap<<endl;
    cout<<"SPP variabel = Rp. "<<var<<"\n";
    cout<<endl;
    
  }
}