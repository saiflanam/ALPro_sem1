#include<iostream>
#include<string>
using namespace std;

int main(){
    int i, s=0;
    string kalimat;
    getline(cin,kalimat);

    for(i=0;kalimat[i];i++){
        if(isspace(kalimat[i])||ispunct(kalimat[i])){
           s++;}
    }s++;
    cout << s << endl;


}
