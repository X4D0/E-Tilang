#include "parent.h"
#include "child.h"

int main()
{
    cout << "Bentuk II - Contoh Relasi 1-N dan M-N" << endl;

    List_pol LP;
    List_pelanggar tertilang;
    adr_pol P;
    adr_pelanggar C;

    createList(LP);

    /** insert parent */
    P = alokasiPolisi(3);
    insertFirst(LP, P);
    P = alokasiPolisi(7);
    insertFirst(LP, P);
    P = alokasiPolisi(2);
    insertFirst(LP, P);
    P = alokasiPolisi(4);
    insertFirst(LP, P);

    cout<<"list parent"<<endl;
    printInfo(LP);

    /** insert child */

    createList(tertilang);

    P = searchPol(LP, 7);
    C = alokasiPelanggar("X");
    insertFirst(pelanggar(P),C);
    C = alokasiPelanggar("Q");
    insertFirst(pelanggar(P),C);

    P = searchPol(LP, 4);
    C = alokasiPelanggar("A");
    insertFirst(pelanggar(P),C);

    P = searchPol(LP, 2);
    C = alokasiPelanggar("A");
    insertFirst(pelanggar(P),C);


    P = searchPol(LP, 7);
    C = searchNomor(pelanggar(P),"Q");
    adr_pelanggar R = alokasiPelanggar("O");
    insertAfter(pelanggar(P),C, R);

    cout<<"\n";
    cout<<"list parent setelah diisi child"<<endl;
    printInfo(LP);
    return 0;
}
