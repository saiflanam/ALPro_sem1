#include<iostream>
using namespace std;

int main(){
   int n, x, i, t;
   cin >> n >> t;
   for(i=1;i<t;i++){
    x=n*2;
    n=x;
   }
   cout << n << endl;

}
