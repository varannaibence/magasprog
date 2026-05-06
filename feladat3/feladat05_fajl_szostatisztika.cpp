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
    ifstream bemenet("feladat3/mondatok.txt");
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

    int sorSzam = sorok.size();
    int szoSzam = 0;
    string leghosszabbSzo;
    int hatKarakterSzoSzam = 0;
    int tobbMintHaromSzoSorSzam = 0;

    for (const string& s : sorok) {
        stringstream ss(s);
        string szo;
        int sorSzoSzam = 0;

        while (ss >> szo) {
            szoSzam++;
            sorSzoSzam++;

            if (szo.length() > leghosszabbSzo.length()) {
                leghosszabbSzo = szo;
            }

            if (szo.length() >= 6) {
                hatKarakterSzoSzam++;
            }
        }

        if (sorSzoSzam > 3) {
            tobbMintHaromSzoSorSzam++;
        }
    }

    kimenet << "Sorok száma: " << sorSzam << endl;
    kimenet << "Szavak száma: " << szoSzam << endl;
    kimenet << "Leghosszabb szó: " << leghosszabbSzo << endl;
    kimenet << "6 karakter vagy több: " << hatKarakterSzoSzam << endl;
    kimenet << "Több mint 3 szó: " << tobbMintHaromSzoSorSzam << endl;

    return 0;
}
