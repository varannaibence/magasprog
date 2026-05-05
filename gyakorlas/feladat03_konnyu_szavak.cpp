#include <iostream>
#include <string>
using namespace std;

/*
3. feladat - konnyu

Kerj be a felhasznalotol n darab szokoz nelkuli szot.
Ird ki:
- hany szo kezdodik nagybetuvel,
- melyik a leghosszabb szo,
- van-e pontosan 5 karakter hosszu szo.

Hasznalj kulon fuggvenyt legalabb az egyik reszfeladathoz.
*/

bool nagybetuvelKezdik(string szo) {
    for (int i = 0; szo[i] != '\0'; i++)
    {
        if (szo[i] >= 'A' && szo[i] <= 'Z')
        {
            return true;
        }
    }
    
    return false;
}

int main() {
    int n;
    cout << "Szavak szama: ";
    cin >> n;

    string szavak[100];
    cout << "Adj meg " << n << " szot:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> szavak[i];
    }

    int nagybetusSzavak = 0;
    for (int i = 0; i < n; i++) {
        if (nagybetuvelKezdik(szavak[i]))
        {
            nagybetusSzavak++;
        }
    }
    cout << "Nagybetuvel kezdodo szavak szama: " << nagybetusSzavak << endl;
    string leghosszabb = szavak[0];
    for (int i = 0; i < n; i++)
    {
        if (szavak[i].length() > leghosszabb.length())
        {
            leghosszabb = szavak[i];
        }
    }
    cout << "Leghoszabb szó:" << leghosszabb << endl;

    int pontosan5karakterhosszu = 0;
    for (int i = 0; i < n; i++)
    {
        if (szavak[i].length() == 5)
        {
            pontosan5karakterhosszu++;
        }
    }
    
    cout << "Pontosan 5 karakter hosszű szavak száma: " << pontosan5karakterhosszu << endl;
    return 0;
}
