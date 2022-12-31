#include<iostream> //file header standar operasi c++.
#define maxstack 7 //mendefinisian nilai tetap untuk max data array yang akan dipakai stack.
using namespace std; //digunakan untuk mengenali kode cin dan cout dalam fungsi/class/filenya juga agar tidak menggunakan fungsi std pada fungsi main.

struct STACK{ //pendeklarasian fungsi global Stack.
 int s[7]; //variabel array dengan nilai sebanyak 7 kolom indeks.
 int top; //variabel untuk menambahkan data ke tumpukan ruang kosong selanjutnya.
}; //penutup dari deklarasi fungsi stack.
struct STACK st; //pendeklarasian bahwa var st merupakan object stack/

void push(int data){ //fungsi push yang akan digunakan difungsi main.
 if(st.top==maxstack){ //pemberian kondisi apabila nilai st.top sama dengan 7.
 cout<<"data penuh"<<endl; //outuput untuk kondisi if push.
 }else{ //pemberian kondisi else apabila nilai st.top tidak sama dengan maxstack.
 st.top = st.top + 1; //memberi nilai st.top akan ditambah 1 sampai mencapai maxstack.
 st.s[st.top] = data; //memasukan var array s yang berisi nilai st.top
 cout<<"data ditambahkan"<<endl; //output untuk kondisi else push.
 } //penutup else.
} //penutup fungsi push.

void pop(){ //pendeklarasian fungsi pop.
 if(st.top==-1){ //pemberian kondisi if apabila nilai st.top berada pada indeks ke 0.
 cout<<"data kosong"<<endl; //output untuk kondisi if pop.
 }else{ //pemberian kondisi else apabila nilai if salah.
 st.top = st.top-1; //menghubungkan nilai st.top bernilai yang akan dikurangi 1.
 cout<<"data dihapus"<<endl; //output untuk kondisi else pop.
  } //penutup else.
}//penutup fungsi pop.

void show(){ //pendeklarasian fungsi show untuk ditampilkan pada fungsi main.
 if(st.top==-1){ //pemberian kondisi if apabila nilai st.top berada pada indeks ke 0.
 cout<<"data kosong, tidak ada yang bisa ditampilkan"; //output untuk kondisi if
 }else{ //pemberian kondisi apabila kondisi if tidak sesuai.
  for(int x=0;x <= st.top;x++){ //perulangan yang digunakan apabila kondisi merupakan else.
    cout<<st.s[x]<<"=>"; //output apabila for benar dan bertambah sesuai syarat.
  } //penutup for.
   cout<<endl;
  } //penutup else.
 } //penutup fungsi show.

int main(){ //pendeklarasian fungsi utama untuk compiler mengcompile dan ditampilkan dilayar.
 st.top = -1; //pemberian fungsi untuk memastikan nilai berada diposisi indeks ke 0.
 push(1); //memanggil fungsi push dengan memberikan nilai 1.
 push(2); //memanggil fungsi push dengan memberikan nilai 2.
 push(3); //memanggil fungsi push dengan memberikan nilai 3.
 push(4); //memanggil fungsi push dengan memberikan nilai 4.
 push(5); //memanggil fungsi push dengan memberikan nilai 5.
 push(6); //memanggil fungsi push dengan memberikan nilai 6.
 push(7); //memanggil fungsi push dengan memberikan nilai 7.
 pop(); //memanggil fungsi pop untuk dicetak sesuai dengan kondisi pada fungsi pop.
 show(); //memanggil fungsi show untuk dicetak sesuai kondisi.
} //penutup fungsi int main program c++.