#include<iostream>

using namespace std;

int main ()
{
    int a,b,i, kpk;
    cout<<"masukkan angka pertama = ";
    cin>>a;
    cout<<"masukkan angka kedua = ";
    cin>>b;

    for(i=a;i<=a*b;i++)
    {
        if (i%a==0&&i%b==0)
        {
            kpk=i;
            break;
        }
    }
    cout<<"KPK = "<<kpk;
}
