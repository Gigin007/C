#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char kalimat[500],balik;
    int a;
    cout<<"masukkan kalimat = ";
    cin.getline(kalimat, 500);

    int pjgstring = strlen(kalimat);
    int i=0;
    for (int j=0;j<pjgstring;j++)
    {
        if (kalimat[j]==' '||j==pjgstring-1)
        {
            if (j<pjgstring)
            {
                a=j-1;
            }
            else
            {
                a=j;
            }

            while(i<a)
            {
                balik=kalimat[i];
                kalimat[i]=kalimat[a];
                kalimat[a]=balik;
                i++;
                a--;
            }
            i=j+1;
        }
    }
    cout<<"hasil pembalikan = "<<kalimat;
    cout<<endl;
}
