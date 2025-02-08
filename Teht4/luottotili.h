
#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include "pankkitili.h"

class Luottotili : public Pankkitili
{
public:
    Luottotili(string, double);
    bool withdraw(double) override;
    bool deposit(double) override;
    double getBalance();


protected:
    double luottoRaja = 0;
};

#endif // LUOTTOTILI_H

