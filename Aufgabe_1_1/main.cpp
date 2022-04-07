#include <iostream>

using namespace std;

struct Kunde {
    char* name;
    char* vorname;
    long plz;
    char* ort;
};

void kunde_einrichten(Kunde& kunde, char* name, char* vorname, const long plz = 80687, const char* ort = "München") {
    kunde.name = name;
    kunde.vorname = vorname;
    kunde.plz = (long)plz;
    kunde.ort = (char*)ort;
}

void kunde_einrichten(Kunde* kunde, char* name, char* vorname, const long plz = 80687, const char* ort = "München") {
    kunde->name = name;
    kunde->vorname = vorname;
    kunde->plz = (long)plz;
    kunde->ort = (char*)ort;
}

int main() {
    Kunde k;

    char name[25] = "Graf";
    char vorname[25] = "Johannes";
    long plz = 86637;
    char ort[25] = "Zusamaltheim";

    kunde_einrichten(&k, name, vorname);
    // kunde_einrichten(&k, name, vorname, plz, ort);

    cout << k.name << endl;
    cout << k.vorname << endl;
    cout << k.plz << endl;
    cout << k.ort << endl;

    return 0;
}