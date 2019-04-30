#include<iostream>

using namespace std;

int main ()
{
    int i,j,k,n;
    cout<<"masukkan n = ";
    cin>>n;

    for(i=1;i<=n; i++)
    {
        for(j=1;j<=n+1-i;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(k=1;k<=n+1-i;k++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
