#include <iostream> //file header standar input output operasi c++.
#include <cstring> //untuk fungsi fungsi dan pengoperasian string.
#include <stdio.h> //menampilkan dan mencetak karakter.

using namespace std; //kode untuk mengenali cin dan cout serta fungsi/class/filenya.

int pilih; //deklarasi var integer.
struct node{  //pendeklarasian node dengan tipe data struct.
  char nama [50]; //deklarasi var nama dengan max 20 huruf.
  int usia; //deklarasi var integer.
  node *next = NULL; //perintah membuat node dengan pointer.
}; //penutup fungsi .

node *kepala = NULL; //menambahkan node dengan nilai NULL.
node *ekor = NULL; //menambahkan node dengan nilai NULL.

void insertdata(){ //fungsi untuk  menambahkan data.
  node *baru; //node baru untuk memesan tempat dimemori.
  baru = new node; //alokasi node baru menjadi memori dinamis.
  cout<<"Masukkan nama : "; //perintah teks untuk mencetak output nama.
  cin>>baru -> nama; //perintah menerima data nama yang dialokasikan pada node baru.
  cout<<"Masukkan usia : "; //perintah teks mencetak output usia.
  cin>>baru -> usia; //perintah menerima data usia yang dialokasikan pada node baru.

  if (kepala == NULL){  //pemberian kondisi jika belum ada data/ kepala = NULL.
    kepala = baru ; //data yang pertama ditambahkan akan menjadi kepala.
    kepala -> next = NULL; //menghubungkan kode kepala kepada akhir.
    ekor = kepala; //data kepala sama dengan menjadi ekor.
  }else if(kepala -> usia > baru -> usia){ //kondisi untuk dapat menambah data didepan saat data usia .lama lebih besar dari data usia yang baru ditambahkan.
    baru -> next = kepala; //menghubungkan kode baru kekepala.
    kepala = baru; //mengubah data kepala sama dengan data baru.
  }else if (ekor -> usia < baru -> usia){ //kondisi untuk menambah data dibelakang saat data usia lama lebih kecil dari pemberian data baru.
    ekor -> next =baru; //menghubungkan kode ekor ke kode baru.
    ekor = baru; //untuk mengalokasikan data kode ekor sama dengan baru.
    ekor -> next =NULL; //menghubungkan kode ekor ke NULL.
  }else{ //pemberian kondisi saat sudah ada 3/lebih data .
    node *help = kepala; //penambahan node help dengan pengalokasian kepala.
    while (kepala != NULL){ //apabila kepala tidak sama dengan Null/tidak dalam posisi ekor.
      if (help -> next -> usia > baru -> usia){  //pemberian kondisi apabila kode help menghubungkan ke usia yang lebih besar dari data baru yang ditambahkan.
        baru -> next = help -> next; //menghubungkan kode baru kekode help. 
        help -> next = baru; //menghubungkan kode help ke kode baru.
        break; //memberhentikan perintah.
      }else{ //kondisi apabila kepala sama dengan NULL/akhir.
        help = help -> next; //kode help untuk pembantu ke pointer next.
      } //penutup else pada while.
    } //penutup if pada while.
  } //penutup else pada void insertdata.
} //penutup voidinsertdata.

void deldata(){ //fungsi untuk menghapus data.
  if (kepala == NULL){ //kondisi apabila kode kepala bernilai NULL/tidak ada data.
    cout<<"DATA KOSONG !!!"<<endl; //perintah mencetak teks data kosong.
    getchar(); //mengembalikan nilai ke 0.
  }else{ //kondisi apabila kode kepala memiliki nilai.
    char erase[50]; //pendaklarasian var char dengan max 50 karakter untuk digunakan menghapus data.
    cout<<"Masukkan nama yang akan dihapus : ";  //output perintah nama yang akan dihapus.
    cin>>erase; //perintah untuk menerima data eraser yang diisi nama untuk dihapus.

    node *help=kepala; //node pointer help yang akan berada dikepala.
    if (strcmp(help -> nama, erase) == 0){ //untuk membandingkan string dengan string yang lainnya untuk menghapus depan apabila nama yang diinput berada didepan.
      kepala = help -> next; 
    }else{ //kondisi apabila nama yang diinput berada dibelakang..
      while (help != NULL){ //jika help tidak sama dengan NULL/nama yang dimasukkan berada dibelakang
        if ((strcmp(help -> next -> nama, erase)==0)&&(help->next ->nama,ekor ->nama)==0){  //pemberian kondisi untuk menghapus belakang.
          help -> next = NULL;
          ekor = help;
          break; //memberhentikan perintah.
        }else if (strcmp(help -> next -> nama,erase)==0){ //kondisi strcmp membandingkan string dengan string untuk menghapus nilai tengah.
          help -> next = help -> next -> next;
          break; //memberhentikan perintah.
        }else{
          help = help ->next;
        } //penutup else pada while.
      } //penutup while.
    } //penutup else pada else.
  } //penutup else fungsi deldata.
} //penutup fungsi deldata.

void tampil (){ //pemberian fungsi tampil untuk menampilkan.
  node *disp; //menambahkan node pointer display untuk menampilkan tumpukan data.
  disp = kepala; //pengarahan kode disp menjadi kepala.
  while (disp != NULL){ //kondisi apabila kode disp tidak sama dengan NULL.
    cout<<"Nama\t: "<<disp-> nama <<endl; //pencetakan kalimat dengan pemberian nilai pada disp nama.
    cout<<"Usia\t: "<<disp ->usia <<"\n"<<endl; //pencetakan kalimat pemberian nilai pada diso usia.
    disp = disp ->next; //menghubungkan disp ke antar kode selanjutnya.
  } //penutup while.
} //penutup fungsu tampil.

int main (){ //fungsi utama untuk dicompile terlebih dahulu.
  do{ //perintah eksekusi terlebih dahulu.
    system ("clear"); //untuk membersihkan tampilan layar.
    cout<<"\n1. Tambah data"<<endl; //mencetak kalimat.
    cout<<"2. Hapus data "<<endl; //mencetak kalimat.
    cout<<"3. Tampilkan data"<<endl; //mencetak kalimat.
    cout<<"4. Selesai"<<endl; //mencetak kalimat.
    cout<<"Masukkan pilihan anda = "; //mencetak kalimat.
    cin>>pilih; //Perintah menginput data pada var pilih untuk diarahkan ke fungsi-fungsi.
    cout<<endl; //pengaturan pindah baris/spasi.
    if(pilih == 1){ //kondisi apabila input pilih adalah 1.
      insertdata(); //dihubungkan kepada fungsi insertdata.
    }else if (pilih == 2){ //kondisi apabila input pilih selain 1 atau sama dengan 2.
      deldata(); //dihubungkan kepada fungsi deldata..
    }else if (pilih == 3){ //kondisi apabila input pilih selain 2 atau sama dengan 3
      tampil (); //dihubungkan kepada fungsi tampil .
      break;
      getchar(); //mengembalikan nilai ke 0.
    }else { //kondisi apabila input pilih selain 1,2,3 atau sama dengan 4.
      break; //memberhentikan perintah.
    } //penutup else pada do.
  } //penutup do.
    while (pilih != 4); //kondisi apabila input pilih tidak sama dengan 4 atau angka lain.
    return 0; // memberitahu mengembalikan kode telah selesai dieksekusi dengan exit code 0.
} //penutup fungsi main