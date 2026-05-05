#include <iostream>
using namespace std;

/*
3. feladat - uj gyakorló ZH

Irj void fuggvenyt, amely harom integer valtozot kap referencia szerint: a, b, c.

A fuggveny:
- a kozepso erteket irja felul 100-ra,
- majd cserelje meg b es c erteket,
- utana cserelje meg a es b erteket.

A main fuggvenyben ird ki a valtozok vegso allapotat.
*/

void atrendez(int& a, int& b, int& c) {
    // Ide dolgozz.
}

int main() {
    int a, b, c;
    cout << "Adj meg harom egesz szamot: ";
    cin >> a >> b >> c;

    atrendez(a, b, c);

    cout << "Vegso allapot:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
