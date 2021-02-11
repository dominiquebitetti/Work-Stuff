/*
*   Pila.cpp
*   Author: Bitetti Dominique
*   Date: 11/01/2021
*   Pila con politica FIFO (first in - first out)
*/


#include <iostream>

using namespace std;

class Pila
{   public:
    int d=100, dati[100], p=0;
    Pila ()
    {
    }
    void push (int e)
    {
        dati[p] = e;
        p++;
    }
    int pop ()
    {
        p--;
        return dati [p];
    }

};



int main()
{
    Pila p;
    p.push (33);
    p.push (52);
    p.push (69);

    cout<<p.pop()<<endl;
    cout<<p.pop()<<endl;






}
