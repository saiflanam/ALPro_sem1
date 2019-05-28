#include<iostream>
using namespace std;

//nama ... parameter
void salam(string nama, string waktu){
    if(nama[0]>=97&&nama[0]<=122){
        nama[0]-=32;
    }
    cout << "Selamat " << waktu << " " << nama << " (/^.^)/" << endl;
}

//tipedataoutput
double luastrp(int a, int b, int t){
    double luas = (a+b)*t*0.5;
    return luas;
}

int main(){
    salam("anam","pagi");// >> "Anam"
    salam("Afida","sore");// >> "Afida"

    double hasil=luastrp(5,7,9);
    cout << hasil << endl;
}
