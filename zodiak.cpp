#include<iostream>

using namespace std;

int main ()
{
    int a,b;

    cout<<"Masukkan Tanggal lahir anda = ";
    cin>>a;
    cout<<"Masukkan Bulan lahir anda = ";
    cin>>b;

    if ((a>=20&&b==1)||(a<=18&&b==2))
    {
        cout<<"Aquarius";
    }
    else if ((a>=19&&b==2)||(a<=20&&b==3))
    {
        cout<<"Pisces";
    }
    else if ((a>=21&&b==3)||(a<=19&&b==4))
    {
        cout<<"Aries";
    }
    else if ((a>=20&&b==4)||(a<=20&&b==5))
    {
        cout<<"Taurus";
    }
    else if ((a>=21&&b==5)||(a<=20&&b==6))
    {
        cout<<"Gemini";
    }
    else if ((a>=21&&b==6)||(a<=22&&b==7))
    {
        cout<<"Cancer";
    }
    else if ((a>=22&&b==7)||(a<=22&&b==8))
    {
        cout<<"Leo";
    }
    else if ((a>=23&&b==8)||(a<=22&&b==9))
    {
        cout<<"Virgo";
    }
    else if ((a>=23&&b==9)||(a<=22&&b==10))
    {
        cout<<"Libra";
    }
    else if ((a>=23&&b==10)||(a<=21&&b==11))
    {
        cout<<"Scorpio";
    }
    else if ((a>=22&&b==11)||(a<=21&&b==12))
    {
        cout<<"Sagittarius";
    }
    else if ((a>=22&&b==12)||(a<=19&&b==1))
    {
        cout<<"Capricorn";
    }
    else
        cout<<"ojok ngawor cok";
}
