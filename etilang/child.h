#ifndef CHILD_H_INCLUDED
#define CHILD_H_INCLUDED
#include <iostream>
using namespace std;

#define next(P) P->next
#define prev(P) P->prev
#define first(L) L.first
#define last(L) L.last
#define info(P) P->info
typedef string tilang;
typedef struct elmlist_c *adr_c;
struct elmlist_c {
    tilang info;
    adr_c next;
    adr_c prev;
};

struct List_c {
    adr_c first;
    adr_c last;
};

void createList(List_c &L);
void insertFirst(List_c &L, adr_c P);
void insertAfter(List_c &L, adr_c Prec, adr_c P);
void insertLast(List_c &L, adr_c P);
void deleteFirst(List_c &L, adr_c P);
void deleteLast(List_c &L, adr_c &P);
void deleteAfter(List_c &L, adr_c Prec, adr_c &P);
adr_c allocateC(tilang x);
void deallocateC(adr_c &P);
adr_c searchNomor(List_c L, tilang x);
void printInfo(List_c L);
/* Nama : Rayhan Rahmanda ; NIM : 1301184233 */

#endif // CHILD_H_INCLUDED
