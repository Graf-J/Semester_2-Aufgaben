#include <iostream>
#include <cstring>

using namespace std;

struct Kunde {
    char* name;
    char* vorname;
    long plz;
    char* ort;
};

void kunde_einrichten(Kunde& kunde, char* name, char* vorname, const long plz = 80687, const char* ort = "München") {
    kunde.name = new char[sizeof(name)];
    strcpy(kunde.name, name);

    kunde.vorname = new char[sizeof(vorname)];
    strcpy(kunde.vorname, vorname);

    kunde.plz = plz;

    kunde.ort = new char[sizeof(ort)];
    strcpy(kunde.ort, ort);
}

void kunde_einrichten(Kunde* kunde, char* name, char* vorname, const long plz = 80687, const char* ort = "München") {
    kunde->name = new char[sizeof(name)];
    strcpy(kunde->name, name);

    kunde->vorname = new char[sizeof(vorname)];
    strcpy(kunde->vorname, vorname);

    kunde->plz = (long)plz;

    kunde->ort = new char[sizeof(ort)];
    strcpy(kunde->ort, ort);
}

void kunde_loeschen(Kunde& kunde) {
    delete[] kunde.name;
    delete[] kunde.vorname;
    delete[] kunde.ort;
}

void ausgabe_kunde(Kunde& kunde) {
    cout << kunde.name << endl;
    cout << kunde.vorname << endl;
    cout << kunde.plz << endl;
    cout << kunde.ort << endl;
}

int main() {
    Kunde k;

    char name[] = "Graf";
    char vorname[] = "Johannes";
    long plz = 86637;
    char ort[] = "Zusamaltheim";

    kunde_einrichten(k, name, vorname);
    // kunde_einrichten(&k, name, vorname, plz, ort);

    ausgabe_kunde(k);

    kunde_loeschen(k);

    return 0;
}