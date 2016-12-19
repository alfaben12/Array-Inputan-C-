#include <iostream>

using namespace std;

int main()
{
    char data[100];
    int n;
    cout<<"===PROGRAM INPUTAN DATA DARI USER==="<<endl;
    cout<<endl;
    cout<<"Masukan Jumlah Data: ";
    cin>>n;
    cout<<endl;
        for(int i=1;i<=n;i++)
        {
            cout<<"Masukkan data ke "<<i<< " : ";
            cin>>data[i];
        }
        cout<<endl;
        cout<<"";
        for(int i=1; i<=n; i++)
        {
            cout<<"Data yang di Masukan : "<<data[i]<<endl;
        }

    return 0;

}
