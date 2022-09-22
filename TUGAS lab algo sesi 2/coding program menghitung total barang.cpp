#include <iostream>
#include <stdlib.h>
using namespace std; 

int main (void)
{
  float jumlah,harga,total; 
  cout <<"Risma Handayani\n"; 
  cout <<"TI-22-PB, 222310015\n";
  cout <<"Lab algoritma pemrograman dan struktur data\n";
  cout << "Tugas Program menghitung harga total barang\n\n\n";
  
  cout << "Masukkan jumlah barang = ";
  cin >> jumlah;
  cout << "Masukkan harga barang =Rp.";
  cin >> harga;
  
  cout << "Jumlah barang =  " << jumlah<< endl;
  cout << "Harga barang perunit =  " << harga<< endl;
  
  total= jumlah*harga;
  cout <<"\nTotal yang harus dibayar =Rp."<< total;

}