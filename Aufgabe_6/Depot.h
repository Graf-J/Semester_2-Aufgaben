#include "Konto.h"

using namespace std;

#ifndef DEPOT_H
#define DEPOT_H

class Depot : public Konto {
    public:
        Depot(int ktoNr, double saldo, double zinssatz);
        void auszahlen(double betrag);
};

#endif