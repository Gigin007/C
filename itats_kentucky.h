using namespace std;
void itats()
{
    //deklarasi variabel
int i,banyak;

char kode[6];
int banyak_potong [6];
char jenis_potong [6][30];
int harga[6];
long jumlah_harga[6];

int jumlah_bayar=0;
float pajak ;
long total_bayar ;

//layar masukan
cout<<"ITATS Fried Chicken"<<endl;
cout<<"---------------------------"<<endl;
cout<<"Kode  JenisPotong  Harga"<<endl;
cout<<"D      Dada        Rp. 2500"<<endl;
cout<<"P      Paha        Rp. 2000"<<endl;
cout<<"S      Sayap       Rp. 1500"<<endl;
cout<<"---------------------------"<<endl;
cout<<endl;
cout<<"Banyak Jenis : ";
cin>>banyak;
for (i=1; i<=banyak; i++)
{
    cout<<"Jenis Ke- "<<i<<endl; //Ini adalah Proses COUNTER
    cout<<"Kode Potong [D/P/S] : ";
    cin>>kode[i];
    cout<<"Banyak Potong       : ";
    cin>>banyak_potong[i];


//proses
if (kode[i]=='D'||kode[i]=='d')
{
    strcpy(jenis_potong[i],"Dada");
    harga[i]=2500;
}
else if (kode[i]=='P'||kode[i]=='p')
{
    strcpy(jenis_potong[i],"Paha");
    harga[i]=2000;
}
else
{
    strcpy(jenis_potong[i],"Sayap");
    harga[i]=1500;
}
jumlah_harga[i] = harga[i]*banyak_potong[i];


//diluar PERULANGAN /FOR
jumlah_bayar=jumlah_bayar+jumlah_harga[i];
pajak = jumlah_bayar*0.1;
total_bayar = jumlah_bayar+pajak;
cout<<endl;
}




//Layar KELUARAN
//output
cout<<"ITATS Fried Chicken"<<endl;
cout<<"------------------------------------"<<endl;
cout<<"No. Jenis       Harga  Banyak   Jumlah"<<endl;
cout<<"    Potong      Satuan Beli     Harga "<<endl;
cout<<"--------------------------------------"<<endl;
for (i=1;i<=banyak;i++)
{
	cout<<setiosflags (ios::left)<<setw(4)<<i;
   cout<<setiosflags (ios::left)<<setw(12)<<jenis_potong[i];
   cout<<setiosflags (ios::left)<<setw(7)<<harga[i];
	cout<<setiosflags (ios::left)<<setw(9)<<banyak_potong[i];
	cout<<setiosflags (ios::left)<<setw(6)<<jumlah_harga[i];
   cout<<endl;

}
cout<<"-------------------------------------"<<endl;
//diluar FOR
cout<<"                     Jumlah Bayar Rp."<<jumlah_bayar<<endl;
cout<<"                     Pajak 10%    Rp."<<pajak<<endl;
cout<<"                     Total Bayar  Rp."<<total_bayar<<endl;
}
