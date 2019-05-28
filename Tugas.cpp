#include <iostream>
using namespace std;

double pi=3.1415;

void notfound(){
    cout << "Eror bentuk tidak dikenali" << endl;
}
 int pangkat(int a,int b){
    /* subprogram untuk menghitung a^b */
    int hasil=1;
    for(int i=0;i<b;i++){
        hasil*=a;
    }
    return hasil;
}

 double luas_lingkaran(int r){
    /* subprogram untuk menghitung luas lingkaran */
    return pi*pangkat(r,2);
}

 int luas_persegi(int s){
    /* subprogram untuk menghitung luas persegi */
    return pangkat(s,2);
}

 double luas_segitiga(int a, int t){
    /* subprogram untuk menghitung luas segitiga */
    return a*t*0.5;
}

 int lingkaran(){
    int r;
    cout << "Silakan inputkan panjang jari-jari = "; cin >> r;
    cout << "=================================\n";
    cout << "Luas = ";
    cout << luas_lingkaran(r) << endl;
}

 int persegi(){
    int s;
    cout << "Silakan inputkan panjang sisi = "; cin >> s;
    cout << "=================================\n";
    cout << "Luas = ";
    cout << luas_persegi(s) << endl;
}

 int segitiga(){
    int a,t;
    cout << "Silakan inputkan panjang alas = "; cin >> a;
    cout << "Silakan inputkan panjang tinggi = "; cin >> t;
    cout << "=================================\n";
    cout << "Luas = ";
    cout << luas_segitiga(a,t) << endl;
}

 void display(){
    string s;
    cout << "Selamat datang di program menghitung luas area\n";
    cout << "Silakan beritahu bentuk apa yang ingin dihitung luasnya:\n";
    cin >> s;
    if(s=="segitiga"){
        segitiga();
    }else if(s=="persegi"){
        persegi();
    }else if(s=="lingkaran"){
        lingkaran();
    }else{
        notfound();
    }
}


int main()
{
    display();
    return 0;
}
