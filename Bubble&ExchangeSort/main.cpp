#include <iostream>
#include <random>

using namespace std;

const int len = 10;

void generaarray (int arr[10])
{
    for (int i=0; i<10; i++)
    {
        arr[i] = (rand() % 10)+1;
    }
}

void print(int m[10])
{
    for (int i=0; i<len; i++)
    {
        if (i<len-1)
        {
             cout<<m[i]<<" - ";
        }
        if (i==len-1)
        {
            cout<<m[i]<<";";
        }
    }
    cout<<endl;
}

void BubbleCresc (int m[10])
{
    bool swapp;
    int temp=0;
    int confr=0;
    int scam=0;
    do{
		swapp=false;
		for(int i=0;i<len-1;i++)
			if(m[i]>m[i+1])
			{
				temp=m[i];
				m[i]=m[i+1];
				m[i+1]=temp;
				swapp=true;
				scam++;
			}
			confr++;
	} while (swapp);
	cout<<"Numero confronti: "<<confr<<";"<<endl;
	cout<<"Numero scambi: "<<scam<<";"<<endl;
}

void BubbleDecre (int m[10])
{
    bool swapp;
    int temp=0;
    int confr=0;
    int scam=0;
    do{
		swapp=false;
		for(int i=0;i<len-1;i++)
			if(m[i]<m[i+1])
			{
				temp=m[i];
				m[i]=m[i+1];
				m[i+1]=temp;
				swapp=true;
				scam++;
			}
			confr++;
	} while (swapp);
	cout<<"Numero confronti: "<<confr<<";"<<endl;
	cout<<"Numero scambi: "<<scam<<";"<<endl;
}

void ExchangeDecre (int m[10])
{
    int temp=0;
    int confr=0;
    int scam=0;
    for (int i=0; i<len-1; i++)
    {
        for (int j=0; j<len; j++)
        {
            if(m[i]<m[i+1])
			{
				temp=m[i];
				m[i]=m[i+1];
				m[i+1]=temp;
				scam++;
			}
        }
        confr++;
    }
    cout<<"Numero confronti: "<<confr<<";"<<endl;
	cout<<"Numero scambi: "<<scam<<";"<<endl;
}

void ExchangeCresc (int m[10])
{
    int temp=0;
    int confr=0;
    int scam=0;
    for (int i=0; i<len-1; i++)
    {
        for (int j=0; j<len; j++)
        {
            if(m[i]>m[i+1])
			{
				temp=m[i];
				m[i]=m[i+1];
				m[i+1]=temp;
				scam++;
			}
        }
        confr++;
    }
    cout<<"Numero confronti: "<<confr<<";"<<endl;
	cout<<"Numero scambi: "<<scam<<";"<<endl;
}



int main ()
{
    char scelta, metodo;
    int arr[10];
    generaarray(arr);
    print (arr);
    cout<<"Con quale metodo vuoi ordinare il vettore? Metodo Bubble (digitare B) oppure metodo Exchange (digitare E)\n";
    cin>> metodo;
    if (metodo=='B' || metodo=='b')
    {
        cout<<"Metodo Bubble: \n";
        cout<<"Che tipo di ordinamento desideri? Crescente (digitare C) oppure decrescente (digitare D)\n";
        cin>> scelta;
        if (scelta=='C' || scelta=='c')
        {
            cout<<"Il tuo vettore ordinato in maniera crescente: "<<endl;
            BubbleCresc(arr);
            print(arr);
        }
        else
        {
            cout<<"Il tuo vettore ordinato in maniera decresdcente: "<<endl;
            BubbleDecre(arr);
            print(arr);
        }
    }
    else
    {
        cout<<"Metodo Exchange: \n";
        cout<<"Che tipo di ordinamento desideri? Crescente (digitare C) oppure decrescente (digitare D)\n";
        cin>> scelta;
        if (scelta=='C' || scelta=='c')
        {
            cout<<"Il tuo vettore ordinato in maniera crescente: "<<endl;
            ExchangeCresc(arr);
            print(arr);
        }
        else
        {
            cout<<"Il tuo vettore ordinato in maniera decresdcente: "<<endl;
            ExchangeDecre(arr);
            print(arr);
        }
    }
}
