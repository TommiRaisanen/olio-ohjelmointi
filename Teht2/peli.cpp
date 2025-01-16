#include "peli.h"
#include <iostream>

using namespace std;


Peli::Peli(int mN) {
      maxNumber = mN;
    cout << "CONSTRUCTOR: "
         << maxNumber
         << " set as maximum number"
         << endl;

    cout << endl;
}


Peli::~Peli(){

}

void Peli::play(){


    srand(time(0));
    randomNumber = rand() % maxNumber + 1;
    numOfGuesses = 0;


    while(playerGuess != randomNumber) {

        //2. Kysytään arvaus
        cout << "Arvaappa luku 1-"
            << maxNumber
            << " valilla"
             << endl;

        cin >> playerGuess;
        numOfGuesses++;

        //3. Tarkistetaan onko arvaus pienempi, suurempi vai yhtäsuuri
        if(playerGuess == randomNumber){
            cout << "jee voitit" << endl;
            printGameResult();
        }

        if(playerGuess > randomNumber){
            cout << "Luku on pienempi" << endl;
        }

        if(playerGuess < randomNumber){
            cout << "Luku on suurempi" << endl;
        }
    }


}


void Peli::printGameResult(){
    cout << "Satunnainen luku oli: "
         << randomNumber
        << " ja arvailit sita yhteensa: "
        << numOfGuesses
        << " kertaa"
        << endl;
}
