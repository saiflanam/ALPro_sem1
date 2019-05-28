#include<iostream>
using namespace std;

int main (){
    cout << "                                                  PROGRAM PENAMBAHAN WAKTU                                             " << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;

    int j,m,t;
    int a,b;
    int c,d;

    cout << "Masukkan jam awal       : "; cin >> j;
    cout << "Masukkan menit awal     : "; cin >> m;
    cout << "Masukkan tambahan menit : "; cin >> t;
    cout << endl;

    cout << "Waktu awal : " << j << ":" << m << endl;

    j=j*60;
    a=j+m;
    b=a+t;
    c=b/60;
    c=c%24;
    d=b%60;

    cout << "Waktu Baru = " << c << ":" << d << endl;



}
