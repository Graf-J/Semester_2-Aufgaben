#include "Kunde.h"

#include <iostream>
#include <cstring>

Kunde::Kunde(char* name, char* vorname, long plz, char* ort) {
    this->name = new char[sizeof(name)];
    strcpy(this->name, name);

    this->vorname = new char[sizeof(vorname)];
    strcpy(this->vorname, vorname);

    this->plz = plz;

    this->ort = new char[sizeof(ort)];
    strcpy(this->ort, ort);
}

Kunde::~Kunde() {
    delete[] name;
    delete[] vorname;
    delete[] ort;
}

void Kunde::drucken() {
    cout << name << " " << vorname << endl;
}