#ifndef RELASI_H_INCLUDED
#define RELASI_H_INCLUDED

#include "child.h"
#include "parent.h"
#include <iostream>
using namespace std;

#define next(P) P->next
#define prev(P) P->prev
#define first(L) L.first
#define last(L) L.last
#define tilang(P) P->tilang
#define polisi(P) P->polisi
typedef struct elmlist_r *adr_r;
struct elmlist_r {
    adr_r next;
    adr_r prev;
    adr_pelanggar tilang;
    adr_pol polisi;
};
struct List_r {
    adr_r first;
    adr_r last;
};

void createList(List_r &L);
void insertFirst(List_r &L, adr_r P);
void insertAfter(List_r &L, adr_r Prec, adr_r P);
void insertLast(List_r &L, adr_r P);
void deleteFirst(List_r &L, adr_r P);
void deleteLast(List_r &L, adr_r &P);
void deleteAfter(List_r &L, adr_r Prec, adr_r &P);
adr_p allocateR(adr_p P, adr_c C);
void deallocateR(adr_r &P);
adr_p searchNomor(List_r L, adr_p P, adr_c C);
void printInfo(List_r L);
/* Nama : Rayhan Rahmanda ; NIM : 1301184233 */

#endif // RELASI_H_INCLUDED
