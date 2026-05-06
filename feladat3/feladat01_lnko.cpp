#include <iostream>
using namespace std;

/*
1. feladat - uj gyakorló ZH

Irj fuggvenyt, amely ket egesz szamot kap parameterul, es visszaadja
a ket szam LNKO-jat, vagyis legnagyobb kozos osztojat.

Pelda:
24 es 36 LNKO-ja: 12
*/

int lnko(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    return a; // vagy b, mert a == b
}

int main() {
    int a, b;
    cout << "Adj meg ket egesz szamot: ";
    cin >> a >> b;

    cout << "LNKO: " << lnko(a, b) << endl;
    return 0;
}
