#include <iostream>

using namespace std;

class Auto
{
    public:
    int conta;
    string colore;
    string marca;
    Auto ( string col, string m)
    {
        conta = 0;
        colore = col;
        marca = m;
    }
    void presentazione ()
    {
        cout<<"Il modello di questa macchina e': "<<marca<<", sono una macchina "<<colore<<" e ho fatto "<<conta<<" km."<<endl;
    }
    void viaggia (int km)
    {
        conta=conta+km;
    }
};

int main()
{
    Auto x ( "rossa", "Telsa");
    Auto y ( "bianca", "Chevrolet");
    Auto z ( "nera", "Ford");

    x.viaggia (26);
    y.viaggia (92);
    z.viaggia (53);
    x.viaggia (64);
    y.viaggia (23);
    z.viaggia (67);
    x.viaggia (56);
    y.viaggia (74);
    z.viaggia (56);

    x.presentazione();
    y.presentazione();
    z.presentazione();
}
