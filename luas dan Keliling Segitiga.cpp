#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int pil,p,l,luas,a,t, keliling;
    cout<<"1. menghitung luas persegi";
    cout<<"2. menghitung keliling segitiga";
    cin<<pil;

    switch(pil)
    {
        case 1 :
        {
            cout<<"Masukkan panjang = ";
            cin>>p;
            cout<<"Masukkan lebar = ";
            cin>>l;
            luas = p*l;

            cout<<"luas = "<<luas<<"cm";
        }
        break
        case 2 :
            {
                cout<<"masukkan alas = ";
                cin>>a;
                cout<<"masukkan tinggi =";
                cin>>t;
                keliling = 3*a;

                cout<<"keliling = "<<keliling<<"cm";
            }
            break
    }
}
