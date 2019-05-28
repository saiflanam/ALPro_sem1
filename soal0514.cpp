#include<iostream>
using namespace std;

int main(){
    int n,posisi=0;
    cin >> n;

    int x[n];


    for(int i=1;i<=n;i++){
        cin >> x[i];
    }

    for(int i=1;i<=n;i++){
        if(x[i]<165){
            posisi+=1;
        }
    }

    cout << posisi+1 << endl;
}
