#include<iostream>
using namespace std;
int main ()
{
cout<<"-------------------------------------- \n";
cout<<"            Nama : Ikbal Mahdi               \n";
cout<<"            NPM  : 0651 13 054             \n";
cout<<"                Tugas Array [4]                 \n";
cout<<"--------------------------------------\n";
cout<<endl;
int aray1[4];
int aray2[4];
int pengurangan[4];
int pertambahan[4];
int perkalian[4];
int aray;

//Array Pertama
cout<<"-------------------\n";
cout<<"    Array Pertama  \n";
cout<<"-------------------\n";
for (aray=1;aray<4;aray++)
{
        cout<<"Masukan Angka ["<<aray<<"] = ";
        cin>>aray1[aray];
}
//Array Kedua
cout<<"-------------------\n";
cout<<"     Array Kedua   \n";
cout<<"-------------------\n";
for (aray=1;aray<4;aray++)
{
        cout<<"Masukan Angka ["<<aray<<"] = ";
        cin>>aray2[aray];
}
cout<<"-------------------\n";
cout<<"    Hasil Array 1  \n";
cout<<"-------------------\n";
for (aray=1;aray<4;aray++)
{
cout<<aray1[aray]<<" ";
}
cout<<endl;

cout<<"-------------------\n";
cout<<"    Array Array 2  \n";
cout<<"-------------------\n";
for (aray=1;aray<4;aray++)
{
cout<<aray2[aray]<<" ";
}
cout<<endl;
//Array Jumlah
cout<<"-------------------\n";
cout<<" Hasil Penjumlahan \n";
cout<<"-------------------\n";
for (aray=0;aray<4;aray++)
{
        pertambahan[4]=aray1[aray]+aray2[aray];
        cout<<pertambahan[4]<<" ";
}
cout<<endl;
//Array Kurang
cout<<"-------------------\n";
cout<<" Hasil Pengurangan \n";
cout<<"-------------------\n";
for (aray=1;aray<4;aray++)
{
        pengurangan[4]=aray1[aray]-aray2[aray];
        cout<<pengurangan[4]<<" ";
}
cout<<endl;
//Array Perkalian
cout<<"-------------------\n";
cout<<"  Hasil Perkalian  \n";
cout<<"-------------------\n";
for (aray=1;aray<4;aray++)
{
        perkalian[4]=aray1[aray]*aray2[aray];
        cout<<perkalian[4]<<" ";
}
}
