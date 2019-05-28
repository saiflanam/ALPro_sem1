#include<iostream>
using namespace std;

int main(){
    int day,m,n;//tahun 1980
    int bulan[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    cin >> day >> m >> n;

    day=day+n;
    while(day>bulan[m-1])
    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
        m++;
        day-=31;
    }else if(m==2){
        m++;
        day-=29;
    }else if(m==4||m==6||m==9||m==11){
        m++;
        day-=30;
    }

    cout << day << " " << m << endl;


}
