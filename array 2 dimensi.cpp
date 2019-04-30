#include<iostream>

using namespace std;

int main ()
{
    int A[20][30];
    int I,J,JB,JK;

    cout<<"Masukkan Jumlah Baris = ";
    cin>>JB;
    cout<<"Masukkan Jumlah Kolom = ";
    cin>>JK;

    for(I=0;I<JB;I++)
    {
        for(J=0;J<JK;J++)
        {
            cout<<"Input A["<<I<<"]["<<J<<"] = ";
            cin>>A[I][J];
        }
    }
    for(I=0;I<JB;I++)
    {
        for(J=0;J<JK;J++)
        {
            cout<<A[I][J]<<" ";
        }
        cout<<endl;
    }
}
