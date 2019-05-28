#include<iostream>
using namespace std;

int main(){
    int jumlah, nomor, waktu, min=0, waktumin;
    string pos1, pos2;

    cin >> jumlah;
    for(int i=0;i<jumlah;i++){
        cin >> nomor >> waktu >> pos1 >> pos2;
        if(pos1=="berhasil"&&pos2=="berhasil"){
            if(min==0){
                min=nomor;
                waktumin=waktu;
            }
            else if(waktu<waktumin){
                min=nomor;
                waktumin=waktu;
            }
        }
        else if(min==0){
            cout<<"Tidak ada pemenang" << endl;
        }
    }
    cout << min << endl;
    return 0;



}
