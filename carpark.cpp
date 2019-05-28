#include<iostream>
using namespace std;

int main(){
    int area[4][5] = {{0,0,0,0,0},
                      {0,0,0,0,1},
                      {0,0,1,0,0},
                      {0,0,0,0,0}};
    string command;
    int baris,kolom;
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            area[i][j]=0;
        }
    }
    area[1][4]=1;
    area[2][2]=1;

    for(int k=0;k<10000;k++){
        cin >> command;
        if(command=="stop"){
            break;
        }
        if(command=="show"){
            for(i=0;i<4;i++){
                for(j=0;j<5;j++){
                cout << area[i][j] << " ";
                }
            cout << endl;
            }
        }
        else if(command=="in"){
            for(i=0;i<4;i++){
                for(j=0;j<5;j++){
                    if(area[i][j]==0){
                        baris=i;
                        kolom=j;
                    }
                }
            }
            cout << "Silahkan ke baris " << baris+1 << " kolom " << kolom+1 << endl;
            area[baris][kolom]=1;
        }
        else if(command=="out"){
            cin >> baris >> kolom;
            baris-=1;
            kolom-=1;
            area[baris][kolom]=0;
        }
    }






}
