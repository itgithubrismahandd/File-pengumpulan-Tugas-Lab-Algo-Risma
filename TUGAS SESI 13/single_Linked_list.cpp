#include <iostream>
#include <cstring>
#include <stdio.h>

using namespace std;

int pilih;
struct node{
  char nama [20];
  int usia;
  node *next = NULL;
};

node *kepala = NULL;
node *ekor = NULL;

void insertdata(){
  node *baru;
  baru = new node;
  cout<<"Masukkan nama : ";
  cin>>baru -> nama;
  cout<<"Masukkan usia : ";
  cin>>baru -> usia;
  if (kepala == NULL){
    kepala = baru ;
    kepala -> next = NULL;
    ekor = kepala;
  }else if(kepala -> usia > baru -> usia){
    baru -> next = kepala;
    kepala = baru;
  }else if (ekor -> usia < baru ->usia){
    ekor -> next =baru;
    ekor = baru;
    ekor -> next =NULL;
  }else{
    node *help = kepala;
    while (kepala != NULL){
      if (help -> next -> usia > baru -> usia){
        baru -> next = help -> next;
        help -> next = baru;
        break;
      }else{
        help = help -> next;
      }
    }
  }
}
void deldata(){
  if (kepala == NULL){
    cout<<"DATA KOSONG !!!"<<endl;
    getchar();
  }else{
    char erase[50];
    cout<<"Masukkan nama yang akan dihapus : ";
    cin>>erase;

    node *help=kepala;
    if (strcmp(help -> nama, erase)== 0){
      kepala = help -> next;
    }else{
      while (help != NULL){
        if ((strcmp(help -> next -> nama, erase)==0)&&(help->next ->nama,ekor ->nama)==0){
          help -> next = NULL;
          ekor = help;
          break;
        }else if (strcmp(help -> next -> nama,erase)==0){
          help -> next = help -> next -> next;
          break;
        }else{
          help = help ->next;
        }
      }
    }
  }
}
void tampil (){
  node *disp;
  disp = kepala;
  while (disp != NULL){
    cout<<"Nama\t: "<<disp-> nama <<endl;
    cout<<"Usia\t: "<<disp ->usia <<"\n"<<endl;
    disp = disp ->next;
  }
}
int main (){
  do{
    cout<<"\n1. Tambah data"<<endl;
    cout<<"2. Hapus data "<<endl;
    cout<<"3. Tampilkan data"<<endl;
    cout<<"4. Selesai"<<endl;
    cout<<"Masukkan pilihan anda = ";
    cin>>pilih;
    cout<<endl;
    if(pilih == 1){
      insertdata();
    }else if (pilih == 2){
      deldata();
    }else if (pilih == 3){
      tampil ();
      getchar();
    }else {
      break;
    }
  }
    while (pilih != 4);
    return 0;
}