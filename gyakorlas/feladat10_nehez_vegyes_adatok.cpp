#include <fstream>
#include <iostream>
#include <string>
using namespace std;

/*
10. feladat - nehez

Hozz letre egy "emberek.txt" fajlt.
Minden sorban egy ember adatai legyenek:
nev eletkor magassag testsuly

Pelda:
Reka 20 160 60
Bence 22 182 78

Olvasd be az adatokat egy Ember struct tombbe.
Ird ki:
- a legidosebb ember nevet,
- a legfiatalabb ember nevet,
- az atlagmagassagot,
- hany ember eletkora paros,
- ki a legkonnyebb azok kozul, akik legalabb 170 cm magasak.

Az eredmenyeket a kepernyore es egy "emberek_eredmeny.txt" fajlba is ird ki.
*/

struct Ember {
    string nev;
    int eletkor;
    int magassag;
    double testsuly;
};

int main() {
    ifstream bemenet("emberek.txt");
    ofstream kimenet("emberek_eredmeny.txt");

    if (!bemenet.is_open()) {
        cout << "Nem sikerult megnyitni az emberek.txt fajlt." << endl;
        return 1;
    }

    Ember emberek[100];
    int n = 0;

    // Ide dolgozz.
    return 0;
}
