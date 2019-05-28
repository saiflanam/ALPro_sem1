#include<iostream>
using namespace std;

int main(){
    int a, b, i;
    a=1800;
    b=1900;
    for(i=0;i<=150;i++){
        if(i*i>=1800&&i*i<=1900){
            int tahun = i*i;
            int usia  = i;
            cout << usia << " " << tahun << endl;
            cout << tahun-usia << endl;
            cout << "----------\n" ;

        }
    }







}
