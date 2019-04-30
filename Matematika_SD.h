void penjumlahan()
{
    int angka[500];
    int n,i, jumlah=0;
    cout<<"Masukkan Jumlah Bilangan yang akan dihitung = ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"Masukkan Bilangan ke - "<<i<<" = ";
        cin>>angka[i];
    }
    for(i=1;i<=n;i++)
    {
        cout<<angka[i]<<" ";
        jumlah=jumlah+angka[i];
    }
    cout<<endl;
    cout<<"Total Bilangan = "<<jumlah;
}
void pengurangan()
{
    int angka[500];
    int n,i, jumlah=0;
    cout<<"Masukkan Jumlah Bilangan yang akan dihitung = ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"Masukkan Bilangan ke - "<<i<<" = ";
        cin>>angka[i];
    }
    for(i=1;i<=n;i++)
    {
        cout<<angka[i]<<" ";
        jumlah=jumlah-angka[i];
    }
    cout<<endl;
    cout<<"Total Bilangan = "<<jumlah;
}
