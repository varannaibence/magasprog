#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

/*
5. feladat - uj gyakorló ZH

Olvasd be a mondatok.txt allomanyt soronkent egy vector<string> adatszerkezetbe.

Irj ki az eredmeny.txt fajlba:
- hany sor volt,
- hany szo volt osszesen,
- melyik volt a leghosszabb szo,
- hany olyan szo volt, amely legalabb 6 karakter hosszu,
- hany sorban volt tobb mint 3 szo.
*/

int main() {
    ifstream bemenet("mondatok.txt");
    ofstream kimenet("eredmeny.txt");

    if (!bemenet.is_open()) {
        cout << "Nem sikerult megnyitni a mondatok.txt fajlt." << endl;
        return 1;
    }

    vector<string> sorok;
    string sor;

    while (getline(bemenet, sor)) {
        sorok.push_back(sor);
    }

    // Ide dolgozz.

    return 0;
}
