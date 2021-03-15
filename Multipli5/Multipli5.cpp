/*
*   Multipli5.cpp
*   Author: Dominique Bitetti
*   Date: 12/03/2021
*/



#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    int num; 
    ofstream multi5 ("Multipli5.txt");
    multi5<<"I multipli di 5 sono: "<<endl;
    do 
    {
        cout<<"Inserisci i numeri, ricordati che se inserisci il numero 0 non puoi piu' aggiongere altri numeri."<<endl;
        cin>> num;
        if (num%5 == 0)
        {
            multi5 << num;
            if (num == 0)
            {
                multi5<< " ; ";
            }
            else
            {
                multi5<<" - ";
            }
        }
    } while (num != 0);
    multi5 << endl << "Il programma e' finito" <<endl;
    multi5.close();

}