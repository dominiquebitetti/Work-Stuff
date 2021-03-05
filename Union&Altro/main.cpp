#include <iostream>

using namespace std;

union bandiera
{
    string colore1;
    string colore2;

};

bo, ro;

int main()
{

    bo.colore1 = 1;
    bo.colore2 = 2;

    ro=bo;

    cout<<ro.colore1<<endl;
    cout<<bo.colore1<<endl;



}
