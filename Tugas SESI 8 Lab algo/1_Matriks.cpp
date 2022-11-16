#include <iostream>
using namespace std;

int main (){
  int barisA, kolomA, barisB, kolomB, a[100][100], b[100][100];
  int jumlah[100][100], kurang[100][100], hasil[100][100], sum=0;
  float kali[100][100];
  
  cout<<"      Risma Handayani(222310015)   "<<endl;
  cout<<"   Program C++ Perhitungan Matriks"<<endl;
  cout<<"--------------------------------------"<<endl;
  cout<<"\nInput jumlah baris matriks A: ";
  cin>>barisA;
  cout<<"Input kolom baris matriks A: ";
  cin>>kolomA;
  cout<<"\nInput jumlah baris matriks B: ";
  cin>>barisB;
  cout<<"Input kolom baris matriks B: ";
  cin>>kolomB;

  cout<<"\nMatriks A"<<endl;
  for (int n=0; n<barisA; n++){
    for (int m=0; m<kolomA; m++){
      cout<<"Input matriks a dari " <<n+1<< m+1<<"= ";
      cin >> a[n][m];
      }
  }
  cout<<"\nMatriks B"<<endl;
  for (int n=0; n<barisA; n++){
    for (int m=0; m<kolomA; m++){
      cout<<"input matriks b dari " <<n+1<< m+1<<"= ";
      cin >> b[n][m];
      }
  }
  for (int n=0; n<barisA; n++){
    for (int m=0; m<kolomA; m++){
      jumlah[n][m] = a[n][m]+b[n][m];
      kurang[n][m] = a[n][m]-b[n][m];
      kali[n][m] = a[n][m]*b[n][m];
      
    }
  }

  cout<<"\nHasil PENJUMLAHAN dari kedua matriks diatas sebagai berikut: "<<endl;
    for(int n = 0; n < barisA; n++)
      for(int m = 0; m < kolomA; m++){
        cout << jumlah[n][m] <<" ";
        if(m == kolomA - 1)
          cout << endl;
      }
    cout<<"\nHasil PENGURANGAN dari kedua matriks diatas sebagai berikut: "<<endl;
    for(int n = 0; n < barisA; n++)
      for(int m = 0; m < kolomA; m++){
        cout << kurang[n][m] << " ";
        if(m == kolomA - 1)
          cout << endl;
      }
    for (int i = 0; i < barisA; i++){
      for (int j = 0; j < kolomB; j++){
         for (int k = 0; k < barisB; k++){
          sum = sum + a[i][k] * b[k][j];
        }
          hasil [i][j] = sum;
           sum  = 0;
        }
     }
    cout << endl;
    cout << "\nHasil PERKALIAN dari kedua matriks diatas sebagai berikut:" << endl << endl;
    for (int i = 0; i < barisA; i++){
       for (int j = 0; j < kolomA; j++){
        cout <<hasil[i][j] << " "; 
    }
      cout << endl;
  }
  return 0;
}