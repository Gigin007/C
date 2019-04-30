#include <iostream>

using namespace std;

int main()
{
    char nama[100][100];
    int nilai[100];
    int n,i;

    cout<<"masukkan jumlah mahasiswa: ";
    cin>>n;

    //input data
    for (int i=1;i<=n;i++)
        {
        cout<<"masukkan nama mahasiswa: ";
        cin>>nama[i];
        cout<<"masukkan nilai mahasiswa: ";
        cin>>nilai[i];
        }

    //menampilkan data
    cout<<"tampilkan data"<<endl;
    for (i=1;i<=n;i++)
        {
            cout<<"nama: "<<nama[i]<<" dengan nilai: "<<nilai[i]<<endl;
        }

    return 0;
}
