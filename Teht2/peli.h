#ifndef PELI_H
#define PELI_H

class Peli
{
public:
    ~Peli();
    Peli(int);
    void play();

private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;

    void printGameResult();

};

#endif // PELI_H
