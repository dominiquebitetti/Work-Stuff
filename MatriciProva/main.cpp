/*
* Matrici.cpp
* Esempi d'uso delle matrici
* Author: Bitetti Dominique
* Date: 11 Dicembre 202
*/

#include <iostream>
#include <string>
#include <time.h>

using namespace std;

void RiempiMatrice (int matrice[11][11], int valore)
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

void StampaMatrice (int matrice[11][11])
{

    for (int r=0; r<10; r++)
        {
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
            cout<<endl;
        }
}

void StampaDiagonale (int matrice[11][11])
{
    for (int i=0; i<10; i++)
    {
        if (i<9)
        {
            cout<<matrice[i][i]<<", ";
        }
        else
        {
            cout<<matrice[i][i]<<";";
        }
    }
}

void CreaTavPita (int matrice [11][11])
{
    for (int r=0; r<10; r++)
    {
        for (int c=0; c<10; r++)
        {
            int ris=r*c;
            matrice[r][ris];
        }
    }
}
int main()
{
    int m[11][11];
    srand(time(NULL));
    RiempiMatrice(m, 0);
    StampaMatrice(m);
    cout<<endl;
    cout<<"I numeri presenti sulla diagonale maggiore sono: ";
    StampaDiagonale(m);
    cout<<endl;
    StampaMatrice(m);
    CreaTavPita(m);
    return 0;
}
