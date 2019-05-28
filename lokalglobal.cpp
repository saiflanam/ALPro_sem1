#include<iostream>
using namespace std;

int y;//global
double x;
int a[100];
string s;

int main(){
    cout << "GLOBAL : " << endl;
    cout << y << endl;
    cout << x << endl;
    cout << a[87] << endl;
    cout << "-" << s << "+" << endl;

    int y;//lokal
    double x;
    int a[100];

    cout << "LOKAL : " << endl;
    cout << y << endl;
    cout << x << endl;
    cout << a[100] << endl;

}
