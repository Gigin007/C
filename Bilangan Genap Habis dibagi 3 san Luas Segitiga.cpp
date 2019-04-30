#include <iostream>

using namespace std;

int main ()

{

    int pil, i, p, a, t, luas ;

    cout<<"Jenis pilihan : "<<endl;
    cout<<"1. Bilangan genap yang habis di bagi 3 dan 5 ";
    cout<<"\n2. Luas segitiga ";
    cout<<"\nSilahkan inputkan pilihan : ";
    cin>>pil;

    switch(pil)
    {
        case 1 :
        {
            cout<<"Masukan Nilai batas : ";
            cin>>p;
            cout<<"Bilangan Genap : ";
            for(int i=1;i<=p;i++)
            {
                if (i%3==0 && i%5==0 && i%2==0)
                {
                   cout<<i<<" ";
                }

            }
        }
    break;
    case 2 :
        {
            cout<<"\n\nProgram Menghitung Luas Segita\n\n";
            cout<<"\n\nMasukan alas : ";
            cin>>a;
            cout<<"Masukkan tinggi : ";
            cin>>t;
                luas=0.5*a*t;

            cout<<"a="<<a<<"cm"<<endl;
            cout<<"t="<<t<<"cm"<<endl;
            cout<<"Luas Segitiga : "<<luas;
            break;
        }

    }
}
