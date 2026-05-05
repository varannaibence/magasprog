#include <iostream>
using namespace std;

/*
Irjon fuggvenyt amelynek ket parametere van, a visszateresi erteke pedig
a ket szam LKKT-je, vagyis legkisebb kozos tobbszorose.

Pelda:
6 es 8 LKKT-je: 24
*/

int lkkt(int a, int b) {
    int nagyobb = a > b ? a : b;
    while (true)    {
        if (nagyobb % a == 0 && nagyobb % b == 0)        {
            return nagyobb;
        }
        nagyobb++;
    }
    return 0;
}

/*
LNKO segitsegnek, kikommentelve.
LNKO = legnagyobb kozos oszto.
Ez pozitiv egesz szamokra mukodik.

int lnko(int a, int b) {
    int kisebb = a < b ? a : b;

    for (int i = kisebb; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            return i;
        }
    }

    return 1;
}
*/

int main() {
    int a, b;
    cout << "Adj meg ket egesz szamot: ";
    cin >> a >> b;

    cout << "LKKT: " << lkkt(a, b) << endl;
    return 0;
}
