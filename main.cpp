#include <iostream>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt");
    //ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    ksiazkaAdresowa.wypiszAdresatow();
    //ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    ksiazkaAdresowa.dodajAdresata();
//    ksiazkaAdresowa.dodajAdresata();
    //ksiazkaAdresowa.wypiszAdresatow();
    ksiazkaAdresowa.wylogujUzytkownika();
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
    ksiazkaAdresowa.wypiszAdresatow();
    ksiazkaAdresowa.dodajAdresata();
//    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.wypiszAdresatow();
    ksiazkaAdresowa.wylogujUzytkownika();

    return 0;
}
