using namespace std;

#ifndef KONTO_H
#define KONTO_H

class Konto {
    private:
        unsigned int ktoNr;
        double zinssatz;

    protected:
        double saldo;
    
    public:
        Konto(int ktoNr, double saldo, double zinssatz);
        void einzahlen(double betrag);
        virtual void auszahlen(double betrag);
        virtual void drucken();
};

#endif