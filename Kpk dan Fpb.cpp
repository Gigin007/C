#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
main()
{
int x, y, a, b;
// Mencari KPK (Persekutuan Terkecil)
cout << "Masukkan Angka Pertama : ";
cin >> x;
cout << "Masukkan Angka Kedua : ";
cin >> y;
int kelipatan = x;
while(kelipatan%y != 0)
{
kelipatan = kelipatan+x;
}
cout << "Kpk = " << kelipatan <<endl <<endl;
// Mencari FPB (faktor persekutuan terbesar)
cout << "Masukkan Angka Pertama : ";
cin >> a;
cout << "Masukkan Angka Kedua : ";
cin >> b;
int selisih = abs(a-b);
while(a%selisih != 0)
{
selisih = a%selisih;
}
cout << "FPB : " << selisih;
}
