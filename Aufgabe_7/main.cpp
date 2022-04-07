#include <iostream>

#include "Konto.h"
#include "Giro.h"
#include "Depot.h"
#include "Kontoplan.h"

using namespace std;

int main() {
    Konto konto1(11111, 4000, 1.5);
    Giro giro1(2222, 2000, 0.5, 1000);
    Depot depot1(3333, 5000, 3);
    Kontoplan kontoplan1(4444, 3000, 0.5, 1000);

    Konto* kontos[] { &konto1, &giro1, &depot1 };

    for (int i = 0; i < 3; i++) {
        kontos[i]->auszahlen(7000);
        kontos[i]->drucken();
        cout << "-----------------------------" << endl;
    }
}