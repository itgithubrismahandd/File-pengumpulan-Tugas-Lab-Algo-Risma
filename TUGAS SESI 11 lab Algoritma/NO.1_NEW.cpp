#include <iostream>
using namespace std;

int main(){
  int a, *c;
  cout<<"Input Bilangan = ";
  cin>>a;

  c= &a;

  cout<< *c <<" ";
  (*c)++;
  cout<< *c <<" ";
  (*c)--;
  cout<< *c <<" ";
  getchar();
}