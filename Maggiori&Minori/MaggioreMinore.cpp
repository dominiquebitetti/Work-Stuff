#include <iostream>
#include <fstream>
#include <time.h>


using namespace std;

int main()
{
    int n; 
    int arr[50];
    ofstream numeri ("Numeri.txt");
    ofstream maggiori ("Maggiori.txt");
    ofstream minori ("Minori.txt");

    srand (time(NULL));
    for (int i=0; i<50; i++)
    {
        arr[i] = ((rand() % 100) +1);
    }
    for (int i=0; i<50; i++)
    {
        if (i==10 || i==20 || i==30 || i==40)
        {
            numeri <<endl;
        }
        numeri << arr[i] <<"\t";
    }
    cout<<"Scegli un numero tra 1 e 100.\n";
    cin>> n;
    maggiori << "I numeri maggiori del numero scelto da te ("<<n<<") sono: \n";
    minori << "I numeri minori del numero scelto da te ("<<n<<") sono: \n";
    for (int i=0; i<50; i++)
    {
        if (arr[i]<n)
        {
            minori << arr[i] <<"\t";
        }
        else if (arr[i]>n)
        {
            maggiori << arr[i] <<"\t";
        }
    }




}