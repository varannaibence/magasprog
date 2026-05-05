#include <iostream>
#include <string>
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

void rendezArSzerint(Alma almak[6]) {
    // Ide dolgozz.
}

int main() {
    Alma almak[6];

    cout << "Adj meg 6 almat: fajta tomeg ar magyarTermes(0/1)" << endl;
    for (int i = 0; i < 6; i++) {
        cin >> almak[i].fajta >> almak[i].tomeg >> almak[i].ar >> almak[i].magyarTermes;
    }

    rendezArSzerint(almak);

    // Ide dolgozz.
    return 0;
}
