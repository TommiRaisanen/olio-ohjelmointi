#include "seuraaja.h"



Seuraaja::Seuraaja(string n)
{
    nimi = n;
    cout << "Luodaan seuraaja: " << n << endl;
}

string Seuraaja::getNimi()
{
    return nimi;
}

void Seuraaja::paivitys(string viesti)
{
    cout << nimi << " sai viestin: " << viesti << endl << endl;
}

void Seuraaja::reaction(string reaction)
{
    cout << nimi << " reagoi postaukseen: " << reaction << endl << endl;
}
