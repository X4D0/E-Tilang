#include "operate.h"
#include <conio.h>

List_c Lc;
List_p Lp;
List_r Lr;

void menu()
{
    int choice;
    createList(Lc);
    createList(Lc);
    createList(Lp);
    do
    {
        cout<<"+=================E-TILANG==================+"<<endl;
        cout<<"+Created by Afif Raihan and Rayhan Rahmanda +"<<endl;
        cout<<"+===========================================+"<<endl;
        cout<<"+ \t1. Insert Polisi \t+"<<endl;
        cout<<"+ \t2. Insert Data Tilang \t+"<<endl;
        cout<<"+ \t3. View Polisi \t+"<<endl;
        cout<<"+ \t4. View Data Tilang \t+"<<endl;
        cout<<"+ \t5. Find Polisi \t+"<<endl;
        cout<<"+ \t6. Find Data Tilang \t+"<<endl;
        cout<<"+ \t7. Connect\t+"<<endl;
        cout<<"+ \t8. View Relation \t+"<<endl;
        cout<<"+ \t9. Find Relation \t+"<<endl;
        cout<<"+ \t10. Disconnect Relation \t+"<<endl;
        cout<<"+ \t11. Delete Polisi \t+"<<endl;
        cout<<"+ \t12. Delete Data Tilang \t+"<<endl;
        cout<<"+ \t13. Sorting \t+"<<endl;
        cout<<"+ \t0. Exit \t+"<<endl;
        cout<<"+===========================================+"<<endl;
        cout<<"\nPilih : "; cin>>choice;
        switch(choice)
        {
            case 1 : insert_polisi(); break;
            case 2 : insert_tilang();break;
            case 3 : view_polisi();break;
            case 4 : view_tilang();break;
            case 5 : searchPol();break;
            case 6 : searchNomor();break;
            case 7 : connect();break;
            case 8 : view_relasi();break;
            case 9 : search_relasi();break;
            case 10 : disconect();break;
            case 11 : deletePolisi();break;
            case 12 : deleteTilang();break;
            case 13 : sortrelasi();break;
            case 0 : thanks();break;
            default: cout<<"Pilihan yang anda masukkan Salah"<<endl; break;
        }
        cout<<"\n Press Enter . . ."; getch();
        cout<<endl;
    }while(choice!=0);
}
