#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/*
9. feladat - nehez

Hozz letre egy "szoveg.txt" fajlt.
Olvasd be soronkent, majd keszits statisztikat:
- hany sor van a fajlban,
- hany szo van osszesen,
- melyik a leghosszabb szo,
- hany sor tartalmaz legalabb 5 szot,
- hany szo kezdodik ugyanazzal a betuvel, mint amivel vegzodik.

Az eredmenyt ird ki a kepernyore es egy "statisztika.txt" fajlba is.
*/

bool ugyanazzalKezdodikEsVegzodik(string szo) {
    // Ide dolgozz.
    return false;
}

int main() {
    ifstream bemenet("szoveg.txt");
    ofstream kimenet("statisztika.txt");

    if (!bemenet.is_open()) {
        cout << "Nem sikerult megnyitni a szoveg.txt fajlt." << endl;
        return 1;
    }

    // Ide dolgozz.
    return 0;
}
