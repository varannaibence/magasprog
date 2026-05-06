#include <iostream>
#include <map>
#include <string>
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

    // Ide dolgozz:
    // 1. olvass be szavakat cin-nel
    // 2. ha a szo "vege", allj meg
    // 3. kulonben noveld a map-ben az adott szo darabszamat

    cout << "Szavak gyakorisaga:" << endl;

    // Ide dolgozz:
    // jarj vegig a map elemein, es ird ki:
    // szo: darabszam

    // Plusz:
    // keresd meg a leggyakoribb szot
    // ird ki a kulonbozo szavak szamat

    return 0;
}

