/*
*   Pila_basta.cpp
*   Author: Bitetti Dominique
*   Date: 17/01/21
*   La pila usa la politica Last In First Out (LIFO)
*/

#include <iostream>

using namespace std;

class Pila
{
    public:
    string dati [100];
    int p=0;
    int cont=0;
    Pila()
    {
    }
    string x;
    string push(string parola)
    {
        dati[p] = parola;
        p++;
    }
    string pop ()
    {
        return dati[p];
        p--;
    }
    string inserimento ()
    {
        while (true)
        {
            if ( dati[p] != "basta")
            {
                cont++;
                cin>> x;
                p.push(x);
            }
            else
            {
                while (cont>0)
                {
                    cout<<p.pop()<<endl;
                    cont--;
                }
                break;
            }
            break;
        }
    }

};

int main()
{
    Pila p;
    p.inserimento();


    return 0;
}
