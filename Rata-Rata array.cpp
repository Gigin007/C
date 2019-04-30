#include<iostream>

using namespace std;

int main()
{
    float banyak,rata;
    int angka[10];
    int n,i;
    int max=angka[i], min;
    int jumlah=0;

    cout<<"Masukkan jumlah data = ";
    cin>>n;

    for (i=0;i<n;i++)
   {
       cout<<"masukan bilangan ke "<<i<<"= ";
       cin>>angka[i];
   }

   for (int i=0;i<n;i++)
   {
       jumlah=jumlah+angka[i];
       if (max<angka[i])
       {
           max=angka[i];
       }
       else if (min>angka[i])
       {
           min=angka[i];
       }
   }
   rata=jumlah/n;
   cout<<"Jumlah data yang diinputkan = "<<jumlah<<endl;
   cout<<endl;
   cout<<"Rata - Rata Bilangan yang dimasukkan = "<<rata<<endl;
   cout<<"Nilai Terbesar "<<max<<endl;
   cout<<"Nilai Terkecil "<<min<<endl;
}
