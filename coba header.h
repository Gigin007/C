using namespace std;
void kalimat()
{
    char kalimat[500];
    int pjgstring=0,i;
    cout<<"Masukkan Kalimat = ";
    cin.getline(kalimat,sizeof(kalimat));

    for(i=0;kalimat[i];i++)
    {
        //pjgtring=strlen(kalimat[i]);
        pjgstring++;
    }
    cout<<"Panjang Kalimat = "<<pjgstring<<endl;
}
int kalimat(char kal[100])
{
    int jum=0, i;
    for(int i=0;kal[i];i++)
    {
        jum++;
    }
    return jum;
}
