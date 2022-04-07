using  namespace std;

#ifndef DATUM_H
#define DATUM_H

class Datum {
    private:
        unsigned int tag;
        unsigned int monat;
        unsigned int jahr;
    public:
        Datum();
        Datum(int tag, int monat, int jahr);
        void setzen(Datum* datum);
        void lesen();
};

#endif