#include "notifikaattori.h"




Notifikaattori::Notifikaattori()
{
//constructor
}

void Notifikaattori::lisaa(Seuraaja *uusiSeur)
{
    //uuden seuraajan nextiin vanha seuraaja
    uusiSeur -> next = seuraajat;

    //seuraajien alkuun uusi seuraaja
    seuraajat = uusiSeur;
    cout << "Lisataan seuraaja: " << uusiSeur->getNimi() << endl;
}

void Notifikaattori::poista(Seuraaja *poistSeur)
{
    cout << "Poistetaan seuraaja: " << poistSeur ->getNimi() << endl;
    Seuraaja *alku = seuraajat;
    while(alku != nullptr){
        if(alku -> next == poistSeur){
            alku -> next = poistSeur -> next;
        }
        alku = alku -> next;
    }

}

void Notifikaattori::tulosta() //tulosta seuraajalista
{
    Seuraaja *alku = seuraajat;
    cout << "Seuraajalista: " << endl;
    while(alku != nullptr){
        cout << alku->getNimi() << endl;
        alku = alku -> next;
    }


}

void Notifikaattori::postita(string viesti)
{
    Seuraaja *alku = seuraajat;
    cout << "Viesti faneille: " << endl;
    while(alku != nullptr){
        alku -> paivitys(viesti);
        alku = alku -> next;
    }

}
