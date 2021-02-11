/*
*   PilasEvoluta.cpp
*   Author: Bitetti Dominique
*   Date: 15/01/21
*   La pila usa la politica Last In First Out (LIFO)
*/
#include <iostream>
#include <string>

using namespace std;

class Pila{
    public:
    string dati[100];
    int p=0;
    void push(string elemento){
        dati[p]=elemento;
        p++;
    }
    string pop(){
        if (p==0)
        {
            cout<<"Pila vuota"<<endl;
            return "";
        }
        p--;
        return dati[p];
    }

};
int main (){
    Pila p;
    p.push("boh");
    p.push("Dommo");
    p.push("E' stupendo");
    for (int i=0; i<50; i++)
    {
        string s= "stringa numero";
        s.append (std::to_string(i));
        p.push(s);
    }
    cout<<p.pop()<<endl;
    cout<<p.pop()<<endl;
    cout<<p.pop()<<endl;
    cout<<p.pop()<<endl;

    return 0;
}
