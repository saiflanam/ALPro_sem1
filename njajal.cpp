#include<iostream>
#include<string>
using namespace std;

int main(){
    int i=0,x=0;
    string kalimat;
    getline(cin,kalimat);

    for(i=0;i<kalimat.length()-1;i++){
        if(kalimat[i]==' '){
            x++;
        }
    }x++;
    cout << x << endl;
    return 0;
}
