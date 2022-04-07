#include <iostream>

#include "Konto.h"

using namespace std;

void test_konto() {
    Konto konto;
    cout << "Konto einrichten (ktoNr: 1, saldo: 0, zinssatz: 2.4%):" << endl;
    konto.einrichten(1, 0, 2.4);
    konto.drucken();
    cout << "13.37€ einzahlen:" << endl;
    konto.einzahlen(13.37);
    konto.drucken();
    cout << "42.42€ einzahlen:" << endl;
    konto.auszahlen(42.42);
    konto.drucken();
}

int main() {
    // Konto konto;
    // konto.einrichten(1, 0.0, 2.5);
    // konto.drucken();

    // Konto* konto = new Konto();
    // konto->einrichten(1, 0.0, 3.5);
    // konto->drucken();

    test_konto();

    return 0;
}