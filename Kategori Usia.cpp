#include<iostream>
#include<conio.h>

using namespace std;

int main ()
{
    char nama, kategori;
    int umur;

    cout<<"Masukkan Nama = ";
    cin>>nama;
    cout<<"Masukkan Umur = ";
    cin>>umur;

    if(umur<=1)
    {
        cout<<"Bayi";

    else (umur>1&&umur<=3)
    {
        cout<<"Batita";
    }
    else (umur>3&&umur<=5)
    {
        cout<<"Balita";
    }
    else (umur>5&&umur<=12)
    {
        cout<<"Kategori Anak-Anak";
    }
    else(umur>12&&umur<=17)
    {
        cout<<"Kategori Remaja";
    }
    }
}
