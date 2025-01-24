#include "kokki.h"


Chef::Chef()
{

}

Chef::Chef(string name)
{
    chefName = name;
    cout << "chef constructor, kokin nimi: "
         << endl
         << chefName
         << endl;
}

Chef::~Chef()
{
    cout << "chef destructor"
         << endl;
}

string Chef::getChefName() const
{
    return chefName;
}

int Chef::makeSalad(int aines)
{

    int annoksia = 0;
    annoksia = aines / 5;

    cout << "Aineksia salaattiin: " //annokseen tarvitaan 5 ainesta
         << aines
         << endl;
    return annoksia;
}

int Chef::makeSoup(int aines)
{
    int annoksia = 0;
    annoksia = aines / 3;
    cout << "Aineksia keittoon: "
         << aines
         << endl;
    return annoksia;
}
