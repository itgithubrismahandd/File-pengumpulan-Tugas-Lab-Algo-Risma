#include <iostream>
using namespace std;

int main (){
  cout << "====================================\n";
  cout << "~~Program C++ Segitiga bintang~~";
  cout << "\nRisma Handayani3\nTI-22-PB";
  cout << "\n===================================="<<endl;

  int a,i,j,k;
  cout << "Masukkan tinggi segitiga: ";
  cin >> a;
  cout << endl;
  
  for (i = 1; i <= a; i++) {
    for (j = 1; j <= a-i; j++) {
      cout << "";
    }
    for (k = 1; k <= i; k++){
      cout << " *";
    }
    cout << endl;
  }
  return 0;
}