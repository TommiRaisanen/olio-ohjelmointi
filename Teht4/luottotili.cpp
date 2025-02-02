#include "luottotili.h"



Luottotili::Luottotili(string n, double lr)
    :Pankkitili(n)
{
    luottoRaja = lr;
    cout << "Luottotili avattu " << n << "lle." << endl << "Luottotilin saldo: " << luottoRaja << "e" << endl;
}

bool Luottotili::withdraw(double nosto)
{
    if(nosto <= 0){
        cout << "Et voi nostaa luottotililta nollaa tai negatiivisia"
             << endl;
        return false;
    }
    //Pankkitilin saldo ei saa mennä negatiiviseksi, elienempää ei voi nostaa kun mitä saldo on.
    if(nosto > luottoRaja){
        cout << "Et voi nostaa luottotililta enempaa kun mita raja sallii"
             << endl;
        return false;

    } else {


        cout
                << endl << "(" << omistaja << ") " << nosto << "e suuruinen nosto luottotililta onnistui." << endl; //Noston maara:  << nosto << "e" << endl
            //<< "Luottotilin saldo: " << luottoRaja - nosto << "e" << endl << endl;

        luottoRaja -= nosto;

        return true;
    }
}

bool Luottotili::deposit(double depo)
{
    if(depo <= 0){
        cout << "Et voi tallettaa luottotilille nollaa tai negatiivisia"
             << endl;
        return false;
    }
    else{
        cout
            << endl << "(" << omistaja << ") " << depo << "e suuruinen talletus luottotilille onnistui." << endl; // << depo << "e" << endl
            //<< "Luottotilin saldo: " << luottoRaja + depo << "e" << endl << endl;

        luottoRaja += depo;

        return true;
    }





}

double Luottotili::getBalance()
{
    return luottoRaja;
}





