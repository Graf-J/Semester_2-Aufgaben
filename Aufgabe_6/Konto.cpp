#include <iostream>

#include "Konto.h"

Konto::Konto(int ktoNr, double saldo, double zinssatz) {
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
    cout << "KontoNr.: " << ktoNr << endl;
    cout << "Saldo:    " << saldo << endl;
    cout << "Zinssatz: " << zinssatz << endl;
}