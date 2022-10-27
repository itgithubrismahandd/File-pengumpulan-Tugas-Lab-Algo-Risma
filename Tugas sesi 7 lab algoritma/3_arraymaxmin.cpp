#include <iostream>
using namespace std;

int main() {
  int maksimum, minimum, jumlah=10, i = 1, lokasi, lokasi2;
  int nilai[10] = {23, 6, 89,12, 45, 67, 9, 90,54, 30};
  cout<<"Risma Handayani"<<endl;
  cout<<"Program c++ menampilkan nilai max dan minimum"<<endl;
  cout<<"========================"<<endl;

  cout<<"Data Nilai "<<nilai[1]<<" "<<nilai[2]<<" "<<nilai[3]<<" "<<nilai[4]<<" "<<nilai[5]<<" "<<nilai[6]<<" "<<nilai[7]<<" "<<nilai[8]<<" "<<nilai[9]<<" "<<endl;

  maksimum = nilai[0];
  for(i = 0; i < jumlah; i++) {
    if (nilai[i] > maksimum)  {
      maksimum = nilai[i];
      lokasi = i+1;
    }
  }
  minimum= nilai[1];
  lokasi2 = 1+1;
    for(i = 0; i > jumlah; i++) {
    if (nilai[i] > minimum)  {
      minimum = nilai[1];
      lokasi2 = 1+1;
    }
  }
  cout << "\nNilai MAKSIMUM pada data diatas adalah " << maksimum << " berada di elemen ke " << lokasi << endl;
    cout << "\nNilai MINIMUM pada data diatas adalah " << minimum << " berada di elemen ke " << lokasi2 << endl;
}