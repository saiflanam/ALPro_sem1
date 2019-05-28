#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    int a,b,c,d,e,f,g,h;
    string angka[13]={"se","satu","dua","tiga","empat","lima","enam","tujuh","delapan","sembilan","sepuluh","sebelas","belas"};

    cin >> n;

    if(n>999){
    a=n/1000;
    f=n%1000;
    b=f/100;
    g=f%100;
    c=g/10;
    h=g%10;
    }else if(n<1000&&n>99){
    b=n/100;
    g=n%100;
    c=g/10;
    h=g%10;
    }else if(n<100&&n>19){
    c=n/10;
    h=n%10;
    }else if(n<20&&n>9){
    d=n-10;
     if(d==0){
        cout << angka[10] << endl;
     }else if(d==1){
        cout << angka[11] << endl;
     }else if(d==2){
        cout << angka[2] << " belas " << endl;
     }else if(d==3){
        cout << angka[3] << " belas " << endl;
     }else if(d==4){
        cout << angka[4] << " belas " << endl;
     }else if(d==5){
        cout << angka[5] << " belas " << endl;
     }else if(d==6){
        cout << angka[6] << " belas " << endl;
     }else if(d==7){
        cout << angka[7] << " belas " << endl;
     }else if(d==8){
        cout << angka[8] << " belas " << endl;
     }else if(d==9){
        cout << angka[9] << " belas " << endl;
     }
    }if(n<10){
      h=n;
      if(h==1){
        cout << angka[1] << endl;
      }else if(h==2){
        cout << angka[2] << endl;
      }else if(h==3){
        cout << angka[3] << endl;
      }else if(h==4){
        cout << angka[4] << endl;
      }else if(h==5){
        cout << angka[5] << endl;
      }else if(h==6){
        cout << angka[6] << endl;
      }else if(h==7){
        cout << angka[7] << endl;
      }else if(h==8){
        cout << angka[8] << endl;
      }else if(h==9){
        cout << angka[9] << endl;
      }
    }


    if(a==1){
    cout << angka[0] << "ribu";
    }else if(a==2){
    cout << angka[2] << " ribu ";
    }else if(a==3){
    cout << angka[3] << " ribu ";
    }else if(a==4){
    cout << angka[4] << " ribu ";
    }else if(a==5){
    cout << angka[5] << " ribu ";
    }
    if(b==1){
    cout << angka[0] << "ratus";
    }else if(b==2){
    cout << angka[2] << " ratus ";
    }else if(b==3){
    cout << angka[3] << " ratus ";
    }else if(b==4){
    cout << angka[4] << " ratus ";
    }else if(b==5){
    cout << angka[5] << " ratus ";
    }else if(b==6){
    cout << angka[6] << " ratus ";
    }else if(b==7){
    cout << angka[7] << " ratus ";
    }else if(b==8){
    cout << angka[8] << " ratus ";
    }else if(b==9){
    cout << angka[9] << " ratus ";
    }
    if(c==2){
    cout << angka[2] << " puluh ";
    }else if(c==3){
    cout << angka[3] << " puluh ";
    }else if(c==4){
    cout << angka[4] << " puluh ";
    }else if(c==5){
    cout << angka[5] << " puluh ";
    }else if(c==6){
    cout << angka[6] << " puluh ";
    }else if(c==7){
    cout << angka[7] << " puluh ";
    }else if(c==8){
    cout << angka[8] << " puluh ";
    }else if(c==9){
    cout << angka[9] << " puluh ";
    }
    if(g<20&&g>9){
    d=g-10;
     if(d==0){
        cout << angka[10] << endl;
     }else if(d==1){
        cout << angka[11] << endl;
     }else if(d==2){
        cout << angka[2] << " belas " << endl;
     }else if(d==3){
        cout << angka[3] << " belas " << endl;
     }else if(d==4){
        cout << angka[4] << " belas " << endl;
     }else if(d==5){
        cout << angka[5] << " belas " << endl;
     }else if(d==6){
        cout << angka[6] << " belas " << endl;
     }else if(d==7){
        cout << angka[7] << " belas " << endl;
     }else if(d==8){
        cout << angka[8] << " belas " << endl;
     }else if(d==9){
        cout << angka[9] << " belas " << endl;
     }
     }
     if(h==1){
        cout << angka[1] << endl;
      }else if(h==2){
        cout << angka[2] << endl;
      }else if(h==3){
        cout << angka[3] << endl;
      }else if(h==4){
        cout << angka[4] << endl;
      }else if(h==5){
        cout << angka[5] << endl;
      }else if(h==6){
        cout << angka[6] << endl;
      }else if(h==7){
        cout << angka[7] << endl;
      }else if(h==8){
        cout << angka[8] << endl;
      }else if(h==9){
        cout << angka[9] << endl;
      }
}

