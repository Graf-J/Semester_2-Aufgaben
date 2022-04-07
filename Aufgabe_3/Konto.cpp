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

void Konto::setzeInhaber(Kunde* kunde) {
    inhaber = kunde;
}

void Konto::drucken() {
    cout << "Kontonummer: " << ktoNr << endl;
    cout << "Saldo:       " << saldo << endl;
    cout << "Zinssatz:    " << zinssatz << endl;
    cout << "Inhaber:     ";
    inhaber->drucken();
    cout << endl;
}