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

}


void deleteAfter(List_pol &L, adr_pol Prec, adr_pol &P){

}



adr_pol alokasiPolisi(infotype_pol x){
    adr_pol P;
    P = new elmlist_pol;
    info(P) = x;
    next(P) = NULL;
    createList(pelanggar(P));
    return P;
}

<<<<<<< HEAD
void dealokasiPolisi(adr_pol &P){
=======
void deallocateP(adr_pol &P){
>>>>>>> 9937d66c88886a7abfdf5c73005fb3318c42216d
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
    while (P != NULL){
        if (first(L) != NULL){
<<<<<<< HEAD
            cout <<endl<< "No. Tilang "<<info(P)<<endl;
            //cout << "======================"<<endl;
            printInfo(pelanggar(P));
            cout << "=============================="<<endl;
=======
            cout <<endl<< info(P)<<endl;
            //cout << "======================"<<endl;
            printInfo(pelanggar(P));
            cout << "==================="<<endl;
>>>>>>> 9937d66c88886a7abfdf5c73005fb3318c42216d
            P = next(P);
        }
    }
    /*if(first(L)!=NULL) {
        do {
            cout<<info(P)<<endl;
            printInfo(pelanggar(P));
            P = next(P);
        } while((P)!=first(L));
    }*/
}


