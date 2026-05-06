# C++ ZH segedlet

Ez egy gyors, de eleg atfogo puska a mostani ZH-tipusu feladatokhoz. A cel: ha ranezel egy feladatra, felismerd, melyik mintat kell hasznalni.

Kapcsolodo reszletesebb anyag: [Tanci C++ segedlet](tanci/TANCI_SEGEDLET.md)

## Content Table

- [1. Alap include-ok](#1-alap-include-ok)
- [2. Fuggveny alap](#2-fuggveny-alap)
- [3. Referencia szerinti parameter](#3-referencia-szerinti-parameter)
- [4. Csere](#4-csere)
- [5. Minimum es maximum](#5-minimum-es-maximum)
- [6. LNKO](#6-lnko)
- [7. LKKT](#7-lkkt)
- [8. Tombok](#8-tombok)
- [9. Kereses tombben](#9-kereses-tombben)
- [10. Matrixok](#10-matrixok)
- [11. Soronkenti max-min kulonbseg](#11-soronkenti-max-min-kulonbseg)
- [12. Oszloponkenti max-min kulonbseg](#12-oszloponkenti-max-min-kulonbseg)
- [13. Főátló és mellékátló](#13-főátló-és-mellékátló)
- [14. array](#14-array)
- [15. Pointerek](#15-pointerek)
- [16. Struct](#16-struct)
- [17. Rendezés sort-tal](#17-rendezés-sort-tal)
- [18. Fajlkezeles](#18-fajlkezeles)
- [19. Vector](#19-vector)
- [20. String es karakter](#20-string-es-karakter)
- [21. Betugyakorisag](#21-betugyakorisag)
- [22. Stringstream](#22-stringstream)
- [23. Teljes fajlos betustatisztika minta](#23-teljes-fajlos-betustatisztika-minta)
- [24. Programozasi tetelek](#24-programozasi-tetelek)
- [25. Tipikus ZH hibak](#25-tipikus-zh-hibak)
- [26. ZH gyors stratégia](#26-zh-gyors-stratégia)
- [27. Mini fordítási parancsok](#27-mini-fordítási-parancsok)

## Programozasi Tetelek Gyorslinkek

- [Összegzés](#összegzés)
- [Megszámlálás](#megszámlálás)
- [Eldöntés](#eldöntés)
- [Kiválasztás](#kiválasztás)
- [Keresés](#keresés)
- [Másolás](#másolás)
- [Kiválogatás](#kiválogatás)
- [Szétválogatás](#szétválogatás)
- [Metszet](#metszet)
- [Unió](#unió)
- [Maximum kiválasztás](#maximum-kiválasztás)
- [Minimum kiválasztás](#minimum-kiválasztás)
- [Rendezés cserével](#rendezés-cserével)
- [Buborékrendezés](#buborékrendezés)
- [ZH-ban melyiket valaszd?](#zh-ban-melyiket-valaszd)

## 1. Alap include-ok

Ha nem akarsz sokat gondolkodni ZH-n, ezek gyakran elegendok:

```cpp
#include <algorithm>
#include <array>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
```

Mire jok?

```cpp
#include <iostream>  // cin, cout
#include <fstream>   // ifstream, ofstream
#include <sstream>   // stringstream
#include <string>    // string
#include <vector>    // vector
#include <array>     // array
#include <algorithm> // sort
```

## 2. Fuggveny alap

Altalanos forma:

```cpp
visszateresiTipus fuggvenyNev(parameterLista) {
    // kod
    return ertek;
}
```

Pelda:

```cpp
int osszeg(int a, int b) {
    return a + b;
}
```

Ha nincs visszateresi ertek:

```cpp
void kiir(int x) {
    cout << x << endl;
}
```

## 3. Referencia szerinti parameter

Ha a fuggvenyben modosítani akarod a main-ben levo valtozot, kell az `&`.

```cpp
void nullaz(int& x) {
    x = 0;
}
```

Pelda:

```cpp
int a = 5;
nullaz(a);
cout << a; // 0
```

Ha nincs `&`, akkor csak masolat modosul:

```cpp
void rosszNullaz(int x) {
    x = 0;
}
```

## 4. Csere

Ket valtozo csereje:

```cpp
int temp = a;
a = b;
b = temp;
```

Harom parameteres referencia-feladatnal:

```cpp
void cserel(int& a, int& b, int& c) {
    int temp = a;
    a = c;
    c = temp;

    temp = b;
    b = a;
    a = temp;
}
```

Fontos: mindig az aktualis ertekeket csereled, nem az eredetieket.

## 5. Minimum es maximum

Ket szam:

```cpp
int kisebb = a < b ? a : b;
int nagyobb = a > b ? a : b;
```

Harom szam:

```cpp
int minimum = a;
if (b < minimum) minimum = b;
if (c < minimum) minimum = c;

int maximum = a;
if (b > maximum) maximum = b;
if (c > maximum) maximum = c;
```

Tombben:

```cpp
int minimum = t[0];
int maximum = t[0];

for (int i = 1; i < n; i++) {
    if (t[i] < minimum) minimum = t[i];
    if (t[i] > maximum) maximum = t[i];
}
```

## 6. LNKO

LNKO = legnagyobb kozos oszto.

Egyszeru verzio:

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

Gyorsabb Euklideszi algoritmus:

```cpp
int lnko(int a, int b) {
    while (b != 0) {
        int maradek = a % b;
        a = b;
        b = maradek;
    }
    return a;
}
```

## 7. LKKT

LKKT = legkisebb kozos tobbszoros.

Egyszeru verzio:

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

LNKO-val:

```cpp
int lkkt(int a, int b) {
    return a * b / lnko(a, b);
}
```

Ha valamelyik szam 0, akkor a fenti osztas/maradekolas gond lehet. ZH-n tobbnyire pozitiv egeszekkel dolgoztok.

## 8. Tombok

Beolvasas:

```cpp
int t[10];

for (int i = 0; i < 10; i++) {
    cin >> t[i];
}
```

Kiiras:

```cpp
for (int i = 0; i < 10; i++) {
    cout << t[i] << " ";
}
```

Fuggveny tombbel:

```cpp
int osszeg(int t[10]) {
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        sum += t[i];
    }

    return sum;
}
```

## 9. Kereses tombben

Pelda: legkisebb paros.

```cpp
int legkisebbParos(int t[10]) {
    bool vanParos = false;
    int legkisebb = 0;

    for (int i = 0; i < 10; i++) {
        if (t[i] % 2 == 0) {
            if (!vanParos || t[i] < legkisebb) {
                legkisebb = t[i];
                vanParos = true;
            }
        }
    }

    if (!vanParos) {
        return -1;
    }

    return legkisebb;
}
```

Miért jo a `bool vanParos`?

Mert a `-1` lehetne valodi adat is, ha negativ szamok vannak.

## 10. Matrixok

3x3 matrix:

```cpp
int matrix[3][3];
```

Beolvasas:

```cpp
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cin >> matrix[i][j];
    }
}
```

Soronkenti bejaras:

```cpp
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << matrix[i][j] << " ";
    }
    cout << endl;
}
```

Oszloponkenti bejaras:

```cpp
for (int j = 0; j < 3; j++) {
    for (int i = 0; i < 3; i++) {
        cout << matrix[i][j] << " ";
    }
    cout << endl;
}
```

## 11. Soronkenti max-min kulonbseg

```cpp
array<int, 3> sorKulonbsegek(int matrix[3][3]) {
    array<int, 3> eredmeny{};

    for (int i = 0; i < 3; i++) {
        int minimum = matrix[i][0];
        int maximum = matrix[i][0];

        for (int j = 1; j < 3; j++) {
            if (matrix[i][j] < minimum) minimum = matrix[i][j];
            if (matrix[i][j] > maximum) maximum = matrix[i][j];
        }

        eredmeny[i] = maximum - minimum;
    }

    return eredmeny;
}
```

## 12. Oszloponkenti max-min kulonbseg

```cpp
array<int, 4> oszlopTerjedelem(int matrix[4][4]) {
    array<int, 4> eredmeny{};

    for (int j = 0; j < 4; j++) {
        int minimum = matrix[0][j];
        int maximum = matrix[0][j];

        for (int i = 1; i < 4; i++) {
            if (matrix[i][j] < minimum) minimum = matrix[i][j];
            if (matrix[i][j] > maximum) maximum = matrix[i][j];
        }

        eredmeny[j] = maximum - minimum;
    }

    return eredmeny;
}
```

## 13. Főátló és mellékátló

4x4 matrixnal a főátló:

```cpp
matrix[0][0]
matrix[1][1]
matrix[2][2]
matrix[3][3]
```

Kod:

```cpp
for (int i = 0; i < 4; i++) {
    osszeg += matrix[i][i];
}
```

Mellékátló:

```cpp
matrix[0][3]
matrix[1][2]
matrix[2][1]
matrix[3][0]
```

Kod:

```cpp
for (int i = 0; i < 4; i++) {
    osszeg += matrix[i][3 - i];
}
```

Altalanosan `n x n` matrixnal:

```cpp
matrix[i][n - 1 - i]
```

## 14. `array`

Az `array<double, 5>` azt jelenti:

- `double` elemek,
- pontosan 5 darab,
- visszaadhato fuggvenybol.

```cpp
array<double, 5> atlagok{};
```

A `{}` nullazza az elemeket:

```cpp
0.0, 0.0, 0.0, 0.0, 0.0
```

Kiiras:

```cpp
for (double x : atlagok) {
    cout << x << " ";
}
```

## 15. Pointerek

A pointer egy olyan valtozo, amely egy masik valtozo memoria-cimet tarolja.

### Alap pointer

```cpp
int x = 10;
int* p = &x;
```

Mit jelent?

```cpp
&x   // x memoria-cime
p    // a pointerben tarolt cim
*p   // az a valtozo, amire p mutat
```

Pelda:

```cpp
int x = 10;
int* p = &x;

cout << x << endl;   // 10
cout << *p << endl;  // 10
```

### Dereferalas

A `*p` azt jelenti: menj oda, ahova a pointer mutat, es az ottani ertekkel dolgozz.

```cpp
int x = 10;
int* p = &x;

*p = 25;

cout << x << endl; // 25
```

Ez azert 25, mert `p` az `x`-re mutatott.

### Pointer es referencia kulonbseg

Referencia:

```cpp
void novel(int& x) {
    x++;
}
```

Pointer:

```cpp
void novel(int* p) {
    (*p)++;
}
```

Hasznalat:

```cpp
int a = 5;

novel(a);   // referencias verzio
novel(&a);  // pointeres verzio
```

ZH-ra egyszeru szabaly:

- Ha `int& x`, akkor siman `x`-et irsz a fuggvenyben.
- Ha `int* p`, akkor az ertekhez `*p` kell.
- Ha egy valtozo cime kell, akkor `&valtozo`.

### Pointer fuggvenyparameterkent

```cpp
void nullaz(int* p) {
    *p = 0;
}

int main() {
    int x = 12;
    nullaz(&x);
    cout << x << endl; // 0
}
```

### Tomb es pointer kapcsolata

Egy tomb neve sok helyzetben ugy viselkedik, mint az elso elem cime.

```cpp
int t[3] = {10, 20, 30};

cout << t[0] << endl;   // 10
cout << *t << endl;     // 10
cout << *(t + 1) << endl; // 20
```

Ezert mukodik ez:

```cpp
void kiir(int* t, int n) {
    for (int i = 0; i < n; i++) {
        cout << t[i] << " ";
    }
}
```

Hivas:

```cpp
int tomb[5] = {1, 2, 3, 4, 5};
kiir(tomb, 5);
```

### Dinamikus tomb

Ha futas kozben derul ki a meret:

```cpp
int n;
cin >> n;

int* t = new int[n];

for (int i = 0; i < n; i++) {
    cin >> t[i];
}

delete[] t;
```

Fontos: amit `new[]`-val foglalsz, azt `delete[]`-val szabaditod fel.

### Dinamikus tomb visszaadasa fuggvenybol

```cpp
int* letrehoz(int n) {
    int* t = new int[n];

    for (int i = 0; i < n; i++) {
        t[i] = 0;
    }

    return t;
}
```

Hasznalat:

```cpp
int* tomb = letrehoz(5);

// munka a tombbel

delete[] tomb;
```

Megjegyzes: ha lehet, ZH-n `array` vagy `vector` kenyelmesebb, de pointeres feladatnal ez kellhet.

### nullptr

Ha egy pointer nem mutat sehova:

```cpp
int* p = nullptr;
```

Hasznalat elott ellenorzes:

```cpp
if (p != nullptr) {
    cout << *p << endl;
}
```

### Gyakori pointer hibak

- `int* p;` csak letrehoz egy pointert, de nem biztos, hogy ervenyes helyre mutat.
- `*p = 5;` csak akkor jo, ha `p` mar ervenyes cimre mutat.
- `new[]` utan `delete[]` kell, nem sima `delete`.
- A `&` cimkepzes, a `*` pointer deklaracional pointert jelent, hasznalatnal dereferalast.

Mini puska:

```cpp
int x = 5;
int* p = &x;

cout << x;   // ertek
cout << &x;  // cim
cout << p;   // cim
cout << *p;  // ertek
```

## 16. Struct

Pelda:

```cpp
struct Banan {
    double suly;
    string minoseg;
    bool bio;
};
```

Letrehozas:

```cpp
Banan b;
b.suly = 120;
b.minoseg = "A";
b.bio = true;
```

Tomb:

```cpp
Banan bananok[5];
```

Beolvasas:

```cpp
for (int i = 0; i < 5; i++) {
    cin >> bananok[i].suly >> bananok[i].minoseg >> bananok[i].bio;
}
```

Kiiras:

```cpp
for (int i = 0; i < 5; i++) {
    cout << bananok[i].suly << " "
         << bananok[i].minoseg << " "
         << (bananok[i].bio ? "bio" : "nem bio") << endl;
}
```

## 17. Rendezés `sort`-tal

Kell:

```cpp
#include <algorithm>
```

Sima tomb rendezese:

```cpp
int t[5] = {5, 2, 9, 1, 3};
sort(t, t + 5);
```

Struct tomb rendezese mező szerint:

```cpp
sort(bananok, bananok + 5, [](Banan a, Banan b) {
    return a.suly < b.suly;
});
```

Ez növekvő sorrend:

```cpp
return a.suly < b.suly;
```

Ez csökkenő sorrend:

```cpp
return a.suly > b.suly;
```

Mit jelent a `bananok + 5`?

A `sort` az elejétől az utolsó utáni pozícióig rendez:

```cpp
sort(eleje, vege);
```

Tehat `bananok + 5` az 5. elem utani hely.

## 18. Fajlkezeles

Olvasas:

```cpp
ifstream bemenet("sorok.txt");
```

Iras:

```cpp
ofstream kimenet("gyakori.txt");
```

Megnyitas ellenorzese:

```cpp
if (!bemenet.is_open()) {
    cout << "Nem sikerult megnyitni a fajlt." << endl;
    return 1;
}
```

Soronkenti olvasas:

```cpp
string sor;

while (getline(bemenet, sor)) {
    cout << sor << endl;
}
```

## 19. Vector

Dinamikus tomb.

```cpp
vector<string> sorok;
```

Hozzaadas:

```cpp
sorok.push_back(sor);
```

Bejaras:

```cpp
for (string sor : sorok) {
    cout << sor << endl;
}
```

Indexszel:

```cpp
for (int i = 0; i < sorok.size(); i++) {
    cout << sorok[i] << endl;
}
```

## 20. String es karakter

String hossza:

```cpp
szo.length()
```

Elso karakter:

```cpp
szo[0]
```

Utolsó karakter:

```cpp
szo[szo.length() - 1]
```

Nagybetu ASCII-val:

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

Nagybetu atalakitasa kisbetuve:

```cpp
ch = ch - 'A' + 'a';
```

## 21. Betugyakorisag

Angol abc-re:

```cpp
int gyak[26] = {};
```

Az `a` indexe:

```cpp
'a' - 'a' // 0
```

A `b` indexe:

```cpp
'b' - 'a' // 1
```

Szamolas kis- es nagybetuket egybe veve:

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

Legritkabb előforduló betű:

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

Kiiras fajlba:

```cpp
kimenet << "Legritkabb betu: " << minBetu << endl;
kimenet << "Szamossaga: " << minDb << endl;
kimenet << "Nagybetuk szama: " << nagybetuk << endl;
```

## 22. Stringstream

Ha egy sort szavakra vagy szamokra akarsz bontani:

```cpp
stringstream ss(sor);
```

Szavak:

```cpp
string szo;

while (ss >> szo) {
    cout << szo << endl;
}
```

Szamok:

```cpp
int szam;

while (ss >> szam) {
    cout << szam << endl;
}
```

Sor atlaganak szamolasa:

```cpp
stringstream ss(sor);
int szam;
int osszeg = 0;
int darab = 0;

while (ss >> szam) {
    osszeg += szam;
    darab++;
}

double atlag = (double)osszeg / darab;
```

## 23. Teljes fajlos betustatisztika minta

```cpp
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ifstream bemenet("sorok.txt");
    ofstream kimenet("gyakori.txt");

    if (!bemenet.is_open()) {
        cout << "Nem sikerult megnyitni a sorok.txt fajlt." << endl;
        return 1;
    }

    vector<string> sorok;
    string sor;

    while (getline(bemenet, sor)) {
        sorok.push_back(sor);
    }

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

    int minDb = -1;
    char minBetu = '?';

    for (int i = 0; i < 26; i++) {
        if (gyak[i] > 0 && (minDb == -1 || gyak[i] < minDb)) {
            minDb = gyak[i];
            minBetu = 'a' + i;
        }
    }

    kimenet << "Legritkabb betu: " << minBetu << endl;
    kimenet << "Szamossaga: " << minDb << endl;
    kimenet << "Nagybetuk szama: " << nagybetuk << endl;

    return 0;
}
```

## 24. Programozasi tetelek

Forras es tovabbi olvasas: https://szit.hu/doku.php?id=oktatas:programozas:programozasi_tetelek:mondatszeru_leiras

A programozasi tetel egy gyakran elofordulo algoritmusminta. ZH-n altalaban nem a nev a fontos, hanem hogy felismerd: "aha, itt szamolni kell", "itt keresni kell", "itt feltetel szerint at kell rakni elemeket".

### Összegzés

Mikor kell? Ha osszeget, atlagot, osszpontszamot, ossztomeget, osszmagassagot kell szamolni.

```cpp
int osszeg = 0;

for (int i = 0; i < n; i++) {
    osszeg += t[i];
}
```

Atlag:

```cpp
double atlag = (double)osszeg / n;
```

### Megszámlálás

Mikor kell? Ha azt kerdezi: "hany darab", "mennyi olyan elem", "hany pozitiv", "hany paros".

```cpp
int darab = 0;

for (int i = 0; i < n; i++) {
    if (t[i] % 2 == 0) {
        darab++;
    }
}
```

### Eldöntés

Mikor kell? Ha csak az a kerdes, hogy van-e ilyen elem.

```cpp
bool van = false;

for (int i = 0; i < n; i++) {
    if (t[i] == keresett) {
        van = true;
    }
}
```

Korai leallassal:

```cpp
int i = 0;

while (i < n && t[i] != keresett) {
    i++;
}

bool van = i < n;
```

### Kiválasztás

Mikor kell? Ha biztosan tudjuk, hogy benne van, es az indexe kell.

```cpp
int i = 0;

while (t[i] != keresett) {
    i++;
}

cout << "Index: " << i << endl;
```

Fontos: ezt csak akkor hasznald igy, ha biztosan van ilyen elem, kulonben tulfuthat a tombon.

### Keresés

Mikor kell? Ha az is kerdes, hogy van-e, es ha van, hol van.

```cpp
int i = 0;

while (i < n && t[i] != keresett) {
    i++;
}

if (i < n) {
    cout << "Van ilyen, indexe: " << i << endl;
} else {
    cout << "Nincs ilyen" << endl;
}
```

### Másolás

Mikor kell? Ha minden elembol keszitesz egy masik elemet.

Pelda: minden szam duplaja masik tombbe.

```cpp
for (int i = 0; i < n; i++) {
    b[i] = a[i] * 2;
}
```

Stringes pelda: szokoz helyett alahuzas.

```cpp
string uj = szoveg;

for (int i = 0; i < uj.length(); i++) {
    if (uj[i] == ' ') {
        uj[i] = '_';
    }
}
```

### Kiválogatás

Mikor kell? Ha csak a feltetelnek megfelelo elemeket rakod at masik tombbe vagy vectorba.

Tombbel:

```cpp
int k = 0;

for (int i = 0; i < n; i++) {
    if (a[i] < 5) {
        b[k] = a[i];
        k++;
    }
}
```

Vectorral egyszerubb:

```cpp
vector<int> kisebbek;

for (int i = 0; i < n; i++) {
    if (a[i] < 5) {
        kisebbek.push_back(a[i]);
    }
}
```

### Szétválogatás

Mikor kell? Ha ket csoportba kell rakni az elemeket.

Pelda: paros es paratlan.

```cpp
vector<int> parosak;
vector<int> paratlanok;

for (int i = 0; i < n; i++) {
    if (t[i] % 2 == 0) {
        parosak.push_back(t[i]);
    } else {
        paratlanok.push_back(t[i]);
    }
}
```

### Metszet

Mikor kell? Ha ket sorozat kozos elemei kellenek.

```cpp
vector<int> metszet;

for (int i = 0; i < n; i++) {
    int j = 0;

    while (j < m && b[j] != a[i]) {
        j++;
    }

    if (j < m) {
        metszet.push_back(a[i]);
    }
}
```

### Unió

Mikor kell? Ha ket sorozat elemei kellenek egyben, duplikalas nelkul.

```cpp
vector<int> unio;

for (int i = 0; i < n; i++) {
    unio.push_back(a[i]);
}

for (int j = 0; j < m; j++) {
    bool benneVan = false;

    for (int i = 0; i < n; i++) {
        if (a[i] == b[j]) {
            benneVan = true;
        }
    }

    if (!benneVan) {
        unio.push_back(b[j]);
    }
}
```

### Maximum kiválasztás

Mikor kell? Ha a legnagyobb elem vagy annak indexe kell.

Legnagyobb ertek:

```cpp
int maximum = t[0];

for (int i = 1; i < n; i++) {
    if (t[i] > maximum) {
        maximum = t[i];
    }
}
```

Legnagyobb elem indexe:

```cpp
int maxIndex = 0;

for (int i = 1; i < n; i++) {
    if (t[i] > t[maxIndex]) {
        maxIndex = i;
    }
}
```

Structnal:

```cpp
int maxIndex = 0;

for (int i = 1; i < n; i++) {
    if (versenyzok[i].pontszam > versenyzok[maxIndex].pontszam) {
        maxIndex = i;
    }
}
```

### Minimum kiválasztás

Mikor kell? Ha a legkisebb elem vagy annak indexe kell.

```cpp
int minIndex = 0;

for (int i = 1; i < n; i++) {
    if (t[i] < t[minIndex]) {
        minIndex = i;
    }
}
```

### Rendezés cserével

Ha nem akarod a `sort`-ot hasznalni:

```cpp
for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
        if (t[i] > t[j]) {
            int temp = t[i];
            t[i] = t[j];
            t[j] = temp;
        }
    }
}
```

### Buborékrendezés

Szomszedos elemeket cserelget.

```cpp
for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
        if (t[j] > t[j + 1]) {
            int temp = t[j];
            t[j] = t[j + 1];
            t[j + 1] = temp;
        }
    }
}
```

### ZH-ban melyiket valaszd?

- Ha "osszeg", "atlag", "ossz..." szerepel: összegzés.
- Ha "hany darab": megszámlálás.
- Ha "van-e": eldöntés.
- Ha "hol van" vagy "indexe": keresés.
- Ha "legnagyobb", "legkisebb": maximum/minimum kiválasztás.
- Ha "feltetelnek megfelelo elemek": kiválogatás.
- Ha "ket csoport": szétválogatás.
- Ha "rendezze": `sort`, ha engedett; különben buborék vagy rendezés cserével.

## 25. Tipikus ZH hibak

- Elfelejted az `&` jelet, ezért a main-ben nem változik semmi.
- Tömbnél 10 elem esetén az indexek `0..9`, nem `1..10`.
- Matrixnal 4x4 esetén az utolso index `3`.
- Mellékátló 4x4-nél: `matrix[i][3 - i]`.
- `sort`-hoz kell az `#include <algorithm>`.
- Fajlnal a program abban a mappaban keresi a fajlt, ahonnan futtatod.
- `getline` előtt ha korábban `cin >>` volt, néha bent marad egy sortörés. Ilyenkor kellhet `cin.ignore()`.
- Ha nincs találat, használj `bool van = false` jelzőt.
- Osztásnál ha átlagot számolsz, legyen `double`: `(double)osszeg / darab`.
- Nullával nem lehet osztani és maradékosan osztani sem: `a % 0` hibás.

## 26. ZH gyors stratégia

1. Először írd meg a structot vagy függvényfejet.
2. Utána a beolvasást.
3. Utána csak egyetlen dolgot számolj ki.
4. Ha az működik, jöhet a következő részfeladat.
5. Fájlos feladatnál először csak olvasd be és írd ki konzolra, hogy tényleg bejött-e.
6. Rendezésnél ha engedett a library, használd a `sort`-ot.
7. Ha elakadsz, írj ki köztes értékeket `cout`-tal.

## 27. Mini fordítási parancsok

Egy fájl fordítása:

```bash
g++ fajl.cpp -o program
```

Futtatás:

```bash
./program
```

Ha fájlt használ a program, menj abba a mappába:

```bash
cd gyakorlas2
g++ feladat05_fajl_betustatisztika.cpp -o feladat05
./feladat05
```
