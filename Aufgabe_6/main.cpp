#include "Konto.h"
#include "Giro.h"
#include "Depot.h"
#include "Kontoplan.h"

#include <iostream>

using namespace std;

void test_depot_und_giro() {
    Konto konto1(11111, 4000, 1.5);
    Giro giro1(2222, 2000, 0.5, 1000);
    Depot depot1(3333, 5000, 3);

    cout << "Konto(11111, 4000, 1.5)" << endl;
    konto1.drucken();
    cout << "\nGiro(2222, 2000, 0.5, 1000)" << endl;
    giro1.drucken();
    cout << "\nGiro(3333, 5000, 3)" << endl;
    depot1.drucken();

    cout << "\n505.05€ in Konto einzahlen..." << endl;
    konto1.einzahlen(505.05);
    konto1.drucken();

    cout << "\n5000€ von Konto auszahlen..." << endl;
    konto1.auszahlen(5000);
    konto1.drucken();

    cout << "\n500€ von Giro auszahlen..." << endl;
    giro1.auszahlen(500);
    giro1.drucken();

    cout << "\n600€ von Giro auszahlen..." << endl;
    giro1.auszahlen(600);
    giro1.drucken();

    cout << "\n4000€ von Depot auszahlen..." << endl;
    depot1.auszahlen(4000);
    depot1.drucken();

    cout << "\n1001€ von Depot auszahlen..." << endl;
    depot1.auszahlen(1001);
    depot1.drucken();
}

void test_kontoplan() {
    cout << "Kontoplan(4444, 3000, 0.5, 1000)" << endl;
    Kontoplan kontoplan1(4444, 3000, 0.5, 1000);
    kontoplan1.drucken();
}

int main() {
    test_depot_und_giro();
    // test_kontoplan();

    return 0;
}