#include <iostream>
using namespace std;

int main() {
  int jenis, i, harga[10], c[10], jumlah[10], total=0, Pajak=0;
  string tipe[10];
  char menu;
  cout<<"===Risma Handayani-222310015==="<<endl;
  cout<< "------------------------------"<<endl;
  cout<< "    GEROBAK FRIED CHICKEN     " << endl;
  cout<< "------------------------------" << endl;
  cout<< "Kode\tJenis\tHarga" << endl;
  cout<< "----------------------" << endl;
  cout<< " D\tDada\t Rp.2500" << endl;
  cout<< " P\tPaha\t Rp.2000" << endl;
  cout<< " S\tSayap\t Rp.1500" << endl;
  cout<< "----------------------" << endl;
  cout<< "\nBanyak Jenis yang ingin dipesan = ";
  cin >> jenis;

  for (i = 0; i < jenis; i++) {
    cout << "Jenis ke - " << i + 1 << endl;
  ulang:
    cout << "Jenis Potong [D/P/S] : ";
    cin >> menu;
    if (menu == 'D' || menu == 'd') {
      c[i] = 2500;
      tipe[i] = "Dada";
    } else if (menu == 'P' || menu == 'p') {
      c[i] = 2000;
      tipe[i] = "Paha";
    } else if (menu == 'S' || menu == 's') {
      c[i] = 3500;
      tipe[i] = "Sayap";
    } else {
      cout << "Input invalid.\n";
      goto ulang;
    }
    cout << "Banyak Potong : ";
    cin >> jumlah[i];

    harga[i] = jumlah[i] * c[i];
  }
  cout << "\n\t\t GEROBAK FRIED CHICKEN " << endl;
  cout << "-----------------------------------------" << endl;
  cout << "No.\tJenis\t Harga    Banyak    Jumlah" << endl;
  cout << "\tPotong \tSatuan    Beli      Harga " << endl;
  cout << "-----------------------------------------" << endl;
  for (i = 0; i < jenis; i++) {
    cout << i + 1 << "   " << tipe[i] << "\t  " << c[i] << "     " << jumlah[i]
         << "        Rp." << harga[i] << endl;
    total += harga[i];
  }
  Pajak = total * 0.1;
  cout << "-----------------------------------------" << endl;
  cout << "\n\t\t\tHarga total Pembelian = " << total;
  cout << "\n\t\t\tPajak 10%             = " << Pajak;
  cout << "\n\t\t\tTotal Pembayaran      = " << total + Pajak;
  return 0;
}