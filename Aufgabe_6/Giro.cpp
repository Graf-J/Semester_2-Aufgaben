#include "Konto.h"
#include "Giro.h"

#include <iostream>

Giro::Giro(int ktoNr, double saldo, double zinssatz, double limit) : Konto(ktoNr, saldo, zinssatz) {
    this->limit = limit;
}

void Giro::auszahlen(double betrag) {
    if ((saldo - betrag) > limit)
        saldo -= betrag;
    else
        cout << "Konto um " << limit - (saldo - betrag) << "€ ueberzogen!" << endl;
}

void Giro::drucken() {
    Konto::drucken();
    cout << "Limit:    " << limit << endl;
}