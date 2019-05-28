#include<iostream>
using namespace std;

int main(){
    string pakaicoklat;
    string pakaisusu;

    cout << "PAKAI COKELAT ? = ";
    cin >> pakaicoklat;
    cout << endl;

    cout << "PAKAI SUSU ? = ";
    cin >> pakaisusu;
    cout << endl;

    if(pakaicoklat=="YA"){
        cout << "TAMBAH COKLAT" << endl;
        cout << "TAMBAH CERES" << endl;
    }if(pakaisusu=="YA"){
          cout << "TAMBAH SUSU" << endl;
          cout << "TAMBAH KACANG" << endl;
    }if(pakaicoklat!="YA"&&pakaisusu!="YA"){
         cout << "TAMBAH KEJU" << endl;
    }

    cout << "TAMBAH GULA" << endl;
    cout << "SAJIKAN" << endl;
}
