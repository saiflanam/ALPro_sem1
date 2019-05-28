#include<iostream>
using namespace std;

string a[5];
char playernow = 'X';




void add(int i, int j, char player){
   a[i][j]=player;
   if(player=='X'){
      playernow='O';
   }else{
      playernow='X';
   }
}
void show(){
    for(int i=0;i<3;i++){
     cout << "============= \n";
     cout << "| ";
      for(int j=0;j<3;j++){
       cout << a[i][j] << " | ";
      }cout << endl;
    }cout << "============= \n";
}
int main(){
    string command;
    int x,y;

    a[0]=" ";
    a[1]=" ";
    a[2]=" ";

    for(int i=0;i<10000;i++){
        show();
        cin >> x >> y;
        add(x,y,playernow);

    }









}
