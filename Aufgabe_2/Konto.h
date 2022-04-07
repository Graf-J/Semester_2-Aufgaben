using namespace std;

#ifndef KONTO_H
#define KONTO_H

class Konto {
    private:
        unsigned int ktoNr;
        double saldo;
        double zinssatz;
    
    public:
        void einrichten(int ktoNr, double saldo, double zinssatz);
        void einzahlen(double betrag);
        void auszahlen(double betrag);
        void drucken();
};

#endif