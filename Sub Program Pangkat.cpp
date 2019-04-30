#include<iostream>

using namespace std;

void pangkat()
{
    int bil,n, x, i;
    cout<<"Masukkan Bilangan = ";
    cin>>x;
    cout<<"Masukkan Pangkat = ";
    cin>>n;

    if(n==0)
       {
           cout<<"hasil = 1"<<endl;
       }
    else
    {
        bil=x;
        for(i=1;i<n;i++)
        {
            x=x*bil;
        }
        cout<<"hasil = "<<x;
    }
}
int main ()
{
    pangkat();
}
