#include <iostream>

#include "InvestKonto.h"
#include "Datum.h"

using namespace std;

void test() {
    // cout << "Test Start" << endl;

    InvestKonto ik1(3000, 2.5, 30, 9, 2017);
    InvestKonto ik2(ik1);
    InvestKonto ik3(ik1);

    ik1.drucken();
    cout << endl;
    ik2.drucken();
    cout << endl;
    ik3.drucken();

    // cout << "Test End" << endl;
}

unsigned int InvestKonto::freieKtoNr = 430000001;
int main() {
    // cout << "Main Start" << endl;
    test();
    // cout << "Main End" << endl;

    return 0;
}