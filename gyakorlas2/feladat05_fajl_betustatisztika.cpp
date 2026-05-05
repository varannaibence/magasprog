#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
Ez volt a ZH - 5. feladat

Olvassa be a sorok.txt allomanyt egy tetszoleges adatszerkezetbe, peldaul
vektorba.

Irja ki a gyakori.txt-be:
- a legritkabban elofordulo betut es szamossagat,
- valamint a nagybetuk szamat.

Egyszerusites gyakorlashoz:
- eleg az angol abc betuivel dolgozni,
- a kis- es nagybetuket a gyakorisagnal veheted kulon vagy egybe is,
  de dontsd el elore es kommentben ird oda.
*/

int main() {
    ifstream bemenet("sorok.txt");
    ofstream kimenet("gyakori.txt");

    if (!bemenet.is_open()) {
        cout << "Nem sikerult megnyitni a sorok.txt fajlt." << endl;
        return 1;
    }

    vector<string> sorok;
    string sor;

    while (getline(bemenet, sor)) {
        sorok.push_back(sor);
    }

    // A gyakorisagnal a kis- es nagybetuket egybe szamoljuk.
    int gyak[26] = {};
    int nagybetuk = 0;

    for (string sor : sorok) {
        for (char ch : sor) {
            if (ch >= 'A' && ch <= 'Z') {
                nagybetuk++;
                ch = ch - 'A' + 'a';
            }

            if (ch >= 'a' && ch <= 'z') {
                gyak[ch - 'a']++;
            }
        }
    }

    int minDb = -1;
    char minBetu = '?';

    for (int i = 0; i < 26; i++) {
        if (gyak[i] > 0 && (minDb == -1 || gyak[i] < minDb)) {
            minDb = gyak[i];
            minBetu = 'a' + i;
        }
    }

    kimenet << "Legritkabb betu: " << minBetu << endl;
    kimenet << "Szamossaga: " << minDb << endl;
    kimenet << "Nagybetuk szama: " << nagybetuk << endl;

    cout << "Legritkabb betu: " << minBetu << endl;
    cout << "Szamossaga: " << minDb << endl;
    cout << "Nagybetuk szama: " << nagybetuk << endl;

    return 0;
}
