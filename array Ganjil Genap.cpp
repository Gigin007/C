#include<iostream>

using namespace std;

int main ()
{
    int A[500];
    int I, N;

    cout<<"Masukkan Jumlah Bilangan = ";
    cin>>N;
    for (I=0;I<N;I++)
    {
        cout<<"Masukan bilangan ke "<<I+1<<" = ";
        cin>>A[I];
    }
    for (I=0;I<N;I++)
    {
        cout<<A[I]<<" "<<endl;
    }
    cout<<"Data yang genap = ";
    for (I=0;I<N;I++)
    {
        if(A[I]%2==0)
        cout<<A[I]<<" ";
    }

}
