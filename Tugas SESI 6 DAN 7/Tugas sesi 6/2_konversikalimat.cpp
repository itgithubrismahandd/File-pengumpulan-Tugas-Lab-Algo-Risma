#include <iostream>
#include <cctype>
#include <cstring>
#include <string.h>
using namespace std;
int main()
{
  char teks[100]="KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN";
  char teksinvers[100];
  
  cout<<teks<<endl;
  
  for (int i=0; i<strlen(teks); i++) {
    if(teks[i] >= 'a' && teks[i] <= 'z'){
      teksinvers[i] = toupper(teks[i]);
     }
       else{
        teksinvers[i] = tolower(teks[i]);
      }
  }
  
  cout<<"\nHasil konversi kalimat diatas menjadi huruf kecil dan diinvers adalah= ";
  (teksinvers, sizeof(teksinvers));
  int x = strlen(teksinvers);
  for (int i = x-1; i>=0; i--){
    cout <<teksinvers[i];
    } 
return 0;
}