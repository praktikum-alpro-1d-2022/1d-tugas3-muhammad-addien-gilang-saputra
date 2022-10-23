#include <iostream>
#include <math.h>

using namespace std;
    int main (){

    float b, x, c, pangkat, hasil;

    cout << " ---Buat program untuk menyelesaikan rumus---" << endl;

    b = 25;
    x = 15;
    c = 20;
    pangkat = 2;

    cout << " b= " << b << endl;
    cout << " x= " << x << endl;
    cout << " c= " << c << endl;
    cout << "Y= bx^2 +0.5X -c ";
    cout << endl;

    hasil = (pow(x,pangkat)*b + (0.5*x)-c);
    cout << "Y=" << hasil;

    return 0;


    }
