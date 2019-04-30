#include<iostream>
#include<conio.h>

using namespace std;

void persegi()
{
    int p,l, luas;
    cout<<"Masukkan Panjang = ";
    cin>>p;
    cout<<"Masukkan Lebar = ";
    cin>>l;
    luas=p*l;
    cout<<"Luas Persegi panjang = "<<luas<<endl;
}
void segitiga()
{
    int a,t, luas;
    cout<<"masukkan alas = ";
    cin>>a;
    cout<<"masukkan tinggi = ";
    cin>>t;
    luas=(a*t)/2;
    cout<<"luas segitiga = "<<luas<<endl;
}
void lingkaran()
{
    float luas;
    int r;
    cout<<"masukkan jari-jari = ";
    cin>>r;
    luas=3.14*r*r;
    cout<<"luas lingkaran = "<<luas<<endl;
}
int main()
{
    char ulang;
    int pil;
    do
    {
    cout<<"1. Luas Persegi Panjang"<<endl;
    cout<<"2. Luas Segitiga"<<endl;
    cout<<"3. Luas Lingkaran"<<endl;
    cout<<"Masukkan keinginan anda = ";
    cin>>pil;
    if(pil==1)
    {
        persegi();
    }
    else if (pil==2)
    {
        segitiga();
    }
    else
    {
        lingkaran();
    }
    cout<<"Apakah ada lagi (y/n)"<<endl;
    cin>>ulang;
    }
    while(ulang=='Y'||ulang=='y');
}
