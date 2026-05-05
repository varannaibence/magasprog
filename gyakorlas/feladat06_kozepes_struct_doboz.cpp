#include <iostream>
using namespace std;

/*
6. feladat - kozepes

Definialj egy Doboz structot:
- szelesseg
- magassag
- melyseg
- tomeg

Kerj be 6 dobozt a felhasznalotol.
Ird ki:
- a dobozok osszterfogatat,
- a legnehezebb doboz adatait,
- hany doboz fer bele egy 1000 terfogatu raktarhelybe kulon-kulon,
  vagyis hany doboznak kisebb vagy egyenlo a terfogata 1000-nel.

Hasznalj kulon fuggvenyt a terfogat kiszamitasara.
*/

struct Doboz {
    int szelesseg;
    int magassag;
    int melyseg;
    double tomeg;
};

int terfogat(Doboz d) {
    // Ide dolgozz.
    return 0;
}

int main() {
    Doboz dobozok[6];

    cout << "Adj meg 6 dobozt: szelesseg magassag melyseg tomeg" << endl;
    for (int i = 0; i < 6; i++) {
        cin >> dobozok[i].szelesseg
            >> dobozok[i].magassag
            >> dobozok[i].melyseg
            >> dobozok[i].tomeg;
    }

    // Ide dolgozz.
    return 0;
}
