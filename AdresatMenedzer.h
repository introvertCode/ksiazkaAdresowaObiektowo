#ifndef ADRESATMENEDZER_H
#define ADRESATMENEDZER_H

#include <vector>
#include <algorithm>

#include "Adresat.h"
#include "PlikZAdresatami.h"


class AdresatMenedzer
{
    vector <Adresat> adresaci;
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    PlikZAdresatami plikZAdresatami;

    Adresat podajDaneNowegoAdresata(int idZalogowanegoUzytkownika, int idOstatniegoAdresata);
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    string wczytajLinie();

public:
    void dodajAdresata(int idZalogowanegoUzytkownika);
    void wypiszAdresatow();
    void wyczyscWektorAdresaci();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    void ustawIdOstatniegoAdresata();

};


#endif
