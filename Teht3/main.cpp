#include <iostream>
#include "kokki.h"
#include "italianchef.h"

using namespace std;

int main()
{

    Chef kokki_olio("Gordon");

    int sAnnoksia = kokki_olio.makeSalad(50);
        cout << "annoksia : ";
         cout << sAnnoksia
                << endl;

    int kAnnoksia = kokki_olio.makeSoup(15);
         cout << "annoksia : ";
         cout << kAnnoksia
         << endl;


         ItalianChef i_olio("mario");
        i_olio.askSecret("pizza", 50, 50);




    return 0;
}
