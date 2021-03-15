/*
*   PositiviENegativi.cpp
*   Author: Dominique Bitetti
*   Date: 12/03/2021
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int num;
    ofstream positivi ("Positivi.txt");
    ofstream negativi ("Negativi.txt");
    positivi<<"I numeri positivi: " <<endl;
    negativi<<"I numeri negativi: " << endl;
    do
    {
        cout<<"Inserisci i numeri da identificare in positivi e negativi, per interrompere l'inserimento, digitare 0"<<endl;
        cin>> num; 
        if (num<0)
        {
            negativi<< num <<"\t";
            if (num==0)
            {
                cout<<" ;";
            }
        }
        else if (num>0)
        {
            positivi<< num <<"\t";
            if (num==0)
            {
                cout<<" ;";
            }
        }
    } while (num != 0);
    
    positivi.close();
    negativi.close();
}