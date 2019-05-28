#include<iostream>
#include<string>
using namespace std;

int main(){
   int a=0,i=0,u=0,e=0,o=0,x=0;

   string kalimat;
   getline(cin,kalimat);

   do{
    if(kalimat[x]=='a'){
    a++;
   }if(kalimat[x]=='i'){
    i++;
   }if(kalimat[x]=='u'){
    u++;
   }if(kalimat[x]=='e'){
    e++;
   }if(kalimat[x]=='o'){
    o++;
   }x++;
   }while(x<=kalimat.length()-1);

   cout << "a = " << a << endl;
   cout << "i = " << i << endl;
   cout << "u = " << u << endl;
   cout << "e = " << e << endl;
   cout << "o = " << o << endl;

   return 0;







}

