/*
* HelloParameters.cpp
* Author: Dominique Bitetti
* Date: 23 December 2020
*/

#include <iostream>

using namespace std;

int somma (int a, int b)
{
    int ris;
    ris=a+b;
    return ris;
}

int decrementa (int& x)
{
    x=x-1;
    cout<< &x<<endl;
    return x;
}

int main()
{
    int n;
    n=100;
    int* pn; //Riferimento
    pn= &n;
    decrementa(n);
    cout<<n<<endl;
    cout<< *pn<<endl;

    char *s, *s2;
    s2=s="Bologna";
    cout<<s<<endl;
    while (*s !=0)
    {
        cout<<*s<<endl;
        s++;
    }
    cout<<s2<<endl;
    *(s2+4)=0;
    return 0;
}
