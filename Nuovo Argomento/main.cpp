/*
** PO-vettore.cpp
*/
#include <iostream>
using namespace std;

class Vettore{
    const int DIM=100;
    int dati;
    public:
    Vettore(){
        dati=new int[DIM];
        for(int i=0; i<DIM; i++){
            dati[i]=0;
        }
    }
    void stampa(){
        for(int i=0; i<DIM; i++){
            cout<<dati[i]<<" ";
        }
        cout<<endl;
    }
    void write(int index, int value){
        dati[index]=value;
    }
    int read(int index){
        return dati[index];
    }
};
int main(){
    Vettore v;
    v.write(3,33);
    v.write(4,44);
    v.stampa();

    return 0;
}
