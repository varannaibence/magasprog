#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

/*
7. feladat - kozepes

Hozz letre kezzel egy "szamok.txt" fajlt ebben a mappaban.
A fajl minden sora tobb egesz szamot tartalmazzon szokozzel elvalasztva.

Olvasd be a fajlt soronkent, majd irj egy "sorinfo.txt" fajlt, amely minden sorhoz
kiirja:
- a sor osszeget,
- a sor atlagat,
- hogy az atlag legalabb 50-e: igen/nem.

Pelda kimeneti sor:
osszeg=180 atlag=60 igen
*/

int main() {
    ifstream bemenet("szamok.txt");
    ofstream kimenet("sorinfo.txt");

    if (!bemenet.is_open()) {
        cout << "Nem sikerult megnyitni a szamok.txt fajlt." << endl;
        return 1;
    }

    string sor;
    while (getline(bemenet, sor)) {
        stringstream ss(sor);
        // Ide dolgozz.
    }

    return 0;
}
