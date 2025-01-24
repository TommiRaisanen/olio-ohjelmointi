#ifndef KOKKI_H
#define KOKKI_H
#include <iostream>
using namespace std;


class Chef
{
public:
    Chef();
    Chef(string name); // Constructor
    ~Chef(); // Destructor

    string getChefName() const;

    int makeSalad(int aines);
    int makeSoup(int aines);

protected:
    string chefName;
};



#endif // KOKKI_H
