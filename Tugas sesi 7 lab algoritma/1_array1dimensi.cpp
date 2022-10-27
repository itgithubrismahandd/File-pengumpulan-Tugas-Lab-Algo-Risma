#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  int i;
char nama[10][20];
int nilai1[5];
int nilai2[5];
int hasil[5];

for(i=1;i<=2;i++){
cout<<"Data Ke - "<<i<<endl;
cout<<"Nama Siswa : ";
cin >> nama[i];
  cout<<"input Nilai MidTest : " ; 
  cin>>nilai1[i];
  cout<<"input Nilai Final : "; 
  cin>>nilai2[i];
  cout<<"\n";
}
  for(i=1;i<=2;i++){
  
  hasil[i] = (nilai1[i]+nilai2[i])/2;
  cout<<endl;
    }
  cout<<"------------------------------------------"<<endl;
cout<<"No. Nama Siswa \t\t Nilai \tNilai\tHasil"<<endl;
cout<<" \t\t\t\t\tMidTest Final   Ujian"<<endl;
cout<<"------------------------------------------"<<endl;
for(i=1;i<=2;i++)
{
cout<<setiosflags(ios::left)<<setw(4)<<i;
cout<<setiosflags(ios::left)<<setw(19)<<nama[i];
cout<<nilai1[i] <<"     ";
cout<<nilai2[i] <<"      ";
cout<<hasil[i] <<"              "<<endl;
}
cout<<"------------------------------------------"<<endl;
getchar();
}