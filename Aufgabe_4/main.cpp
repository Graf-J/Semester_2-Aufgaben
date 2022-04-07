#include <iostream>

#include "InvestKonto.h"
#include "Datum.h"

using namespace std;

void test() {
    cout << "Test Start" << endl;

    InvestKonto ik1(12493, 3000, 2.5, 30, 9, 2017);
    InvestKonto ik2(ik1);

    ik1.drucken();
    ik2.drucken();

    cout << "Test End" << endl;
}

int main() {
    cout << "Main Start" << endl;
    test();
    cout << "Main End" << endl;

    return 0;
}