#include <iostream>

using namespace std;

class Prostokat
{
    double bok1;
    double bok2;
public:
    Prostokat()
    {
        cout<<"Wywolanie konstruktora domyslnego"<<endl;
    }
    Prostokat(double pBok1, double pBok2)
    {
        cout<<"Wywolanie konstruktora parametrycznego"<<endl;
        bok1 = pBok1;
        bok2 = pBok2;
    }
    Prostokat(const Prostokat &wzorzec)
    {
        cout<<"Wywolanie konstruktora kopiujacego"<<endl;
        bok1 = wzorzec.bok1;
        bok2 = wzorzec.bok2;
    }
    void pobierzBoki(double &pBok1, double &pBok2)
    {
        pBok1 = bok1;
        pBok2 = bok2;
    }
    void ustawBoki(double pBok1, double pBok2)
    {
        bok1 = pBok1;
        bok2 = pBok2;
    }
    double pole()
    {
        return bok1 * bok2;
    }
    double obwod()
    {
        return 2 * bok1 + 2 * bok2;
    }
};

Prostokat kopiujProstokat(Prostokat prostokat)
{
    return prostokat;
}

void wyswietlBoki(double &b1, double &b2)
{
    cout<<"bok1 = "<<b1<<endl;
    cout<<"bok2 = "<<b2<<endl;
    cout<<endl;
}

int main()
{
    double b1, b2;

    cout<<"PIERWSZY PROSTOKAT"<<endl;
    Prostokat p1(1, 2);
    p1.pobierzBoki(b1, b2);
    wyswietlBoki(b1, b2);

    cout<<"DRUGI PROSTOKAT"<<endl;
    Prostokat p2 = p1;
    p2.pobierzBoki(b1, b2);
    wyswietlBoki(b1, b2);

    cout<<"TRZECI PROSTOKAT"<<endl;
    Prostokat p3(p1); // Uzycie konstruktora kopiujacego
    p3.pobierzBoki(b1, b2);
    wyswietlBoki(b1, b2);

    cout<<"CZWARTY PROSTOKAT"<<endl;
    Prostokat p4 = kopiujProstokat(p1);
    p4.pobierzBoki(b1, b2);
    wyswietlBoki(b1, b2);

    return 0;
}
