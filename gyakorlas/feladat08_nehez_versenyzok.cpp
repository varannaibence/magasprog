#include <iostream>
#include <string>
using namespace std;

/*
8. feladat - nehez

Definialj egy Versenyzo structot:
- nev
- kor
- pontszam

Kerj be n versenyzot, ahol n maximum 50.
Ird ki:
- a legtobb pontot elert versenyzo nevet,
- az atlagpontszamot,
- hany versenyzo fiatalabb 18 evnel,
- van-e olyan versenyzo, akinek legalabb 90 pontja van,
- a versenyzoket pontszam szerint csokkeno sorrendben.

Hasznalj legalabb ket kulon fuggvenyt.
*/

struct Versenyzo {
    string nev;
    int kor;
    int pontszam;
};

double atlagPont(Versenyzo versenyzok[], int n) {
    // Ide dolgozz.
    return 0;
}

void rendezPontSzerint(Versenyzo versenyzok[], int n) {
    // Ide dolgozz. Egyszeru buborekos rendezes is jo.
}

int main() {
    int n;
    cout << "Versenyzok szama: ";
    cin >> n;

    Versenyzo versenyzok[50];
    cout << "Adj meg minden versenyzot: nev kor pontszam" << endl;
    for (int i = 0; i < n; i++) {
        cin >> versenyzok[i].nev >> versenyzok[i].kor >> versenyzok[i].pontszam;
    }

    // Ide dolgozz.
    return 0;
}
