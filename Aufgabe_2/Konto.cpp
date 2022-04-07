#include <iostream>

#include "Konto.h"

void Konto::einrichten(int ktoNr, double saldo, double zinssatz) {
    this->ktoNr = ktoNr;
    this->saldo = saldo;
    this->zinssatz = zinssatz;
}

void Konto::einzahlen(double betrag) {
    saldo += betrag;
}

void Konto::auszahlen(double betrag) {
    saldo -= betrag;
}

void Konto::drucken() {
    cout << "KontoNr.: " << ktoNr << "\nSaldo: " << saldo << "\nZinssatz: " << zinssatz << endl;
}