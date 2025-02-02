#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"

using namespace std;

int main()
{
    Asiakas A("Mario", 1000);
    Asiakas B("Luigi", 1000);

        A.showSaldo();
        B.showSaldo();

        A.talletus(100);
        A.tiliSiirto(25, B);
        B.tiliSiirto(15, A);

        A.showSaldo();
        B.showSaldo();



    /*
    Pankkitili PT("Mario");
    Luottotili LT("Mario", 1000);


    PT.deposit(100);
    PT.withdraw(75);


    LT.withdraw(350);
    LT.deposit(100);
    */

    return 0;
}
