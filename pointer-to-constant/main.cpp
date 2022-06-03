#include <iostream>

using namespace std;

int main()
{
    int zmienna1 = 1;
    const int *wskaznik = &zmienna1;
    cout<<"Wartosc zmiennej zmienna1: "<<*wskaznik<<endl;

    // *wskaznik = 10 <- ta instrukcja jest bledna
    // nie mozna zmienic wartosci zmiennej wskazywanej

    int zmienna2 = 2;
    wskaznik = &zmienna2;
    cout<<"Wartosc zmiennej zmienna2: "<<*wskaznik<<endl;

    return 0;
}
