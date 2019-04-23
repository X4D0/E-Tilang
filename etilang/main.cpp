#include "parent.h"
#include "child.h"

int main()
{
    List_pol LP;
    adr_pol P;
    adr_pelanggar C;
<<<<<<< HEAD
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
            P = searchPol(LP,x);
            printInfo(LP);
            /*cout<<"\t No. Tilang "<<x<<endl;
            cout<<"\t Nama : "<<info(P).nama<<endl;
            cout<<"\t Kendaraan : "<<info(P).kendaraan<<endl;
            cout<<"\t No. Kendaraan : "<<info(P).no_kendaraan<<endl;*/
            break;
        case 5:
            //jumlahkendaraan(LP);
            break;
        case 6:
            //jumlahpelanggaran(LP);
            break;
        case 0:
            cout<<"EXIT..."<<endl;
            exit(1);
            break;
        }
    } while(true);

    //----------------------------------------

    /** insert parent */
    /*P = alokasiPolisi(12345);
=======

    cout << "Bentuk II - Contoh Relasi 1-N dan M-N" << endl;



    createList(LP);

    /** insert parent */
    P = alokasiPolisi(12345);
>>>>>>> 9937d66c88886a7abfdf5c73005fb3318c42216d
    insertFirst(LP, P);
    P = alokasiPolisi(67890);
    insertFirst(LP, P);
    P = alokasiPolisi(54321);
    insertFirst(LP, P);
    P = alokasiPolisi(19876);
    insertFirst(LP, P);

    cout <<endl<< "-------------"<<endl;
    cout<<"LIST PARENT"<<endl;
    cout <<endl<< "-------------"<<endl;
    printInfo(LP);

    /** insert child */


<<<<<<< HEAD
    /*
=======

>>>>>>> 9937d66c88886a7abfdf5c73005fb3318c42216d
    P = searchPol(LP,12345);
    C = alokasiPelanggar("Muhammad","MOBIL","B1234KK");
    insertFirst(pelanggar(P),C);
    C = alokasiPelanggar("Muhammad","MOBIL","B1234KN");
    insertFirst(pelanggar(P),C);

    P = searchPol(LP, 67890);
    C = alokasiPelanggar("Muhammad","MOBIL","B1234KM");
    insertFirst(pelanggar(P),C);

    P = searchPol(LP, 19876);
    C = alokasiPelanggar("Muhammad","MOBIL","B1234KL");
    insertFirst(pelanggar(P),C);


    /*P = searchPol(LP, 7);
    C = searchNomor(pelanggar(P),"B1234KK");
    adr_pelanggar R = alokasiPelanggar("Afif","MOTOR","F3256RT");
    insertAfter(pelanggar(P),C, R);*/
<<<<<<< HEAD
    /*
=======

>>>>>>> 9937d66c88886a7abfdf5c73005fb3318c42216d
    cout<<"\n";
    cout << "-----------------------------------"<<endl;
    cout<<"LIST PARENT SETELAH DIISI PELANGGAR"<<endl;
    cout << "-----------------------------------"<<endl;
    printInfo(LP);
<<<<<<< HEAD
    */
=======
>>>>>>> 9937d66c88886a7abfdf5c73005fb3318c42216d
    return 0;
}
