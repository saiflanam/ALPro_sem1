#include<iostream>
using namespace std;

int main(){
    char z = 'h';   // char pakai petik 1
    string s = "halodunia!"; // string pakai petik 2
    int i;

    // string adalah array, jadi bisa diakses per hurufnya dengan indeks
    cout << s[0] << endl; // outputnya adalah 'h'
    cout << s[2] << endl; // outputnya adalah 'l'

    // string adalah array dari char
    if(s[0] == z){
        cout << "perbandingan dengan variabel char = OK!" << endl;
    }

    // perhatikan lagi, char pakai petik 1
    if(s[1] == 'a'){ 
        cout << "perbandingan dengan char langsung = OK!" << endl;
    }

    // perhatikan lagi, jika yang dibandingkan adalah string s bukan s[0] (elemennya) maka
    // perbandingan yang terjadi adlaah perbandingan string, bukan perbandingan char
    // perhatikan, di bawah menggunakan petik 2
    if(s == "halodunia!"){ 
        cout << "perbandingan dengan string = OK!" << endl;
    }

    // gunakan .length() untuk mendapatkan informasi panjang string
    cout << s.length() << endl; // outputnya adalah 10, karena string "halodunia!" terdiri dari 10 karakter

    // s.length() bisa digunakan pada for
    for(i=0;i<=s.length()-1;i++){
        cout << s[i] << endl;
    }

}