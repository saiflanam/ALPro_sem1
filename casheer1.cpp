#include<iostream>
using namespace std;

int main()
{
    string name[1000];
    string member;
    int price[1000];
    int quantity[1000];
    int total=0,sum=0,pay,money,cashback;

    cout << "PROGRAM SIMPLE CASHEER" << endl;
    cout << "======================" << endl;


    cout << "Input (Name-Price-Quantities) : " << endl;
    for(int i=0; i<1000; i++)
    {
        cin >> name[i] >> price[i] >> quantity[i];
        if(name[i]=="-")
        {
            break;
        }
        else
        {
            sum++;
        }
    }

    cout << endl;

    for(int i=0; i<=sum-1; i++)
    {
        total=total+price[i]*quantity[i];
    }

    cout << "status member : ";
    cin >> member;

    if(member=="aktif")
    {
        pay=total-total*5/100;
    }
    else if(member=="nonaktif")
    {
        pay=total;
    }

    cout << "Money : ";
    cin >> money;
    cashback=money-pay;
    cashback=(cashback/100)*100;
    cout << "Cashback : " << cashback << endl;
    cout << endl;

    cout << "====================================" << endl;
    cout << "----------INDOALFAMART--------------" << endl;
    cout << "Jl.Jendral Sudirman No.10,Yogyakarta" << endl;
    cout << "====================================" << endl;
    cout << endl;
    for(int i=0; i<sum; i++)
    {
        cout << name[i] << " " << quantity[i] << " " << price[i] << " " << quantity[i]*price[i] << endl;
    }
    cout << endl;
    cout << "=====================================" << endl;
    cout << endl;
    cout << "Total       = " << total << endl;
    cout << "Tunai       = " << money << endl;
    cout << "Kembali     = " << cashback << endl;
    cout << endl;
    cout << "======================================" << endl;
    cout << "------------TERIMA KASIH--------------" << endl;
    cout << "======================================" << endl;






}
