#include<iostream>
using namespace std;

int main(){
    int i,a,b,jumlah=0;
    cin >> a >> b;
    cout << "=============================\n";
    for(i=a;i<=b;i++){
        if(i%400==0){
            cout << i << endl;
            jumlah++;
            }else if(i%4==0&&i%100!=0){
                cout << i << endl;
                jumlah++;
        }
    }
    cout << "\n";
    cout << "Jumlah tahun kabisat : " << jumlah << " " << "tahun" << endl;
}
