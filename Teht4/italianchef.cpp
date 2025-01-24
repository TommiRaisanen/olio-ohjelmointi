#include "italianchef.h"


ItalianChef::ItalianChef() {
    cout << "italianchef konstruktori"
         << endl;
}

ItalianChef::ItalianChef(string name)

{
                 cout << "italian kokin nimi: "
               << name
                 << endl;
}

bool ItalianChef::askSecret(string pw, int f, int w)
{
    water = w;
    flour = f;

    if(pw == password){
        makepizza();
        cout << "oikea salis"
             << endl;
        return true;
    }

    if(pw != password){

        cout << "vaara salis"
             << endl;
        return false;
    }

    // tarkistetaan salasana jonka jälkeen kutsutaan makepizza
    // funktio palauttaa true/false riippuen oliko salis oikein

}

int ItalianChef::makepizza()
{

    int pizzat = 0;
    cout << min(water/5, flour/5)<<endl;
    return pizzat;

    //yhteen pizzaan tarvitaan: 5 jauhoa = flour & 5 vettä = water
}

ItalianChef::~ItalianChef() {
    cout << "italian destruktori"
         << endl;
}

