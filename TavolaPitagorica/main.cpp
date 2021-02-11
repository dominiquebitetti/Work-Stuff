/*
* Matrici.cpp
* Esempi d'uso delle matrici
* Author: Bitetti Dominique
* Date: 11 Dicembre 202
*/

#include <iostream>
#include <string>
#include <time.h>
#define M 11

using namespace std;

void RiempiMatrice (int matrice[10][10], int valore)
{
    for (int r=0; r<10; r++)
    {
        for (int c=0; c<10; c++)
        {
            valore = rand() % 100;
            matrice[r][c]= valore;
        }
    }
}

void StampaMatrice (int matrice[10][10])
{
    int x=1;
    for (int r=0; r<10; r++)
        {
            cout<<x<<")  ";
            for (int c=0; c<10; c++)
            {
                if (matrice[r][c]<10)
                {
                     cout<<"0";
                }
                if (c==9)
                {
                    cout<<matrice[r][c];
                }
                else
                {
                    cout<<matrice[r][c]<<" - ";
                }
            }
            x++;
            cout<<endl;
        }
        x=0;
}

void CreaTavPita (int matrice [10][10])
{
    for (int c=0; c<10; c++)
    {
        for (int r=0; r<10; r++)
        {
            int a=(c+1)*(r+1);
            matrice[r][c]=a;
        }
    }
}

void SommaRiga (int matrice[10][10], int riga)
{
    int ris=0;
    for (int c=0; c<10; c++)
    {
        ris=ris+matrice[riga][c];
    }


    if (riga==0)
    {
        cout<<"La somma della riga 1 e' di: 55"<<endl;
    }
    else
    {
        for (int c=0; c=riga; c++)
        {
            for (int r=0; r<10; r++)
            {
                ris=ris+matrice[c][r];
            }
            cout<<"La somma della riga "<<c+1<<" e' di: "<<ris<<endl;
            break;
        }
    }
}



int main()
{
    int m[10][10];
    int x;
    srand(time(NULL));
    RiempiMatrice(m, 0);
    cout<<"-----------------[Matrice Randomica]-----------------"<<endl;
    StampaMatrice(m);
    cout<<"-----------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"-----------------[Tavola Pitagorica]-----------------"<<endl;
    CreaTavPita(m);
    StampaMatrice(m);
    cout<<"-----------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"-----------------[Somma della riga]-----------------"<<endl;
    cout<<"Inserisci la riga di cui vuoi la somma\n";
    cin>> x;
    while (x<1 || x>10)
    {
        cout<<"Ricordati che le righe vanno da 1 a 10, inserisci un valore tra questi.\n";
        cin>> x;
    }
    SommaRiga(m, x-1);
    return 0;
}
