#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
4. feladat - uj gyakorló ZH

Hozz letre egy Alma strukturat:
- fajta
- tomeg
- ar
- magyarTermes bool

Tolts fel egy 6 meretu tombot almakkal.
Rendezd a tombot ar szerint novekvo sorrendbe.
Ird ki a rendezett tombot, majd ird ki kulon a magyar termesuek darabszamat.
*/

struct Alma {
    string fajta;
    double tomeg;
    int ar;
    bool magyarTermes;
};

struct Banón {
    bool erett;
    string szarmazasiOrszag;
    int ar;
    float nutriscore;
};

void rendezArSzerint(Alma almak[6]) {
    sort(almak, almak + 6, [](const Alma& a, const Alma& b) {
        return a.ar < b.ar; // novekvo sorrend
    });
}




void banonrendezesNutri(Banón bananok[5]){
    sort(bananok, bananok+5, [](const Banón& a, const Banón& b){
        return a.nutriscore > b.nutriscore; // csökkenőőő
    });
}



int main() {
    Alma almak[6];

    cout << "Adj meg 6 almat: fajta tomeg ar magyarTermes(0/1)" << endl;
    for (int i = 0; i < 6; i++) {
        cin >> almak[i].fajta >> almak[i].tomeg >> almak[i].ar >> almak[i].magyarTermes;
    }

    rendezArSzerint(almak);

    cout << "Rendezett almak:" << endl;
    for (const Alma& a : almak) {
        cout << a.fajta << " " << a.tomeg << " " << a.ar << " " << a.magyarTermes << endl;
    }

    int magyarTermesekSzama = 0;
    for (const Alma& a : almak) {
        if (a.magyarTermes) {
            magyarTermesekSzama++;
        }
    }
    cout << "Magyar termesuek darabszama: " << magyarTermesekSzama << endl;

    return 0;
}
