#include<iostream>
using namespace std;

int main(){

    short i, n;
    string s;
    cin >> n >> s;

    cout << "#";
    for(i=0;i<=n+1;i++){
        cout << "#";
    }
    cout << "#";
    cout << endl;

    cout << "#";
    for(i=0;i<n+2;i++){
        cout << " ";
    }
    cout << "#";
    cout << endl;

    cout << "#"<< " " << s << " " << "#" << endl;

    cout << "#";
    for(i=0;i<n+2;i++){
        cout << " ";
    }
    cout << "#";
    cout << endl;

    cout << "#";
    for(i=0;i<=n+1;i++){
        cout << "#";
    }
    cout << "#";
    cout << endl;


    return 0;
}
