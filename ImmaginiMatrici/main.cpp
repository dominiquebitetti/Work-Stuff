/*
*   ImmaginiMatrici.cpp
*   Author: Bitetti Dominique
*   Date: 18 December 2020
*   Some random 2D arrays designs
*/

#include <iostream>

using namespace std;

void RiempiMatrice (char matrice[10][10])
{
    for (int r=0; r<10; r++)
    {
        for (int c=0; c<10; c++)
        {
            matrice[r][c]= '*' ;
        }
    }
}

void RiempiMatriceSuperiore (char matrice[10][10])
{
    for (int r=0; r<10; r++)
    {
        for (int c=0; c<10; c++)
        {
            if (r==c)
            {
            matrice[r][c]= '@';
            }
            else if(r<c)
            {
                matrice[r][c]= '#';
            }
            else
            {
                matrice[r][c]='§';
            }
        }
    }
}

void StampaMatrice (char matrice[10][10])
{
    for (int r=0; r<10; r++)
    {
        cout<<endl;
        for (int c=0; c<10; c++)
        {
            cout<<matrice[r][c]<<" ";
        }
    }
}



int main()
{
    char m[10][10];
    RiempiMatrice(m);
    StampaMatrice(m);
    cout<<endl;
    RiempiMatriceSuperiore(m);
    StampaMatrice(m);

    return 0;
}
