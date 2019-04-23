#include "child.h"

void createList(List_pelanggar &L) {
    first(L) = NULL;
    last(L) = NULL;
}

adr_pelanggar alokasiPelanggar(string nama, string kendaraan, string no_kendaraan) {
    adr_pelanggar P = new elmlist_pelanggar;
    info(P).nama = nama;
    info(P).kendaraan = kendaraan;
    info(P).no_kendaraan = no_kendaraan;
    next(P) = NULL;
    prev(P) = NULL;
    return P;
}

void insertFirst(List_pelanggar &L, adr_pelanggar P) {
    if(first(L) == NULL) {
        last(L) = P;
        first(L) = P;
    } else {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}

void printInfo(List_pelanggar L) {
    adr_pelanggar P = first(L);
    while(P !=NULL) {
<<<<<<< HEAD
        cout<<"\t Pelanggar : "<<info(P).nama<<endl;
        cout<<"\t Kendaraan : "<<info(P).kendaraan<<endl;
        cout<<"\t No. Kendaraan : "<<info(P).no_kendaraan<<endl;
=======
        cout<<"  ->"<<info(P).nama<<endl;
        cout<<"     *"<<info(P).kendaraan<<endl;
        cout<<"     *"<<info(P).no_kendaraan<<endl;
>>>>>>> 9937d66c88886a7abfdf5c73005fb3318c42216d
        P = next(P);
    }
}


adr_pelanggar searchNomor(List_pelanggar L, string x) {
    adr_pelanggar P = first(L);
    while(P != NULL) {
        if(info(P).no_kendaraan == x) {
            return P;
        }
        P = next(P);
    }
    return NULL;
}

void insertAfter(List_pelanggar &L, adr_pelanggar Prec, adr_pelanggar P) {
    prev(next(Prec)) = P;
    next(P) = next(Prec);
    prev(P) = Prec;
    next(Prec) = P;
}
