#include<iostream>
using namespace std;

int main (){

    cout << "PROGRAM KONVERSI CELCIUS KE SUHU LAIN" << endl;
    cout << "=====================================" << endl;
    cout << endl;
    double c; double f;
    double r; double K;

cout << "Masukkan Suhu Celcius: "; cin >> c;
    f=c*9/5+32;
    r=c*4/5;
    K=c+273;
cout << endl;
cout << "Suhu Fahrenheit: " << f << endl;
cout << "Suhu Reamur    : " << r << endl;
cout << "suhu Kelvin    : " << K << endl;



}
