#include<iostream>
using namespace std;

char papan[3][3];
char simbol='X';

void resetPapan(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            papan[i][j]=' ';
        }
    }
}

bool add(char simbol, int x, int y){
    if(x<0 || x>3){
        return false;
    }else if(y<0 || y>3){
        return false;
    }else if(papan[x][y]==' '){
        papan[x][y]=simbol;
    }else{
        return false;
    }

}
void show(){
    cout << "============= \n";
    for(int i=0;i<3;i++){
        cout << "| ";
        for(int j=0;j<3;j++){
            cout << papan[i][j] << " | ";
        }cout << endl;
    cout << "============= \n";
    }
}

checkWin(){
    //horisontal
    if(papan[0][0]==papan[0][1]&&papan[0][0]==papan[0][2]){return papan[0][0];}
    if(papan[1][0]==papan[1][1]&&papan[1][0]==papan[1][2]){return papan[1][0];}
    if(papan[2][0]==papan[2][1]&&papan[2][0]==papan[2][2]){return papan[2][0];}

    //vertikal
    if(papan[0][0]==papan[1][0]&&papan[0][0]==papan[2][0]){return papan[0][0];}
    if(papan[1][0]==papan[1][1]&&papan[1][0]==papan[1][2]){return papan[0][1];}
    if(papan[2][0]==papan[2][1]&&papan[2][0]==papan[2][2]){return papan[0][2];}

    //diagonal kanan
    if(papan[0][0]==papan[1][1]&&papan[0][0]==papan[2][2]){return papan[0][0];}

    //diagonal kiri
    if(papan[0][2]==papan[1][1]&&papan[0][2]==papan[2][0]){return papan[0][2];}
}
 int main(){
    resetPapan();
    show();
    int x,y;
    for(int i=0;i<100;i++){
    cin >> x >> y;
    add(simbol,x,y);
    show();
    }

    return 0;
}
