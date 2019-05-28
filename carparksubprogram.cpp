#include<iostream>
using namespace std;

int area[4][5];
void show(){
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            cout << area[i][j] << " ";
        }
        cout << endl;
    }
}

void in(){
    int baris, kolom;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if(area[i][j]==0){
            baris=i;
            kolom=j;
            }
        }
    }
    cout << "Silahkan ke baris " << baris+1 << " kolom " << kolom+1 << endl;
    area[baris][kolom]=1;
}

void out(int baris, int kolom){
    baris-=1;
    kolom-=1;
    area[baris][kolom]=0;
}

int main(){

int baris, kolom;
string command;
for(int k=0;k<10000;k++){
    cin >> command;
    if(command=="stop"){
        break;
    }
    else if(command=="show"){
        show();
    }
    else if(command=="in"){
        in();
    }
    else if(command=="out"){
        cin >> baris >> kolom;
        out(baris,kolom);
    }

return 0;
}





}
