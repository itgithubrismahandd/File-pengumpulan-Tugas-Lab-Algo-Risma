#include <iostream>
using namespace std;

int main (){
  cout <<"Program C++ menentukan bilangan prima";
  cout <<"Risma Handayani \n222310015 \nTI22PB";
  cout <<"\n====================================="<<endl;
 
  int a,b, bagi;
  bool bil_prima = true;
 
  cout << "Masukkan satu bilangan angka bulat: ";
  cin >> a;
 
  if (a == 0 || a == 1) {
    bil_prima = false;
  }
  else {
    for (b = 2; b <= a / 3; b++) {
      if (a % b == 0) {
        bagi = b;
        bil_prima = false;
        break;
      }
    }
  }
 
  cout << endl;
  if (bil_prima)
    cout << a << " Merupakan angka prima, karena hanya bisa dibagi 1 dan bilangan prima tsb";
  else
    cout << a << " bukan merupakan angka prima, karena bisa dibagi " << bagi;
 
 cout << endl;
 return 0;
}