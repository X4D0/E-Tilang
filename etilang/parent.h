#ifndef PARENT_H_INCLUDED
#define PARENT_H_INCLUDED
#include <iostream>
using  namespace std;

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

typedef string polisi;
typedef struct elmlist_p *adr_p;
struct elmlist_p {
    polisi info;
    adr_p next;
};
struct List_p {
    adr_p first;
};

void createList(List_p &L);
void insertFirst(List_p &L, adr_p P);
void insertAfter(List_p &L, adr_p Prec, adr_p P);
void insertLast(List_p &L, adr_p P);
void deleteFirst(List_p &L, adr_p P);
void deleteLast(List_p &L, adr_p &P);
void deleteAfter(List_p &L, adr_p Prec, adr_p &P);
adr_p allocateP(polisi x);
void deallocateP(adr_p &P);
adr_p searchPol(List_p L, polisi x);
void printInfo(List_p L);
/* Nama : Rayhan Rahmanda ; NIM : 1301184233 */

#endif // PARENT_H_INCLUDED
