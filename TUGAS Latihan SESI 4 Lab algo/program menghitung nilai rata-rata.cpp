#include <iostream>
using namespace std;

int main (){
  string nama, hadiah;
  float ratarata, nilai1, nilai2, nilai3;
  cout <<"======================================";
  cout <<"\nProgram If else menghitung rata rata";
  cout <<"\nTugas coding c++ punya risma handayani";
  cout << "\nTI22PB, 222310015";
  cout << "\n=====================================";

  cout <<"\nNama siswa/i: ";
  cin >> nama;
  cout <<"Nilai pertandingan I: ";
  cin >> nilai1;
  cout <<"Nilai pertandingan II: ";
  cin >>nilai2;
  cout <<"Nilai pertandingan III: ";
  cin >> nilai3;

  ratarata = (nilai1+nilai2+nilai3)/3;

  cout <<"siswa bernama "<< nama<<endl;
  cout <<"memiliki nilai rata-ratanya yaitu "<<ratarata<<endl;

  if (ratarata >= 85){
  hadiah = "Perangkat Komputer core i5"; 
  }else if(ratarata >= 70){
  hadiah = "Uang senilai Rp.2500.000";
  }else if (ratarata <= 70){
  hadiah = "hiburan";
  }

  cout << "\n\nSiswa yang bernama "<<nama <<endl;
  cout << "Memperoleh nilai rata-rata " <<ratarata;
  cout <<" dari hasil perlombaan yang diikutinya ";
  cout <<"\nHadiah yang didapat adalah "<<hadiah<<endl;

  return 0;
}