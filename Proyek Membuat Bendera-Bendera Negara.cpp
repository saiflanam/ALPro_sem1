#include <iostream>
using namespace std;

int main (){

    int jerman = 0, indonesia = 0, irlandia = 0, italia = 0, perancis = 0;
    int biru=0, hijau=0, hitam=0, jingga=0, kuning=0, merah=0, putih=0;

    string b1, b2, b3, b4;

    cin >> b1 >> b2 >> b3 >> b4;

    if (b1 == "biru"){
        biru++;
    } else if (b1 == "hijau"){
        hijau++;
    } else if (b1 == "hitam"){
        hitam++;
    } else if (b1 == "jingga"){
        jingga++;
    } else if (b1 == "kuning"){
        kuning++;
    } else if (b1 == "merah"){
        merah++;
    } else if (b1 == "putih"){
        putih++;
    }
    if (b2 == "biru"){
        biru++;
    } else if (b2 == "hijau"){
        hijau++;
    } else if (b2 == "hitam"){
        hitam++;
    } else if (b2 == "jingga"){
        jingga++;
    } else if (b2 == "kuning"){
        kuning++;
    } else if (b2 == "merah"){
        merah++;
    } else if (b2 == "putih"){
        putih++;
    }
    if (b3 == "biru"){
        biru++;
    } else if (b3 == "hijau"){
        hijau++;
    } else if (b3 == "hitam"){
        hitam++;
    } else if (b3 == "jingga"){
        jingga++;
    } else if (b3 == "kuning"){
        kuning++;
    } else if (b3 == "merah"){
        merah++;
    } else if (b3 == "putih"){
        putih++;
    }
    if (b4 == "biru"){
        biru++;
    } else if (b4 == "hijau"){
        hijau++;
    } else if (b4 == "hitam"){
        hitam++;
    } else if (b4 == "jingga"){
        jingga++;
    } else if (b4 == "kuning"){
        kuning++;
    } else if (b4 == "merah"){
        merah++;
    } else if (b4 == "putih"){
        putih++;
    }

    if (hitam >= 1 && merah >= 1 && kuning >= 1){
        cout << "Jerman" << endl;
        jerman++;
    }if (merah >= 1 && putih >= 1){
        cout << "Indonesia" << endl;
        indonesia++;
    }if (hijau >= 1 && putih >= 1 && jingga >= 1){
        cout << "Irlandia" << endl;
        irlandia++;
    }if (hijau >= 1 && putih >= 1 && merah >= 1){
        cout << "Italia" << endl;
        italia++;
    }if (biru >= 1 && putih >= 1 && merah >= 1 ){
        cout << "Perancis" << endl;
        perancis++;
    }if (jerman <1 && indonesia <1 && irlandia <1 && italia <1 && perancis <1 ){
        cout << "Tidak bisa membuat bendera" << endl;
    }

}
