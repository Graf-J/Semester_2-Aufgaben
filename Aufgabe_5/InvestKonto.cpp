#include <iostream>

#include "InvestKonto.h"
#include "Datum.h"

InvestKonto::InvestKonto(double saldo, double zinssatz, int tag, int monat, int jahr) : zinssatz(zinssatz) {
    // cout << "Konstruktor" << endl;
    InvestKonto::setzeFreieKtoNr(InvestKonto::naechsteFreieKtoNr());
    ktoNr = InvestKonto::freieKtoNr;
    this->saldo = saldo;
    this->faelligkeit = new Datum(tag, monat, jahr);
}

InvestKonto::InvestKonto(InvestKonto& konto) : zinssatz(konto.zinssatz) {
    // cout << "CopyKonstruktor" << endl;
    InvestKonto::setzeFreieKtoNr(InvestKonto::naechsteFreieKtoNr());
    ktoNr = InvestKonto::freieKtoNr;
    this->saldo = konto.saldo / 2;
    konto.saldo /= 2;
    faelligkeit = new Datum();
    faelligkeit->setzen(konto.faelligkeit);
}

InvestKonto::~InvestKonto() {
    // cout << "Destruktor" << endl;
    delete faelligkeit;
}

void InvestKonto::drucken() {
    cout << "Kontonummer: " << ktoNr << endl;
    cout << "Saldo:       " << saldo << endl;
    cout << "Zinssatz:    " << zinssatz << endl;
    cout << "Faelligkeit: ";
    faelligkeit->lesen();
}

unsigned int InvestKonto::naechsteFreieKtoNr() {
    return InvestKonto::freieKtoNr + 11;
}

void InvestKonto::setzeFreieKtoNr(unsigned int freieKtoNr) {
    InvestKonto::freieKtoNr = freieKtoNr;
}




