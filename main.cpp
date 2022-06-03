#include <iostream>

using namespace std;

int main()
{
    int zmienna1 = 1;
    int zmienna2 = 2;

    int *const wskaznik = &zmienna1;

    cout<<"Wartosc zmiennej zmienna1: "<<*wskaznik<<endl;

    (*wskaznik)++; // modyfikacja zmiennej wskazywanej przez wskaznik staly
    cout<<"Zmieniona wartsoc zmiennej zmienna1: "<<*wskaznik<<endl;

    // wskaznik = &zmienna2; <- ta instrukcja jest bledna
    // zmienna wskaznic nie moze w programie zmienic adresu na ktory wskazuje

    int zmienna=6;
    const int *const wsk = &zmienna;

    /* powyzszy zapis to kombinacja dwoch sposobow deklarowania wskaznikow wraz
    ze slowem kluczowym const
    nie jest w nim mozliwe zmodyfikowanie wskazywanej przez wskaznik wartosci ani
    przypisanie nowego adresu zmiennej
    wsk = &zmienna2 <- bledny zapis
    (*wsk)++; <- bledny zapis
    */
    return 0;
}
