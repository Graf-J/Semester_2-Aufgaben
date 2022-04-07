#include "Giro.h"
#include "Depot.h"
#include "Kontoplan.h"

#include <iostream>

Kontoplan::Kontoplan(int ktoNr, double saldo, double giroZinssatz, double limit) : Giro(ktoNr, saldo / 2, giroZinssatz, limit), Depot(ktoNr, saldo / 2, giroZinssatz + 2) { }

void Kontoplan::einzahlen(double betrag) {
    Giro::einzahlen(betrag);
}

void Kontoplan::auszahlen(double betrag) {
    Giro::auszahlen(betrag);
}

void Kontoplan::drucken() {
    Giro::drucken();
    cout << "----------------" << endl;
    Depot::drucken();
}

