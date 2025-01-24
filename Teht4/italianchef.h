#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "kokki.h"

class ItalianChef : public Chef
{
public:
    ItalianChef();
    ~ItalianChef();
    ItalianChef(string name);

    bool askSecret(string pw, int f, int w);

private:
    string password = "pizza";
    int flour = 0;
    int water = 0;
    int makepizza();
};

#endif // ITALIANCHEF_H
