#include<iostream>
using namespace std;

string digit[4]={"", " puluh", " ratus", " ribu"};
string angka[10]={""," satu"," dua"," tiga"," empat"," lima"," enam"," tujuh"," delapan"," sembilan"};
string angka2[10]={""," se"," dua"," tiga"," empat"," lima"," enam"," tujuh"," delapan"," sembilan"};
string belasan[3]={" sepuluh"," sebelas", " belas"};
string ans="";
int i=0, temp;
int angkamulamula;

void proses (int number){

    if (i==0){
        angkamulamula = number;
    }

    temp = number%10;

    if (temp!=0){
        ans.insert(0,digit[i]);
    }

    if (i<2){
        ans.insert(0,angka[temp]);
    } else {
        if (temp==1){
            ans.erase(0,1);
        }
        ans.insert(0,angka2[temp]);
    }
    number /= 10;

    if (temp==1 && i==1){
        if (angkamulamula%10==0){
            ans.erase(0,ans.length());
            ans.insert(0,belasan[0]);
        } else if (angkamulamula%10==1){
            ans.erase(0,ans.length());
            ans.insert(0,belasan[1]);
        } else {
            ans.erase(0,ans.length());
            ans.insert(0,belasan[2]);
            cout << ans << endl;
            ans.insert(0,angka[angkamulamula%10]);
            cout << ans << endl;
        }
    }

    if (number>0){
        i++;
        proses(number);
    } else ans.erase(0,1);
}

int main (){
    int number;

    cin >> number;
    proses(number);
    cout << ans << endl;
    return 0;
}
