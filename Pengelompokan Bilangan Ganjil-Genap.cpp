#include<iostream>
using namespace std;

int main (){
    cout << "Bilagan Ganjil Genap" << endl;
    cout << "====================" << endl;

    int x;
    cout << "Masukkan bilangan : "; cin >> x;

    if(x%2==0){
        cout << "Genap"; // JIKA Ya
    }else{
        cout << "Ganjil"; // Jika Tidak
    }


}
