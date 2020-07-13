#include "PlikTekstowy.h"


string PlikTekstowy::pobierzNazwePliku()
{
    return NAZWA_PLIKU;
}

bool PlikTekstowy::czyPlikJestPusty()
{
    fstream plikTekstowy;
    bool pusty = true;
    plikTekstowy.open(pobierzNazwePliku().c_str(), ios::in);
    if (plikTekstowy.good() == true)
    {
    plikTekstowy.seekg(0, ios::end);
    if (plikTekstowy.tellg() != 0) pusty = false;
    }
    plikTekstowy.close();
    return pusty;
}
