#include <iostream>

using namespace std;
//Prototyyppi
int game(int maxnum);

int main()
{
    int arvaukset = 0;
    int maxnum = 40;

    arvaukset = game(maxnum);
    cout << "arvauksia " << arvaukset << endl;
    return 0;
}

int game(int maxnum){
    int arvaukset = 0;
    int sLuku = 0;
    int aLuku = 0;
    cout << "Korkein mahdollinen satunnaisesti arvottu luku on:  " << maxnum
         << endl;

    /*
    cout << "maxnum: "
         << maxnum
         << endl;
    */

    //1. Arvotaan luku
    //sLuku = 17;
    srand(time(NULL));
    sLuku = rand() % maxnum;

    while(aLuku != sLuku) {

        //2. Kysytään arvaus
        cout << "Annappa luku? "
             << endl;

        cin >> aLuku;
        arvaukset++;

        //3. Tarkistetaan onko arvaus pienempi, suurempi vai yhtäsuuri
        if(aLuku == sLuku){
            cout << "jee voitit" << endl;
        }

        if(aLuku > sLuku){
            cout << "Luku on pienempi" << endl;
        }

        if(aLuku < sLuku){
            cout << "Luku on suurempi" << endl;
        }
    }
    return arvaukset;
}
