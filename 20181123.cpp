#include<iostream>
using namespace std;

int main(){
    char c = 'x';
    cout << c << endl;
    cout << (int)c << endl;

    string s="HaLOduNia";
    for(int i=0;i<s.length();i++){
        if(s[i]>=65&&s[i]<=90){
            s[i]+=32;
        }
    }

    cout << s << endl;

}
