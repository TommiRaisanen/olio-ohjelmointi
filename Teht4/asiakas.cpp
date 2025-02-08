#include "asiakas.h"



Asiakas::Asiakas(string n, double lr)
    :Pankkitili(n), Luottotili(n, lr)
{

    nimi = n;
    cout << "Asiakkuus luotu " << n << "lle" <<  endl;
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout  << endl << nimi << "n " << "pankkitilin saldo: " << Pankkitili.getBalance() << "e" << endl;
    cout  << nimi << "n " << "luottotilin saldo: " << Luottotili.getBalance() << "e" << endl;
}

bool Asiakas::talletus(double talletus)
{

    if(talletus > 0){

    Pankkitili.deposit(talletus);

        return true;

    } else {

        cout << "ei toimi" << endl;
        return false;
    }
}

bool Asiakas::nosto(double nosto)
{
    if(nosto > 0){
        Pankkitili.withdraw(nosto);
        return true;
    } else {
        return false;
    }
}

bool Asiakas::luotonMaksu(double depo)
{
    if(depo > 0){
        Luottotili.deposit(depo);
        return true;
    } else {
        return false;
    }
}

bool Asiakas::luotonNosto(double nosto)
{
    if(nosto > 0){
        Luottotili.withdraw(nosto);
        return true;
    } else {
        return false;
    }
}

bool Asiakas::tiliSiirto(double nosto, Asiakas &saaja)
{
    bool check_koliket = Pankkitili.withdraw(nosto);
    if (check_koliket == true) {
        cout << "mr. moneymans " << nimi << " siirtaa " << nosto << "e " << saaja.getNimi() << "lle" << endl;
        saaja.talletus(nosto);
        return true;

        } else {

        cout << nimi << " yrittaa tilisiirtoa mutta rahulit loppu :/" << endl;
        return false;

    }


}

