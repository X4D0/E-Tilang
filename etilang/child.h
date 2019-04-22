#ifndef CHILD_H_INCLUDED
#define CHILD_H_INCLUDED
#include <iostream>

#define next(P) P->next
#define prev(P) P->prev
#define first(L) L.first
#define last(L) L.last
#define info(P) P->info

using namespace std;

typedef struct infotype_pelanggar{
    string nama;
    string kendaraan;
    string no_kendaraan;
};

typedef struct elmlist_pelanggar *adr_pelanggar;
struct elmlist_pelanggar {
    infotype_pelanggar info;
    adr_pelanggar next;
    adr_pelanggar prev;
};

struct List_pelanggar {
    adr_pelanggar first;
    adr_pelanggar last;
};

void createList(List_pelanggar &L);
void insertFirst(List_pelanggar &L, adr_pelanggar P);
void insertAfter(List_pelanggar &L, adr_pelanggar Prec, adr_pelanggar P);
void insertLast(List_pelanggar &L, adr_pelanggar P);
void deleteFirst(List_pelanggar &L, adr_pelanggar P);
void deleteLast(List_pelanggar &L, adr_pelanggar &P);
void deleteAfter(List_pelanggar &L, adr_pelanggar Prec, adr_pelanggar &P);
adr_pelanggar alokasiPelanggar(string nama, string kendaraan, string no_kendaraan);
void deallocatePelanggar(adr_pelanggar &P);
adr_pelanggar searchNomor(List_pelanggar L, string x);
void printInfo(List_pelanggar L);
/* Nama : Rayhan Rahmanda ; NIM : 1301184233
   Nama : Muhammad Afif Raihan ; NIM : 1301184220*/

#endif // CHILD_H_INCLUDED
