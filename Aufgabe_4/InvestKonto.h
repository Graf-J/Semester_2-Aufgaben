#include "Datum.h"

using namespace std;

#ifndef INVERSTKONTO_H
#define INVERSTKONTO_H

class InvestKonto {
    private:
        unsigned int ktoNr;
        double saldo;
        const double zinssatz;
        Datum* faelligkeit;
    public:
        InvestKonto(int ktoNr, double saldo, double zinssatz, int tag, int monat, int jahr);
        InvestKonto(InvestKonto& investKonto);
        ~InvestKonto();
        void drucken();
};

#endif