#include<iostream>
using namespace std;

int main (){
    int x,y,z,x1,y1,z1;

    cout << "Masukkan angka = ";cin >> x;
    x1 = x/100;
    y=x%100;y1 = y/10;
    z=y%10 ;z1 = z/1;

    cout << "Tampilkan : " << endl;
    cout << x1 << " Ratusan " << endl;
    cout << y1 << " Puluhan " << endl;
    cout << z1 << " Satuan " << endl;




}
