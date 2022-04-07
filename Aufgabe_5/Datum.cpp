#include "Datum.h"

#include <iostream>

Datum::Datum(int tag, int monat, int jahr) {
    this->tag = (unsigned int)tag;
    this->monat = (unsigned int)monat;
    this->jahr = (unsigned int)jahr;
}

Datum::Datum() { }

void Datum::setzen(Datum* datum) {
    tag = datum->tag;
    monat = datum->monat;
    jahr = datum->jahr;
}

void Datum::lesen() {
    cout << tag << "." << monat << "." << jahr << endl;
}