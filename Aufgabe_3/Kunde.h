using namespace std;

#ifndef KUNDE_H
#define KUNDE_H

class Kunde {
    private:
        char* name;
        char* vorname;
        long plz;
        char* ort;
    public:
        Kunde(char* name, char* vorname, long plz, char* ort);
        ~Kunde();
        void drucken();
};

#endif