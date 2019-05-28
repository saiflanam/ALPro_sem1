#include<iostream>
using namespace std;

int main(){
    int i, a, b;
    cin >> a >> b;
    for(i=a;i<=b;i++){
        cout << "----" << endl;
        if(i==1875){
            continue;
        }

        cout << i << endl;

        if(i==1890){
            break;
        }
    }







}
