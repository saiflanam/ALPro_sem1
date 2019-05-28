#include<iostream>
using namespace std;

int main(){
    int a=1,b=1;
    int i,c,n;
    cout << "Masukkan nilai n : ";
    cin >> n;
    for (i=3;i<=n;i++)
    {
        c=a+b;a=b;b=c;
    }
    cout << "Jumlah * yang dicetak : " << c;

}
