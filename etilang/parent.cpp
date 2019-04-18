#include "parent.h"
void createList(List_p &L)
{
    first(L) = NULL;
};
void insertFirst(List_p &L, adr_p P)
{
    next(P) = first(L);
    first(L) = P;
};
void insertAfter(List_p &L, adr_p Prec, adr_p P)
{
    next(P) = next(Prec);
    next(Prec) = P;
};
void insertLast(List_p &L, adr_p P)
{
    address Q = first(L);
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
void deleteFirst(List_p &L, adr_p P)
{
    if(first(L) != NULL){
        P = first(L);
        first(L) = next(P);
        deallocate(P);
        next(P) = NULL;
    }
};
/* Nama : Rayhan Rahmanda ; NIM : 1301184233 */

void deleteLast(List_p &L, adr_p &P);
void deleteAfter(List_p &L, adr_p Prec, adr_p &P);
adr_p allocateP(polisi x);
void deallocateP(adr_p &P);
adr_p searchPol(List_p L, polisi x);
void printInfo(List_p L);
