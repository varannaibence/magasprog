#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

/*
1. feladat - map gyakorlás

Irj programot, amely szavakat olvas be a billentyuzetrol.
A beolvasas addig tartson, amig a felhasznalo azt nem irja be, hogy: vege

A program szamolja meg, hogy melyik szo hanyszor fordult elo.
Ehhez hasznalj map<string, int> adatszerkezetet.

A vegen ird ki az osszes szot es az elofordulasi darabszamat.

Pelda bemenet:
alma
korte
alma
barack
korte
alma
vege

Pelda kimenet:
alma: 3
barack: 1
korte: 2

Plusz gyakorlashoz:
- ird ki azt is, melyik szo fordult elo a legtobbszor,
- ird ki, hany kulonbozo szo volt osszesen.
*/

int main() {
    map<string, int> gyakorisag;
    string szo;

    cout << "Adj meg szavakat. A beolvasas vege: vege" << endl;

    while (true) {
        cin >> szo;
        if (szo == "vege") {
            break;
        }
        gyakorisag[szo]++;
    }
    // Ide dolgozz:
    // 1. olvass be szavakat cin-nel
    // 2. ha a szo "vege", allj meg
    // 3. kulonben noveld a map-ben az adott szo darabszamat

    cout << "Szavak gyakorisaga:" << endl;

    for (const auto& par : gyakorisag) {
        cout << par.first << ": " << par.second << endl;
    }

    cout << "Leggyakoribb szo: " << gyakorisag.begin()->first << endl;

    cout << "Kulonbozo szavak szama: " << gyakorisag.size() << endl;


    return 0;
}

