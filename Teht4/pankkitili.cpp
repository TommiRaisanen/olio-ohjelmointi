#include "pankkitili.h"



Pankkitili::Pankkitili(string name)
{
    omistaja = name;
    //cout << "Pankkitili avattu " << name << "lle." << endl;
}

bool Pankkitili::withdraw(double nosto)
{

    //cout << "Pankkitilin saldo on: " << getBalance() << "e" << endl  << "Noston maara: " << nosto << "e"
      //   << endl << endl;

    //Negatiivisia nostoja / talletuksia ei voi tehdä. Esimnoston parametriksi ei voi antaa summaa -123.45.
    if(nosto <= 0){

        cout << "Et voi nostaa nollaa tai negatiivisia"
            << endl
             << endl;
        return false;
    }
    //Pankkitilin saldo ei saa mennä negatiiviseksi, elienempää ei voi nostaa kun mitä saldo on.
    if(nosto > saldo){
               cout << "Nosto / siirto epaonnistui"
             << endl;
            return false;

    } else {
        saldo -= nosto;
        cout
            << endl
            << "(" << omistaja << ") "
            << nosto
            << "e "
            << "suuruinen nosto pankkitililta onnistui."
            << endl;


        return true;
    }
    //Nämä jäsenfunktiot palauttavat true/false senmukaan onnistuiko talletus/nosto.
    //Luokassa on myös getteri saldolle (getBalance()).
}

bool Pankkitili::deposit(double talletus)
{
    //cout << "Pankkitilin saldo on: " << getBalance() << "e" << endl << "Talletuksen maara: " << talletus << "e" << endl << endl;

    //Negatiivisia nostoja / talletuksia ei voi tehdä. Esimnoston parametriksi ei voi antaa summaa -123.45.
    if(talletus <= 0){

        cout << "Et voi tallettaa nollaa tai negatiivisia"
             << endl
             << endl;
        return false;
    } else {
        saldo += talletus;
        cout
            << endl
            << "(" << omistaja << ") "
            << talletus
            << "e "
            << "suuruinen talletus pankkitilille onnistui."
            << endl;
        return true;
    }

}

double Pankkitili::getBalance()
{
    return saldo;

}
