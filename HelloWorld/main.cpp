#include <iostream>
#include <random>
#include <time.h>

using namespace std;

int g;

void CreaVettore (int v[], int l)
{
    for (int i=0; i<l; i++)
    {
        v[i]=rand();

    }
}

void RovesciaVettore (int v[], int l)
{
    for (int i=0; i<l/2; i++)
    {
        int temp=v[i];
        v[i]=v[l-1-i];
        v[l-1-i]=temp;
    }
}

void StampaVettore (int v[], int l)
{
   for (int i=0; i<l; i++)
    {
        cout<<v[i]<<"\t";
    }
}

void OrdinaVettoreCrescente (int a[], int l)
{
	for (int t=0; t<l-1; t++)
	{
		for (int i=0; i<l-1; i++)
		{
			if (a[i]>a[i+1])
			{
				int temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	}
}

void OrdinaVettoreDecrescente (int a[], int l)
{
	for (int t=0; t<l-1; t++)
	{
		for (int i=0; i<l-1; i++)
		{
			if (a[i]<a[i+1])
			{
				int temp= a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	}
}

void CercaMax (int a[], int l)
{
	for (int t=0; t<l; t++)
	{
		for (int i=0; i<l-1; i++)
		{
			if (a[i]>a[i+1])
			{
				int ris = a[i];
				a[i] = a[i+1];
				a[i+1] = ris;
			}
		}
	}

}

void CercaMin (int a[], int l)
{
	for (int t=0; t<l; t++)
	{
		for (int i=0; i<l-1; i++)
		{
			if (a[i]<a[i+1])
			{
				int ris = a[i];
				a[i] = a[i+1];
				a[i+1] = ris;
			}
		}
	}
}

int main()
{
    cout<<"Inserisci il numero di elementi che vuoi nel vettore.\n";
    cin>> g;
    int x[g];
    srand(time(NULL));
    CreaVettore (x, g);
    StampaVettore (x, g);
    cout<<"\n\nIl vettore rovesciato:\n";
    RovesciaVettore(x, g);
    StampaVettore(x, g);
    OrdinaVettoreCrescente(x, g);
    cout<<"\n\nIl vettore ordinato in modo crescente:\n";
    StampaVettore(x, g);
    cout<<"\n\nIl numero piu' piccolo del vettore e':\n"<<x[0];
    cout<<"\n\nIl vettore ordinato in modo decrescente:\n";
    OrdinaVettoreDecrescente (x, g);
    StampaVettore (x, g);
    cout<<"\n\nIl numero piu' grande del vettore e':\n"<<x[0];

    return 0;
}
