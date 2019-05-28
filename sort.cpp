#include<iostream>
using namespace std;

int main(){
    int x[10]={15,8,78,20,25,18,7,35,41,3};

    for(int i=9;i>0;i--){
        int max=i;
        for(int j=i-1;j>=0;j--){
            if(x[max]>x[j]){
                max=j;
            }
        }
        int temp;
        temp=x[i];
        x[i]=x[max];
        x[max]=temp;
    }
    for(int i=0;i<=9;i++){
        cout<<x[i]<<" ";
    }
    return 0;
}
