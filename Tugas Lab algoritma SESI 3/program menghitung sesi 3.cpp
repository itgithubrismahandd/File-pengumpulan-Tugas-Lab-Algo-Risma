#include <iostream>
#define phi 3.14
using namespace std;

int main ()
{
    double r, t, luas, volume;
    cout <<"Program Menghitung luas lingkaran dan volume tabung";
    cout <<"\nRisma Handayani";
    cout <<"\nNilai r = ";
    cin >> r;
    cout <<"Nilai t = ";
    cin >> t;

    luas = phi*r*r;
    volume = phi*r*r*t;

    cout << "Hasil dari perhitungan luas lingkarannya yaitu= "<<luas<<endl;
    cout << "Hasil dari perhitungan volume tabungnya yaitu = "<<volume<<endl;

    return 0;
}