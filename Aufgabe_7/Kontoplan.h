#include "Depot.h"
#include "Giro.h"

using namespace std;

#ifndef KONTOPLAN_H
#define KONTOPLAN_H

class Kontoplan : public Giro, public Depot {
    public:
        Kontoplan(int ktoNr, double saldo, double giroZinssatz, double limit);
        void einzahlen(double betrag);
        void auszahlen(double betrag);
        void drucken();
};

#endif