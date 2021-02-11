#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int g;

void RiempiVettore (int v[], int l)
{
    for (int i=0; i<l; i++)
    {
        v[i]=44;
    }
}

int main()
{
    int vet[10];
    RiempiVettore (vet, 9);
    for (int j=0; j<10; j++)
    {
        cout<< vet[j]<<"\t";
    }
    cout<< endl;

}
