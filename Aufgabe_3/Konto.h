#include "Kunde.h"

using namespace std;

#ifndef KONTO_H
#define KONTO_H

class Konto {
    private:
        unsigned int ktoNr;
        double saldo;
        double zinssatz;
        Kunde* inhaber;
    
    public:
        Konto(int ktoNr, double saldo, double zinssatz);
        void einzahlen(double betrag);
        void auszahlen(double betrag);
        void setzeInhaber(Kunde* kunde);
        void drucken();
};

#endif