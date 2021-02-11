/*
*   Cerchi.cpp
*   Author: Dominique Bitetti
*   Date: 10 December 2021
*   Classe e oggetti di un cerchio
*/

#include <iostream>

using namespace std;

const float pi = 3.14;

class Cerchio
{
    public:
    float raggio;
    float area;
    float circonferenza;
    Cerchio (float r)
    {
        raggio = r;
    }
    void presentati ()
    {
        cout<<"Sono un cerchio di raggio "<<raggio<<", la mia circonferenza e' di "<<circonferenza<<" e la mia area e' di "<<area<<endl;
    }
    void calcoli ()
    {
        area = raggio*raggio*pi;
        circonferenza = 2*raggio*pi;
    }
};



int main()
{
    cout<<pi<<endl;

    Cerchio x (5);
    Cerchio y (7);

    x.calcoli();
    y.calcoli();

    x.presentati();
    y.presentati();

    return 0;
}
