#include <iostream>
using namespace std;

/*
Ez volt a ZH - 3. feladat

Irjon fuggvenyt amelynek 3 integer parametere van: a, b, c.
A legkisebb es a legnagyobb erteket irja felul 0-ra, majd cserelje meg
az a es c, majd a b es a valtozok erteket.

A fuggveny visszateresi erteke void.
A cserék utani allapotot a main fuggvenyben irja ki.

Fontos: referencia szerinti atadast hasznalj, kulonben a main nem latja
a valtozasokat.
*/

void atirEsCserel(int& a, int& b, int& c) {
    int legkisebb = a < b ? (a < c ? a : c) : (b < c ? b : c);
    int legnagyobb = a > b ? (a > c ? a : c) : (b > c ? b : c);

    if (a == legkisebb || a == legnagyobb)
    {
        a = 0;
    }
    if (b == legkisebb || b == legnagyobb)
    {
        b = 0;
    }
    if (c == legkisebb || c == legnagyobb)
    {
        c = 0;
    }

    // Cserék
    int temp = a;
    a = c;
    c = temp;

    temp = b;
    b = a;
    a = temp;
}

int main() {
    int a, b, c;
    cout << "Adj meg harom egesz szamot: ";
    cin >> a >> b >> c;

    atirEsCserel(a, b, c);

    cout << "Cserék utani allapot:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}
