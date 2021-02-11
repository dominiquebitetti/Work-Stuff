/*
 * BattagliaNavaleUno - Una battaglia navale contro il computer sulla costa
 * Author: Dominique Bitetti
 * Date: 4 September 2020
 * Gelp sui codici mappa: 0-empty, 1-ship, 2-bomb, 3-strike
*/

#include <iostream>
#include <random>
#include <ctime>

using namespace std;

void Initialize (int v[], int l)
{
    for (int i=0; i<l; i++)
    {
        v[i]=0;
    }
}

void Show (int v[], int l)
{
    for (int i=0; i<l; i++)
    {
        switch (v[i])
        {
        case 0:
            cout<<"O ";
            break;
        case 1:
            cout<< "O ";
            break;
        case 2:
            cout<< "- ";
            break;
        case 3:
            cout<<"* ";
        }
    }
}

void Arrange (int v[], int l)
{
    srand (time(NULL));
    int n = rand() % (l-1);
    v[n] = 1;
    v[n+1] = 1;
}

void LaunchBomb (int v[], int l)
{
    int p=-1;
    while (p<0 || p>=l)
    {
        cout<<"\nInserire le coordinate in cui sganciare la bomba (0..."<<l-1<<")"<<endl;
        cin>> p;
        p=p-1;
    }
    if (v[p]==0)
    {
        cout<<"Hai sganciato una bomba a vuoto!\n";
        v[p]=2;
    }
    if (v[p]==1)
    {
        cout<<"Hai colpito la nave, complimenti!\n";
        v[p]=3;
    }
}
bool WeWon (int v[], int l)
{
    for (int i=0; i<l; i++)
    {
        if (v[i]==1)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int cont=0;
    const int MAPLENGHT = 10;
    int map[MAPLENGHT];
    Initialize (map, MAPLENGHT);
    Arrange(map, MAPLENGHT);
    Show(map, MAPLENGHT);
    while (true)
    {
        LaunchBomb(map, MAPLENGHT);
        Show(map, MAPLENGHT);
        cont++;
        if (WeWon(map, MAPLENGHT)==false)
        {
            cout<<"\nE l'hai affondata\n";
            cout<<"\n\nEz win\n\n";
            break;
        }
    }
    if (cont<=3)
    {
        cout<<"Ben fatto sergente";
    }
    else if(cont<=5)
    {
        cout<<"Potevi fare di meglio cadetto,";
    }
    else if(cont<=7)
    {
        cout<<"Mannaggia sei un casual,";
    }
    cout<<" hai distrutto la flotta nemica utilizzando "<<cont<<" bombe."<<endl;
    system ("pause");

}
