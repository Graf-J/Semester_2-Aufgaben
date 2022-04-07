#include "Konto.h"

using namespace std;

#ifndef GIRO_H
#define GIRO_H

class Giro : public Konto {
    private:
        double limit;

    public:
        Giro(int ktoNr, double saldo, double zinssatz, double limit);
        void auszahlen(double betrag);
        void drucken();
};

#endif