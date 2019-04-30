#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int jumlahdata, i, No;
    float UTS[50], UAS[50], Total[50];
    char nama[50][50];

    cout<<"Masukkan jumlah data = ";
    cin>>jumlahdata;
    for(i=0;i<jumlahdata;i++)
    {
        No=i+1;
        cout<<"Mahasiswa Ke "<<No<<" : "<<endl;
        cout<<"Masukkan Nama = ";
        cin>>nama[i];
        cout<<"Masukkan nilai UTS = ";
        cin>>UTS[i];
        cout<<"Masukkan UAS = ";
        cin>>UAS[i];
        Total[i]=(UTS[i]+UAS[i])/2;
    }
    cout<<endl;
    cout<<"\tNO"<<"\tnama"<<"\tUTS"<<"\tUAS"<<"\tTOTAL"<<"\tHuruf"<<endl;
    for(i=0; i<jumlahdata;i++)
    {
        No=i+1;
        cout<<"\t"<<No<<"\t"<<nama[i]<<"\t"<<UTS[i]<<"\t"<<UAS[i]<<"\t"<<Total[i]<<"\t";
        if(Total[i]>=0&&Total[i]<=40)
        {
            cout<<"E"<<endl;
        }
        else if (Total[i]>=41&&Total[i]<=55)
        {
            cout<<"D"<<endl;
        }
        else if (Total[i]>=56&&Total[i]<=70)
        {
            cout<<"C"<<endl;
        }
        else if (Total[i]>=71&&Total[i]<=80)
        {
            cout<<"B"<<endl;
        }
        else
        {
            cout<<"A"<<endl;
        }
    }
}
