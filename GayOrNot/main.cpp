/*
*   GayOrNot.cpp
*   Author: Dominique Bitetti
*   Date: 18/02/2021
*/

#include <iostream>

using namespace std;

string x;

int main()
{
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"Benvenuto nel programma che ti dice che tipo di persona sei in base al tuo nome!"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Ora dimmi come ti chiami, ricordati che i nomi propri iniziano con la maiuscola!"<<endl;
    cin>> x;
        if (x=="Davide")
        {
            cout<<"Oh cazzo, sei l'apice della finocchiaggine unita all'essere morto di figa, testa di cazzo e un elenco molto vasto di termini molto belli"<<endl;
        }
        else if (x=="Mattia")
        {
             cout<<"Assurdo sei prorpio un coglione"<<endl;
        }
        else if (x=="Alessandro")
        {
            cout<<"Sei un amore, non esiste persona più bella, ma sei tanto bello quanto permalosone"<<endl;
        }
        else if (x=="Alessio")
        {
            cout<<"Oh cazzo un terrone."<<endl;
        }
        else if (x=="Veronika")
        {
            cout<<"Veronika sei fika ma un po' problematica, però sei amabile e gentile."<<endl;
        }
        else if (x=="Dominique")
        {
            cout<<"Sei perfetto."<<endl;
        }


        return 0;
    }
