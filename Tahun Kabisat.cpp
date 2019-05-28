#include<iostream>
using namespace std;

int main(){
    int t;
    cout << "PERHITUNGAN TAHUN KABISAT" << endl;
    cout << "=========================" << endl;
    cout << "MASUKKAN TAHUN : ";
    cin >> t;

    if(t%400==0){
        cout << "TAHUN KABISAT" << endl;
    }else if(t%100==0){
        cout << "BUKAN TAHUN KABISAT" << endl;
    }else if(t%4==0&&t%100!=0){
        cout << "TAHUN KABISAT" << endl;
    }else{
        cout << "BUKAN TAHUN KABISAT" << endl;
    }
}

