#include <iostream>
#include "seuraaja.h"
#include "notifikaattori.h"
using namespace std;

int main()
{
    Notifikaattori *N = new Notifikaattori();
    Seuraaja *A = new Seuraaja("Jaakko");
    Seuraaja *B = new Seuraaja("Kaapo");
    Seuraaja *C = new Seuraaja("Maiju");

    cout << endl;

    N->lisaa(A);
    N->lisaa(B);
    N->lisaa(C);

    cout << endl;

    N->tulosta();

    cout << endl;

    N->postita("Kahvinkeitin hajos");

    cout << endl;

    B->reaction("niin huono postaus et unfollaan");
     N->poista(B);

    cout << endl;

    C->reaction("dang oliks viel moccamaster?");

    cout << endl;

    N->tulosta();

    cout << endl;

    N->postita("Nyt se toimii taas jee");

    delete A;
    delete B;
    delete C;
    delete N;

    return 0;

}
