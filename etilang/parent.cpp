#include "child.h"
#include "parent.h"

void createList(List_pol &L)
{
    first(L) = NULL;
};
void insertFirst(List_pol &L, adr_pol P)
{
    if (P == NULL){
        first(L) = P;
    }else{
        next(P) = first(L);
        first(L) = P;
    }
}
void insertAfter(List_pol &L, adr_pol Prec, adr_pol P){
    if (P == NULL){
        insertFirst(L,P);
    }else{
        next(P) = next(Prec);
        next(Prec) = P;
    }
}

void insertLast(List_pol &L, adr_pol P)
{
    adr_pol Q = first(L);
    if(Q==NULL)
    {
        first(L) = P;
    }else
    {
        while (next(Q)!=NULL)
        {
            Q = next(Q);
        }
        next(Q) = P;
    }
};
void deleteFirst(List_pol &L, adr_pol P)
{
    if(first(L) != NULL){
        P = first(L);
        first(L) = next(P);
        //deletePolisi(P);
        next(P) = NULL;
    }
};
/* Nama : Rayhan Rahmanda ; NIM : 1301184233 */

void deleteLast(List_pol &L, adr_pol &P){
    adr_pol Q = first(L);
    while(next(Q) != P){
        Q = next(Q);
    }
    next(Q) = NULL;
    dealokasiPolisi(P);
}


void deleteAfter(List_pol &L, adr_pol Prec, adr_pol &P){
    next(P) = next(Prec);
    next(Prec) = P;
}



adr_pol alokasiPolisi(infotype_pol x){
    adr_pol P;
    P = new elmlist_pol;
    info(P) = x;
    next(P) = NULL;
    createList(pelanggar(P));
    return P;
}

void dealokasiPolisi(adr_pol &P){
    delete P;
}

adr_pol searchPol(List_pol L, infotype_pol x){
    adr_pol P = first(L);
    do {
        if(info(P) == x) {
            return P;
        }
        P = next(P);
    } while(P != first(L));
    return NULL;
}

void printInfo(List_pol L){
    adr_pol P = first(L);
    while ((P != NULL)&&(info(P)<99999)){
        if (first(L) != NULL){
            cout <<endl<< "No. Tilang "<<info(P)<<endl;
            printInfo(pelanggar(P));
            cout << "================================"<<endl;
            P = next(P);
        }
    }
}
/* Nama : Muhammad Afif Raihan ; NIM : 1301184220 */

int jumlahPelanggaran(List_pol L)
{
    int banyak = 0;
    adr_pol P = first(L);
    while(P!=NULL)
    {
        if(first(L)!=NULL)
        {
            banyak++;
            P = next(P);
        }
    }
    return banyak;
}
/* Nama : Rayhan Rahmanda ; NIM : 1301184233 */

