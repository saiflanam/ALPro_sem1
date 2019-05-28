#include<iostream>
using namespace std;

int main(){
    string kata;
    cin >> kata;
    for(int i=0;i<=kata.length()-1;i++){
        if(kata[i]>109){
            kata[i]-=13;
        }else{
            kata[i]+=13;
        }

    }
    for(int i=0;i<=kata.length()-1;i++){
        cout << kata[i];
    }


    return 0;
}
