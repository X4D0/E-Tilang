#include "parent.h"
#include "child.h"

int main()
{
    List_pol LP;
    adr_pol P;
    adr_pelanggar C;
    createList(LP);
    infotype_pol x;
    string nama,kendaraan,no_kendaraan;
    int choice;
    do {
        cout << "+===================E-Tilang====================+" << endl;
        cout << "+\t                                  \t+" <<endl;
        cout << "+\t1. Input Data Tilang              \t+" <<endl;
        cout << "+\t2. Hapus Data Tilang              \t+" <<endl;
        cout << "+\t3. Daftar Tilang                  \t+" <<endl;
        cout << "+\t4. Lihat Data Tilang              \t+" <<endl;
        cout << "+\t5. Jumlah Kendaraan yang di Tilang \t+" <<endl;
        cout << "+\t6. Jumlah Pelanggaran             \t+" <<endl;
        cout << "+\t0. EXIT                           \t+" <<endl;
        cout << "+\t                                  \t+" <<endl;
        cout << "+==================TUBES 2019===================+" << endl;
        cout<<"Pilihan : ";
        cin>>choice;
        cout<<endl;
        switch(choice) {
        case 1:
            cout<<"Nomor Tilang : "; cin>>x;
            P = alokasiPolisi(x); insertFirst(LP,P);
            cout<<"Pelanggar : "; cin>>nama;
            cout<<"Kendaraan : "; cin>>kendaraan;
            cout<<"No. Kendaraan : "; cin>>no_kendaraan;
            P = searchPol(LP,x);
            C = alokasiPelanggar(nama,kendaraan,no_kendaraan);
            insertFirst(pelanggar(P),C);
            break;
        case 2:
            cout<<"Masukkan Nomor Tilang yang ingin di Hapus : "; cin>>x;
            P = searchPol(LP,x);
            dealokasiPolisi(P);
            break;
        case 3:
            printInfo(LP);
            break;
        case 4:
            cout<<"Masukkan Nomor Tilang yang ingin di cari : "; cin>>x;
            cout<<endl;
            P = searchPol(LP,x);
            cout<<"No. Tilang "<<info(P)<<endl;
            printInfo(pelanggar(P));
            break;
        case 5:
            //jumlahkendaraan(LP);
            break;
        case 6:
            jumlahPelanggaran(LP);
            if(jumlahPelanggaran(LP)!=0)
            {
                cout<<"Jumlah Pelanggaran pada Tahun 2019 yaitu "<<jumlahPelanggaran(LP)<<endl;
            }
            else
            {
                cout<<"Tidak ada Pelanggaran pada Tahun 2019"<<endl;
            }

            break;
        case 0:
            cout<<"EXIT..."<<endl;
            exit(1);
            break;
        }
    } while(true);
    /* Nama : Rayhan Rahmanda ; NIM : 1301184233 */
    //----------------------------------------
    return 0;
}
