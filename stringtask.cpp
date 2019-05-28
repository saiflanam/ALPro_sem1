#include<iostream>
using namespace std;

void kapital(char a){
    if(a!=65&&a!=69&&a!=73&&a!=79&&a!=85&&a!=89){
        a+=32;
        cout << "."<<a;
    }
}

void alfabet(char a){
    if(a!=97&&a!=101&&a!=105&&a!=111&&a!=117&&a!=121){
        cout << "."<<a;
    }
}

int main(){
    string w;
    cin >> w;
    for(int i=0;i<w.length();i++){
        if(w[i]>=65&&w[i]<=90){
            kapital(w[i]);
        }else if(w[i]>=97&&w[i]<=122){
            alfabet(w[i]);
        }
    }



}
