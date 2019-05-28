#include<iostream>
using namespace std;

int main(){
    string nama[100];
    int mtk[100];
    int ipa[100];
    int ind[100];
    int m=0,p=0,d=0;
    int jml, mtkmax,ipamax,indmax;
    double avrmtk, avripa, avrind;

    cout << "Total Siswa : ";
    cin >> jml;
    cout << "INPUTKAN NILAI(NAMA - MTK - IPA - INDO):" << endl;
    for(int i=0;i<jml;i++){
        cin >> nama[i] >> mtk[i] >> ipa[i] >> ind[i];
    }

    cout << endl;

    for(int i=0;i<jml;i++){


    }


    for(int i=0;i<jml;i++){
        m+=mtk[i];
    }avrmtk=(double)m/jml;

     for(int i=0;i<jml;i++){
        p+=ipa[i];
    }avripa=(double)p/jml;

     for(int i=0;i<jml;i++){
        d+=ind[i];
    }avrind=(double)d/jml;

    mtkmax=mtk[0];
    for(int i=0;i<jml;i++){
        if(mtk[i]>mtkmax)
            mtkmax=mtk[i];
    }

    ipamax=ipa[0];
    for(int i=0;i<jml;i++){
        if(ipa[i]>ipamax)
            ipamax=ipa[i];
    }

    indmax=ind[0];
    for(int i=0;i<jml;i++){
        if(ind[i]>indmax)
            indmax=ind[i];
    }




    cout << "Rata-Rata Matematika             = " << avrmtk << endl;
    cout << "Rata-Rata IPA                    = " << avripa << endl;
    cout << "Rata-Rata Bahasa Indonesia       = " << avrind << endl;
    cout << "Rata-Rata Total                  = " <<(avrmtk+avripa+avrind)/3<< endl;
    cout << endl;
    cout << "Nilai Tertinggi Matematika       = " << mtkmax << endl;
    cout << "Nilai Tertinggi IPA              = " << ipamax << endl;
    cout << "Nilai Tertinggi Bahasa Indonesia = " << indmax << endl;

    //budi 80 78 67
    //ani 78 89 86
    //candra 78 77 75
    //danar 90 98 97
    //eka 64 98 76
    //fiona 88 79 87
    //gema 85 55 90
    //hatta 87 65 91
    //iwan 91 77 89
    //joko 78 89 90

    return 0;

}
