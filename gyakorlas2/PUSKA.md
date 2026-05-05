# ZH puska C++-hoz

Ez gyors segedanyag a `gyakorlas2` feladataihoz. Nem kell bemagolni, inkabb a mintakat kell felismerni.

## 1. Minimum, maximum

```cpp
int kisebb = a < b ? a : b;
int nagyobb = a > b ? a : b;
```

Harom szamnal:

```cpp
int legkisebb = a;
if (b < legkisebb) legkisebb = b;
if (c < legkisebb) legkisebb = c;

int legnagyobb = a;
if (b > legnagyobb) legnagyobb = b;
if (c > legnagyobb) legnagyobb = c;
```

## 2. LNKO

LNKO = legnagyobb kozos oszto.

```cpp
int lnko(int a, int b) {
    int kisebb = a < b ? a : b;

    for (int i = kisebb; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            return i;
        }
    }

    return 1;
}
```

## 3. LKKT

LKKT = legkisebb kozos tobbszoros.

```cpp
int lkkt(int a, int b) {
    int nagyobb = a > b ? a : b;

    while (true) {
        if (nagyobb % a == 0 && nagyobb % b == 0) {
            return nagyobb;
        }
        nagyobb++;
    }
}
```

Gyorsabb keplet LNKO-val:

```cpp
int lkktGyors(int a, int b) {
    return a * b / lnko(a, b);
}
```

## 4. 3x3 matrix soronkent

Soronkenti bejaras:

```cpp
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << matrix[i][j] << " ";
    }
}
```

Soronkenti maximum-minimum kulonbseg:

```cpp
for (int i = 0; i < 3; i++) {
    int minimum = matrix[i][0];
    int maximum = matrix[i][0];

    for (int j = 1; j < 3; j++) {
        if (matrix[i][j] < minimum) minimum = matrix[i][j];
        if (matrix[i][j] > maximum) maximum = matrix[i][j];
    }

    eredmeny[i] = maximum - minimum;
}
```

## 5. Fuggveny tombbel

Sima tombot parameterkent igy adhatsz at:

```cpp
void kiir(int t[5]) {
    for (int i = 0; i < 5; i++) {
        cout << t[i] << " ";
    }
}
```

`array` visszaadasa kenyelmesebb:

```cpp
#include <array>

array<int, 3> fuggveny() {
    array<int, 3> eredmeny{};
    eredmeny[0] = 10;
    return eredmeny;
}
```

## 6. Referencia szerinti atadas

Ha azt akarod, hogy a `main`-ben levo valtozo is megvaltozzon:

```cpp
void nullaz(int& x) {
    x = 0;
}
```

Csere:

```cpp
int temp = a;
a = c;
c = temp;
```

Ket csere egymas utan:

```cpp
int temp = a;
a = c;
c = temp;

temp = b;
b = a;
a = temp;
```

## 7. Struct

```cpp
struct Banan {
    double suly;
    string minoseg;
    bool bio;
};
```

Beolvasas:

```cpp
Banan bananok[5];

for (int i = 0; i < 5; i++) {
    cin >> bananok[i].suly >> bananok[i].minoseg >> bananok[i].bio;
}
```

Kiiras:

```cpp
for (int i = 0; i < 5; i++) {
    cout << bananok[i].suly << " "
         << bananok[i].minoseg << " "
         << bananok[i].bio << endl;
}
```

## 8. Struct tomb rendezese

Novekvo sorrend suly szerint:

```cpp
for (int i = 0; i < 5 - 1; i++) {
    for (int j = 0; j < 5 - 1 - i; j++) {
        if (bananok[j].suly > bananok[j + 1].suly) {
            Banan temp = bananok[j];
            bananok[j] = bananok[j + 1];
            bananok[j + 1] = temp;
        }
    }
}
```

Csokkeno sorrendhez csak a jel fordul:

```cpp
if (bananok[j].suly < bananok[j + 1].suly)
```

## 9. Fajlbeolvasas soronkent

```cpp
#include <fstream>
#include <string>
#include <vector>

ifstream be("sorok.txt");
vector<string> sorok;
string sor;

while (getline(be, sor)) {
    sorok.push_back(sor);
}
```

Fajlba iras:

```cpp
ofstream ki("gyakori.txt");
ki << "szoveg" << endl;
```

Hibakezeles:

```cpp
if (!be.is_open()) {
    cout << "Nem sikerult megnyitni a fajlt." << endl;
    return 1;
}
```

## 10. Nagybetu vizsgalat

ASCII alapjan:

```cpp
if (ch >= 'A' && ch <= 'Z') {
    nagybetuk++;
}
```

Kisbetu:

```cpp
if (ch >= 'a' && ch <= 'z') {
    kisbetuk++;
}
```

Betu altalanosan:

```cpp
if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
    // betu
}
```

## 11. Betugyakorisag angol abc-re

Kis- es nagybetut egybe szamolva:

```cpp
int gyak[26] = {};
int nagybetuk = 0;

for (string sor : sorok) {
    for (char ch : sor) {
        if (ch >= 'A' && ch <= 'Z') {
            nagybetuk++;
            ch = ch - 'A' + 'a';
        }

        if (ch >= 'a' && ch <= 'z') {
            gyak[ch - 'a']++;
        }
    }
}
```

Legritkabb elofordulo betu:

```cpp
int minDb = -1;
char minBetu = '?';

for (int i = 0; i < 26; i++) {
    if (gyak[i] > 0 && (minDb == -1 || gyak[i] < minDb)) {
        minDb = gyak[i];
        minBetu = 'a' + i;
    }
}
```

## 12. Stringstream szavakhoz vagy szamokhoz

```cpp
#include <sstream>

stringstream ss(sor);
string szo;

while (ss >> szo) {
    cout << szo << endl;
}
```

Szamokra:

```cpp
stringstream ss(sor);
int szam;

while (ss >> szam) {
    cout << szam << endl;
}
```

## 13. Tipikus include-ok

```cpp
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <array>
using namespace std;
```

## 14. Gyors ellenorzo lista ZH elott

- Ha fuggveny modositja a parameter valtozot: kell az `&`.
- Ha tombot rendezel: legyen `temp`.
- Ha fajlt olvasol: ellenorizd `is_open()`-nal.
- Ha matrix sorait jarod be: kulso ciklus `i`, belso `j`.
- Ha oszloponkent dolgozol: a belso ciklusban az `i` valtozik, az oszlop index fix.
- Ha nincs talalat: legyen jelzo valtozo, peldaul `bool van = false`.
