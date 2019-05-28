#include<iostream>
using namespace std;

int  main(){
     int jarak, x, y;
     int a,b;
     cin >> jarak;
     cin >> x >> y;
     a=x;
     b=y;

     while(x!=y){
        if(x>y){
            y+=b;
        }
        else if(y>x){
            x+=a;
        }
     }

     int hasil;
     hasil=jarak/x;
     cout << hasil << endl;

}
