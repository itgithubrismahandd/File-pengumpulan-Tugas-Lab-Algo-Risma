#include<iostream>
using namespace std;

int main(){
 int baris, kolom;
  for (baris = 1; baris <= 5; baris++){
    for (kolom = 1; kolom <= 6 ; kolom++)
      cout <<baris << " ";
    cout <<endl;
  }
getchar ();
}