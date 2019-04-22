#include "parent.h"
#include "child.h"

int main()
{
    List_pol LP;
    adr_pol P;
    adr_pelanggar C;

    cout << "Bentuk II - Contoh Relasi 1-N dan M-N" << endl;



    createList(LP);

    /** insert parent */
    P = alokasiPolisi(12345);
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

    cout<<"\n";
    cout << "-----------------------------------"<<endl;
    cout<<"LIST PARENT SETELAH DIISI PELANGGAR"<<endl;
    cout << "-----------------------------------"<<endl;
    printInfo(LP);
    return 0;
}
