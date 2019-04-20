#include "child.h"

void createList(List_pelanggar &L) {
    first(L) = NULL;
    last(L) = NULL;
}

adr_pelanggar alokasiPelanggar(infotype_pelanggar x) {
    adr_pelanggar P = new elmlist_pelanggar;
    info(P) = x;
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
        cout<<"->"<<info(P)<<endl;
        P = next(P);
    }
}


adr_pelanggar searchNomor(List_pelanggar L, infotype_pelanggar x) {
    adr_pelanggar P = first(L);
    while(P != NULL) {
        if(info(P)==x) {
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
