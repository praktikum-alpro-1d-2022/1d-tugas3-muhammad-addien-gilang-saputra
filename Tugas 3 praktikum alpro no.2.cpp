#include <iostream>
using namespace std;

float NilaiPraktikum, UTS, UAS, NilaiAkhir;

int main() {
NilaiPraktikum = 75;
cout<<"Nilai Praktikum : "<<NilaiPraktikum<<endl;

UTS = 70;
cout<<"Nilai UTS : "<<UTS<<endl;

UAS = 88;
cout<<"Nilai UAS : "<<UAS<<endl;
NilaiAkhir = ((NilaiPraktikum * 0.2)+(UTS * 0.3)+(UAS * 0.5));
cout<<"Jadi, Nilai Akhirnya Yaitu "<<NilaiAkhir<<endl;
}
