#include "Datum.h"

using namespace std;

#ifndef INVERSTKONTO_H
#define INVERSTKONTO_H

class InvestKonto {
    private:
        static unsigned int freieKtoNr;
        unsigned int ktoNr;
        double saldo;
        const double zinssatz;
        Datum* faelligkeit;
    public:
        InvestKonto(double saldo, double zinssatz, int tag, int monat, int jahr);
        InvestKonto(InvestKonto& investKonto);
        ~InvestKonto();
        void drucken();
        static void setzeFreieKtoNr(unsigned int freieKtoNr);
        static unsigned int naechsteFreieKtoNr();
};

#endif