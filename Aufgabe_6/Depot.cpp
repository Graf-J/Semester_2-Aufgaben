#include <iostream>

#include "Konto.h"
#include "Depot.h"

Depot::Depot(int ktoNr, double saldo, double zinssatz) : Konto(ktoNr, saldo, zinssatz) { }

void Depot::auszahlen(double betrag) {
    if ((saldo - betrag) < 0) 
        cout << "Konto mit " << (saldo - betrag) * (-1) << "€ ueberzogen!" << endl;
    else
        saldo -= betrag;
}