#include<iostream>
using namespace std;

int main(){
    short a,b,c;
    short i=0;
    cin >> a;
    cin >> b >> c;

    while(a>=2&&b>=3&&c>=2){
    a-=2;b-=3;c-=2;
    i++;
    }cout << i << endl;



}
