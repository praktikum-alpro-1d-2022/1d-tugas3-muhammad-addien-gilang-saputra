#include <iostream>
#include <math.h>

using namespace std;
int main(){

    float Arus, Tegangan, Hambatan, I, V, R, hasil;

    cout << " ---Menghitung Arus Tegangan dan Hambatan--- " << endl;

    cout << "---menghitung arus---" << endl;
    cout << "Tegangan V=";
    cin  >> V;
    cout << "Hambatan R=";
    cin  >> R;
    I=V/R;
    cout << "hasil = " << I;
    cout << endl;


    cout << "---menghitung tegangan---" << endl;
    cout << "Arus I=";
    cin  >> I;
    cout << "Hambatan R=";
    cin  >> R;
    V=I*R;
    cout << "hasil = " << V;
    cout << endl;


    cout << "---menghitung hambatan---" << endl;
    cout << "Tegangan V=";
    cin  >> V;
    cout << "Arus I=";
    cin  >> I;
    R=V/I;
    cout << "hasil = " << R;














    return 0;

    }
