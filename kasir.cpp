#include<iostream>
using namespace std;

int main(){
    int harga[1000], banyak[1000];
    string nama[1000], ismember;
    int i, nbanyak=0;  // variabel nbanyak untuk menghitung jumlah barang yang dibeli
    double total=0, uang, kembalian;

    cout << "INPUTKAN NAMA-HARGA-BANYAK:" << endl;
    for(i=0;i<1000;i++){  // input dibuat dinamis, sehingga banyak barang yang dibeli bisa berbeda-beda
        cin >> nama[i] >> harga[i] >> banyak[i];
        if(nama[i]=="-"){ // tanda semua barang yang dibeli sudah selesai diinputkan
            break;
        }else{
            nbanyak = nbanyak + 1;
        }
    }

    cout << "APAKAH MEMBER? ";
    cin >> ismember;

    for(i=0;i<=nbanyak-1;i++){   // perhitungan total harga barang yang dibeli
        total = total+harga[i]*banyak[i];
    }

    if(ismember=="ya"){
        total = total*95/100; // potongan diskon
    }else{
        total=total;
    }

    cout << "DIBAYAR: ";
    cin >> uang;
    kembalian = uang - total; // hitung kembalian

    // baris berikutnya adalah untuk mencetak struk
    cout << endl << endl;
    cout << "==========================" << endl;
    cout << "~~~~~~~TOKO PAK BUDI~~~~~~" << endl;
    cout << "==========================" << endl;
    cout << endl;
    for(i=0;i<nbanyak;i++){
        cout << nama[i] << "   " << banyak[i] << "   " << harga[i] << "   " << (harga[i]*banyak[i]) << endl;
    }
    cout << endl;
    cout << "==========================" << endl;
    cout << endl;
    cout << "Total     = " << total << endl;
    cout << "Dibayar   = " << uang << endl;
    cout << "Kembalian = " << kembalian << endl;
    cout << endl;
    cout << "==========================" << endl;
    cout << "======TERIMA KASIH========" << endl;

}
