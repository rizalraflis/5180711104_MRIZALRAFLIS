#include <iostream>
#include <stdlib.h>
using namespace::std;
main()
{
    string nama[10],cari,ganti,hapus;
    int jml ,index;
    bool status = false;
    cout<<"Masukan jumlah pesanan : ";cin>>jml;
    for (int i=0;i<jml;i++){

            cout<<"Pesanan ke-"<<i<<":";cin>>nama[i];

    }

        cout << "\n\nPesanan yang akan diubah : "; cin >> ganti;
        for (int g = 0; g<jml; g++)
	{
		if (nama[g] == ganti)
		{
			cout << "Diganti dengan : "; cin >>nama[g];
		}
	}

	cout << "\n\nData setelah diubah";
        for (int g = 0; g<jml; g++)
	{
		cout << "\nPesanan ke-" << g << "= " << nama[g];
	}

        cout << "\n\nMasukkan nilai data yang akan dihapus : ";
        cin >> hapus;


        for (int j = 0; j < jml; j++)
	{
		if (hapus == nama[j])
		{

			for (int k = j ; k < jml; k++)
			{

				nama[k]= nama[k + 1];
			}jml -= 1;
			break;
		}
	}

        cout << "\n\nNama-nama Pesanan :";
        for (int p = 0; p<jml; p++)
	{
		cout << "\npesanan ke-" << p << " : " << nama[p];
	}

        cout<<"\nPesanan yang di cari : ";cin>>cari;
       for (int i=0;i<jml;i++)
        {
            if(cari==nama[i])
            {
                status= true;
                index=i;
            }
        }
              system("CLS");
                if(status)
                cout<<"Pesanan berada di ruangan lain"<<index;
                else
                cout<<"Maaf pesanan tidak ready";
}

