#include <iostream>

#include "Konto.h"
#include "Kunde.h"

using namespace std;

void test() {
    char name[] = "Graf";
    char vorname[] = "Johannes";
    long plz = 86637;
    char ort[] = "Zusamaltheim";

    cout << "Creating Kunde Johannes Graf..." << endl;
    Kunde kunde(name, vorname, plz, ort);

    cout << "Creating Konto 1 with Saldo of 42.42€ and Zinssatz of 2.4%..." << endl;
    Konto konto(1, 20.42, 2.4);

    cout << "Setting Johannes Graf to Kontoinhaber..." << endl;
    konto.setzeInhaber(&kunde);

    cout << "Einzahlen 144.44€..." << endl;
    konto.einzahlen(144.44);

    cout << "Auszahlen 50.01€" << endl;
    konto.auszahlen(50.01);

    konto.drucken();
}

int main() {
    test();

    return 0;
}