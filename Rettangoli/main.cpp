/*
*   Rettangoli.cpp
*   Author: Dominique Bitetti
*   Date: 8/01/21
*   Classi di rettangoli
*/


#include <iostream>

using namespace std;

class Rettangolo
{
    private: int lato_minore, lato_maggiore;
    public: Rettangolo(int lmin, int lmag)
    {
        lato_minore = lmin;
        lato_maggiore = lmag;
    }
    public: int getArea()
    {
        return lato_maggiore*lato_minore;
    }
    public: void presenta()
    {
        cout<<"Sono un rettagolo "<<lato_minore<<" x "<<lato_maggiore<< " e ho un'area di "<<getArea()<<"."<<endl;
    }
};

int main()
{
    Rettangolo r1 (10, 15);
    Rettangolo r2 (20, 32);
    r1.presenta();
    r2.presenta();
    return 0;
}
