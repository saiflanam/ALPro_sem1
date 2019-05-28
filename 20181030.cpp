#include<iostream>
using namespace std;

int main(){
    int i,j, a,b;

    cin >> a >> b;

    for(i=1;i<=8;i++){
        for(j=1;j<=8;j++){
            if(i==a&&j==b){
                cout << "O";
            }else if(i==a||j==b){
                cout << "X";
            }else{
                cout << ".";
            }

        }
        cout << endl;
    }








}
