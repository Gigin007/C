#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"n =";
    cin>>n;
    for(int a =1;a<=n;a++)
    {
        int b = a-1;
        for(int c =1;c<=b;c++)
        {
            cout<<" ";
        }
        b =(2*n)-(2*a-1);
        for(int c=1;c<=b;c++)
        {
            cout<<"*";
            //cout<<" ";
        }
        cout<<endl;
    }
}
