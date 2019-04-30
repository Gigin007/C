#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
//#include<curses.h>
#include"Bangun_Datar.h"
#include"Matematika_SD.h"

using namespace std;

void peta()
{
    int n,js,jp,skala;
    cout<<"jarak sebenarnya dan skala      = 1"<<endl;
    cout<<"jarak sebenarnya dan jarak peta = 2"<<endl;
    cout<<"Jarak peta dan skala            = 3"<<endl;
    cout<<"Masukkan diket = ";
    cin>>n;
    if(n==1)
    {
        cout<<"masukkan jarak sebenarnya (cm) = ";
        cin>>js;
        cout<<"masukkan skala = ";
        cin>>skala;
        jp=js/skala;
        cout<<"Jarak peta = "<<jp<<" cm";
    }
    if(n==2)
    {
        cout<<"Masukkan Jarak Sebenarnya (cm) = ";
        cin>>js;
        cout<<"Jarak pada peta = ";
        cout<<jp;
        skala=js/jp;
        cout<<"Skala pada peta = "<<skala;
    }
    if(n==3)
    {
        cout<<"Masukkan Jarak pada Peta = ";
        cin>>jp;
        cout<<"Masukkan Skala = ";
        cin>>skala;
        js=jp*skala;
        cout<<"jarak Sebenarnya = "<<js;
    }
}
int main ()
{
    int pil;
    mulai:
    system("cls");
    cout<<"1. Penjumlahan"<<endl;
    cout<<"2. Pengurangan"<<endl;
    cout<<"3. Jarak pada peta"<<endl;
    cout<<"Masukkan Pilihan = ";
    cin>>pil;
    if(pil==1)
    {
        penjumlahan();
    }
    if(pil==2)
    {
        pengurangan();
    }
    if(pil==3)
    {
        peta();
    }
    goto mulai;
}
