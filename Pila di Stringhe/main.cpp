/*
*   Pila di Stringhe.cpp
*   Author: Bitetti Dominique
*   Date: 12/01/2021
*   Pila di stringhe con politica FIFO (first in - first out)
*/


#include <iostream>

using namespace std;

class PilaStr
{   public:
    char* dati[100];
    int p=0;
    Pila ()
    {
    }
    void push (char* e)
    {
        dati[p] = e;
        p++;
    }
    char* pop ()
    {
        p--;
        return dati[p];
    }

};
int main()
{
    PilaStr p;

    p.push("Ciao");
    p.push("Non mi piace");
    p.push("Assurdo");

    cout<<p.pop()<<endl;
    cout<<p.pop()<<endl;
}
