# Tanci C++ segedlet

Ez a segedlet a `tanci` mappaban levo orai anyagok alapjan keszult. A cel nem az, hogy minden fajlt bemasoljon, hanem hogy a visszatero mintakat gyorsan megtalald ZH kozben.

## Tartalom

- [1. Tipikus include-ok](#1-tipikus-include-ok)
- [2. Fuggvenyek es eljarasok](#2-fuggvenyek-es-eljarasok)
- [3. Ertek, referencia, pointer parameter](#3-ertek-referencia-pointer-parameter)
- [4. Pointer es dinamikus memoria](#4-pointer-es-dinamikus-memoria)
- [5. Tombok es matrixok](#5-tombok-es-matrixok)
- [6. Array visszateresi ertekkent](#6-array-visszateresi-ertekkent)
- [7. Vector alapok](#7-vector-alapok)
- [8. Programozasi tetelek vectorral](#8-programozasi-tetelek-vectorral)
- [9. Struct](#9-struct)
- [10. Operator tulterheles](#10-operator-tulterheles)
- [11. Fajlkezeles](#11-fajlkezeles)
- [12. Stringstream sorfeldolgozashoz](#12-stringstream-sorfeldolgozashoz)
- [13. Kontenerek: list, set, map](#13-kontenerek-list-set-map)
- [14. ZH-gyak mintak](#14-zh-gyak-mintak)
- [15. Tipikus hibak](#15-tipikus-hibak)

## 1. Tipikus include-ok

Az orai fajlokban ezek jonnek elo legtobbszor:

```cpp
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <array>
#include <algorithm>
#include <list>
#include <set>
#include <map>
using namespace std;
```

Melyik mire jo?

```cpp
iostream   // cin, cout
fstream    // ifstream, ofstream, fstream
sstream    // stringstream
string     // string
vector     // vector
array      // array
algorithm  // sort, greater
list       // list
set        // set
map        // map
```

## 2. Fuggvenyek es eljarasok

Eljaras: nincs visszateresi ertek.

```cpp
void print(int a, int b) {
    cout << a << " " << b << endl;
}
```

Fuggveny: van visszateresi ertek.

```cpp
int osszeg(int a, int b) {
    return a + b;
}

cout << osszeg(3, 5) << endl;
```

Példa kimenet:

```text
8
```

Rekurziv fibonacci, ahogy orai anyagban is szerepel:

```cpp
int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

cout << fibonacci(6) << endl;
```

Példa kimenet:

```text
8
```

Faktorialis:

```cpp
int fakt(int n) {
    if (n > 1) {
        return n * fakt(n - 1);
    }

    return 1;
}

cout << fakt(5) << endl;
```

Példa kimenet:

```text
120
```

## 3. Ertek, referencia, pointer parameter

### Ertek szerinti atadas

Itt csak masolatot kap a fuggveny. A main-ben nem valtozik semmi.

```cpp
void csere(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
```

### Referencia szerinti atadas

Az `&` miatt az eredeti valtozok valtoznak.

```cpp
void csere2(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
```

Hivas:

```cpp
int x = 2;
int y = 4;
csere2(x, y);
cout << x << " " << y << endl;
```

Példa kimenet:

```text
4 2
```

### Pointer szerinti atadas

A fuggveny cimeket kap. Az ertekhez `*` kell.

```cpp
void csere3(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
```

Hivas:

```cpp
int x = 2;
int y = 4;
csere3(&x, &y);
cout << x << " " << y << endl;
```

Példa kimenet:

```text
4 2
```

Gyors szabaly:

```cpp
int& a  // referencia, belul siman a-val dolgozol
int* a  // pointer, belul *a-val ered el az erteket
&x      // x cime
*p      // p altal mutatott ertek
```

## 4. Pointer es dinamikus memoria

Pointer alap:

```cpp
int a = 10;
int* p = &a;

cout << a << endl;   // 10
cout << &a << endl;  // a cime
cout << p << endl;   // ugyanaz a cim
cout << *p << endl;  // 10
```

Példa kimenet alakja:

```text
10
0x...
0x...
10
```

A ket cim ugyanaz lesz, de a pontos ertek gepenkent/futasonkent valtozhat.

Dinamikus valtozo:

```cpp
int* p = new int;
*p = 29;
delete p;
```

Dinamikus tomb:

```cpp
int* tp = new int[10];

for (int i = 0; i < 10; i++) {
    tp[i] = i + 1;
}

delete[] tp;
```

`new(nothrow)`:

```cpp
int* p2 = new(nothrow) int;

if (!p2) {
    cout << "memoria allokacio sikertelen" << endl;
} else {
    *p2 = 29;
}

delete p2;
```

Fontos:

```cpp
new int      -> delete p;
new int[10]  -> delete[] p;
```

## 5. Tombok es matrixok

Tomb parameter:

```cpp
void tombkiir(int t[5]) {
    for (int i = 0; i < 5; i++) {
        cout << t[i] << " ";
    }
    cout << endl;
}

int t[5] = {4, 8, 1, 9, 2};
tombkiir(t);
```

Példa kimenet:

```text
4 8 1 9 2
```

Pointeres tomb minimum:

```cpp
int minimum(int* t, int meret) {
    int m = t[0];

    for (int i = 1; i < meret; i++) {
        if (t[i] < m) {
            m = t[i];
        }
    }

    return m;
}

int t[5] = {4, 8, 1, 9, 2};
cout << minimum(t, 5) << endl;
```

Példa kimenet:

```text
1
```

4x4 matrix soronkenti bejaras:

```cpp
for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
        cout << tomb[i][j] << " ";
    }
    cout << endl;
}
```

Ha a matrix:

```cpp
int tomb[4][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
    {13, 14, 15, 16}
};
```

Példa kimenet:

```text
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
```

Soratlag:

```cpp
for (int i = 0; i < 4; i++) {
    int osszeg = 0;

    for (int j = 0; j < 4; j++) {
        osszeg += tomb[i][j];
    }

    atlagok[i] = osszeg / 4.0;
}
```

## 6. Array visszateresi ertekkent

Az orai ZH-gyakban gyakran ez a kenyelmesebb megoldas:

```cpp
array<double, 4> sorAtlagok(int tomb[4][4]) {
    array<double, 4> atlagok;

    for (int i = 0; i < 4; i++) {
        int osszeg = 0;

        for (int j = 0; j < 4; j++) {
            osszeg += tomb[i][j];
        }

        atlagok[i] = osszeg / 4.0;
    }

    return atlagok;
}
```

Kiiras:

```cpp
array<double, 4> atlagok = sorAtlagok(matrix);

for (double d : atlagok) {
    cout << d << " ";
}
```

Példa kimenet a fenti `1..16` matrixra:

```text
2.5 6.5 10.5 14.5
```

## 7. Vector alapok

Letrehozas:

```cpp
vector<int> v;
```

Hozzaadas:

```cpp
v.push_back(10);
v.push_back(20);
v.push_back(30);
```

Bejaras indexszel:

```cpp
for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
}
```

Bejaras foreach-ciklussal:

```cpp
for (int i : v) {
    cout << i << " ";
}
```

Példa kimenet:

```text
10 20 30
```

Hasznos vector muveletek:

```cpp
v.front();        // elso elem
v.back();         // utolso elem
v.pop_back();     // utolso elem torlese
v.clear();        // osszes elem torlese
v.size();         // elemek szama
v.capacity();     // lefoglalt kapacitas
v.shrink_to_fit();
v.at(0);          // ellenorzottebb indexeles
v[0];             // gyors indexeles, de nem ellenoriz
```

Rendezes:

```cpp
sort(v.begin(), v.end());
```

Példa:

```cpp
vector<int> v = {5, 1, 9, 2};
sort(v.begin(), v.end());

for (int x : v) {
    cout << x << " ";
}
```

Példa kimenet:

```text
1 2 5 9
```

Csokkeno:

```cpp
sort(v.begin(), v.end(), greater<int>());
```

Ugyanerre a vectorra a kimenet:

```text
9 5 2 1
```

2D vector:

```cpp
vector<vector<int>> v2d;

for (int i = 0; i < 5; i++) {
    vector<int> sor;

    for (int j = 0; j < 5; j++) {
        sor.push_back(i + j * 2);
    }

    v2d.push_back(sor);
}
```

2D vector kiirasa:

```cpp
for (vector<int> sor : v2d) {
    for (int x : sor) {
        cout << x << " ";
    }
    cout << endl;
}
```

## 8. Programozasi tetelek vectorral

Maximum kivalasztas pozicioval:

```cpp
int max = v[0];
int maxind = 0;

for (int i = 0; i < v.size(); i++) {
    if (v[i] > max) {
        max = v[i];
        maxind = i;
    }
}
```

Szétválogatás:

```cpp
vector<int> nagyobb;
vector<int> kisebb;

for (int i : v) {
    if (i > 5) {
        nagyobb.push_back(i);
    } else {
        kisebb.push_back(i);
    }
}
```

Megszamlalas:

```cpp
int count = 0;

for (int i : v) {
    if (i == 2) {
        count++;
    }
}
```

Primvizsgalat:

```cpp
bool isPrime(int n) {
    bool prime = true;

    if (n == 0 || n == 1) {
        prime = false;
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                prime = false;
                break;
            }
        }
    }

    return prime;
}
```

Primek megszamlalasa:

```cpp
int count = 0;

for (int i : v) {
    if (isPrime(i)) {
        count++;
    }
}
```

## 9. Struct

Egyszeru struct:

```cpp
struct Doboz {
    double szelesseg;
    double magassag;
    double melyseg;
};
```

Tomb structokbol:

```cpp
Doboz dobozok[5];

for (int i = 0; i < 5; i++) {
    cin >> dobozok[i].szelesseg;
    cin >> dobozok[i].magassag;
    cin >> dobozok[i].melyseg;
}
```

Toronymagassag:

```cpp
double toronyMagassag = 0;

for (int i = 0; i < 5; i++) {
    toronyMagassag += dobozok[i].magassag;
}

cout << toronyMagassag << endl;
```

Példa, ha a magassagok `2, 4, 3, 5, 1`:

```text
15
```

Struct vectorral:

```cpp
struct Allat {
    string nev;
    int kor;
};

vector<Allat> allatok;
```

Legidosebb elem:

```cpp
Allat legidosebb = allatv[0];

for (int i = 0; i < allatv.size(); i++) {
    if (allatv[i].kor > legidosebb.kor) {
        legidosebb = allatv[i];
    }
}

cout << legidosebb.nev << " " << legidosebb.kor << endl;
```

Példa kimenet:

```text
Bodri 12
```

## 10. Operator tulterheles

Fuggveny tulterheles: ugyanaz a nev, mas parameterlista.

```cpp
int absolute(int i) {
    if (i < 0) return -i;
    return i;
}

float absolute(float i) {
    if (i < 0.0f) return -i;
    return i;
}
```

Vectorhoz `<<` operator, hogy push_back-szeruen mukodjon:

```cpp
vector<int>& operator<<(vector<int>& v, int i) {
    v.push_back(i);
    return v;
}
```

Hasznalat:

```cpp
vector<int> v = {1, 2, 3};
v << 4 << 5 << 6;

for (int x : v) {
    cout << x << " ";
}
```

Példa kimenet:

```text
1 2 3 4 5 6
```

Ket vector osszefuzese `+` operatorral:

```cpp
vector<int> operator+(const vector<int> a, const vector<int> b) {
    vector<int> o;

    for (int i : a) {
        o.push_back(i);
    }

    for (int i : b) {
        o.push_back(i);
    }

    return o;
}
```

Struct kiirasa `cout <<`-tal:

```cpp
struct szemely {
    string nev;
    int kor;
};

ostream& operator<<(ostream& os, szemely sz) {
    os << sz.nev << " " << sz.kor;
    return os;
}
```

Struct beolvasasa `cin >>`-nal:

```cpp
istream& operator>>(istream& is, szemely& sz) {
    is >> sz.nev >> sz.kor;
    return is;
}
```

Hasznalat:

```cpp
szemely sz;
cin >> sz;
cout << sz << endl;
```

Példa bemenet:

```text
Anna 20
```

Példa kimenet:

```text
Anna 20
```

## 11. Fajlkezeles

Iras:

```cpp
ofstream file("filename.txt");
file << "alma korte" << endl;
file.close();
```

A `filename.txt` tartalma ez lesz:

```text
alma korte
```

Olvasas soronkent:

```cpp
ifstream readFile("filename.txt");
string text;

while (getline(readFile, text)) {
    cout << text << endl;
}

readFile.close();
```

Ha a fajl tartalma:

```text
alma korte
barack szilva
```

Példa kimenet:

```text
alma korte
barack szilva
```

Olvasas szavankent:

```cpp
ifstream readFile("filename.txt");
string text;

while (readFile >> text) {
    cout << text << endl;
}
```

Ugyanarra a fajlra a kimenet:

```text
alma
korte
barack
szilva
```

Structok fajlba:

```cpp
ofstream allatfile("allatok.txt");

for (Allat a : allatok) {
    allatfile << a.nev << " " << a.kor << endl;
}

allatfile.close();
```

Structok fajlbol:

```cpp
ifstream inallat("allatok.txt");
Allat allat;
vector<Allat> allatv;

while (inallat >> allat.nev >> allat.kor) {
    allatv.push_back(allat);
}
```

Ha az `allatok.txt` tartalma:

```text
Bodri 12
Cirmi 7
```

A vectorba ket `Allat` kerul:

```text
allatv[0]: Bodri 12
allatv[1]: Cirmi 7
```

Fajlnyitasi modok:

```cpp
ios::in     // olvasas
ios::out    // iras
ios::trunc  // tartalom torlese megnyitas utan
ios::app    // hozzafuzes a fajl vegehez
ios::ate    // megnyitas utan a fajl vegere all
```

`fstream` pelda:

```cpp
fstream ffile;
ffile.open("allatok.txt", ios::out | ios::trunc);
ffile.close();
```

## 12. Stringstream sorfeldolgozashoz

Tipikus ZH-fajlfeladat: soronkent tobb szam van a fajlban.

```cpp
string sor;

while (getline(be, sor)) {
    stringstream ss(sor);
    vector<int> egySor;
    int szam;

    while (ss >> szam) {
        egySor.push_back(szam);
    }

    if (!egySor.empty()) {
        adatok.push_back(egySor);
    }
}
```

Példa fajltartalom:

```text
10 20 30
5 15
```

Ebbol ez lesz:

```text
adatok[0]: 10 20 30
adatok[1]: 5 15
```

Sor atlaga:

```cpp
int osszeg = 0;

for (int j = 0; j < adatok[i].size(); j++) {
    osszeg += adatok[i][j];
}

double atlag = (double)osszeg / adatok[i].size();
```

Példa:

```text
10 20 30 -> atlag: 20
5 15 -> atlag: 10
```

Igen/Nem fajlba:

```cpp
if (atlag < 37) {
    ki << "Igen" << endl;
} else {
    ki << "Nem" << endl;
}
```

Példa kimeneti fajl:

```text
Igen
Igen
```

## 13. Kontenerek: list, set, map

### list

```cpp
list<int> l;

l.push_front(10);
l.push_back(20);

cout << l.front() << " " << l.back() << endl;
l.sort();
```

Példa: ha eloszor `10`, majd `20` kerul bele, a `front/back` kimenete:

```text
10 20
```

Torles:

```cpp
l.pop_front(); // elso elem torlese
l.pop_back();  // utolso elem torlese
```

Iteratoros bejaras:

```cpp
list<int>::iterator it;

for (it = l.begin(); it != l.end(); it++) {
    cout << *it << " ";
}
```

Példa kimenet:

```text
10 20
```

### set

A `set` rendezett, es nem tarol duplikatumot.

```cpp
set<int> s;

s.insert(50);
s.insert(10);
s.insert(50);
```

Ebben a `50` csak egyszer fog szerepelni, mert a `set` nem enged duplikatumot.

Bejaras:

```cpp
for (int i : s) {
    cout << i << " ";
}
```

Példa kimenet:

```text
10 50
```

Kereses:

```cpp
cout << s.contains(50) << endl;
cout << *s.find(20) << endl;
```

Példa:

```cpp
set<int> s = {10, 20, 50};
cout << s.contains(50) << endl;
cout << *s.find(20) << endl;
```

Példa kimenet:

```text
1
20
```

Vector duplikatummentesitese:

```cpp
vector<int> v = {1, 1, 3, 3, 5};
set<int> sv(v.begin(), v.end());

v.clear();
v.assign(sv.begin(), sv.end());
```

Példa kimenet bejaras utan:

```text
1 3 5
```

### map

Kulcs-ertek par.

```cpp
map<string, string> m;

m.insert({"Pista", "Istvan"});
m["Zoli"] = "Zoltan";
m["Zoli"] = "Masik ertek";
```

A `Zoli` kulcshoz tartozo ertek a vegen:

```text
Masik ertek
```

Bejaras:

```cpp
for (pair<string, string> a : m) {
    cout << a.first << " " << a.second << endl;
}
```

Példa kimenet:

```text
Pista Istvan
Zoli Masik ertek
```

A `map` kulcs szerint rendezve jarja be az elemeket.

Szavak gyakorisaga map-pel:

```cpp
ifstream ifile("gyumik.txt");
string gyumi;
map<string, int> gyumolcsok;

while (ifile >> gyumi) {
    if (gyumolcsok.contains(gyumi)) {
        gyumolcsok[gyumi] = gyumolcsok[gyumi] + 1;
    } else {
        gyumolcsok[gyumi] = 1;
    }
}
```

Ha a `gyumik.txt` tartalma:

```text
alma korte alma szilva korte alma
```

A map tartalma:

```text
alma 3
korte 2
szilva 1
```

Rovidebben:

```cpp
gyumolcsok[gyumi]++;
```

Ez ugyanazt csinalja: ha meg nincs ilyen kulcs, letrehozza `0` ertekkel, majd novel rajta egyet.

## 14. ZH-gyak mintak

### Legnagyobb Fibonacci ket szam kozott

```cpp
int legnagyobbFibonacci(int a, int b) {
    int also = a < b ? a : b;
    int felso = a > b ? a : b;
    int legnagyobb = -1;

    int x = 0;
    int y = 1;

    while (x <= felso) {
        if (x >= also) {
            legnagyobb = x;
        }

        int kov = x + y;
        x = y;
        y = kov;
    }

    return legnagyobb;
}
```

Példa:

```cpp
cout << legnagyobbFibonacci(10, 40) << endl;
```

Példa kimenet:

```text
34
```

### Karakter masolasa tombbol referenciaval

```cpp
void masolKarakter(char& a, const char tomb[10], int b) {
    if (b >= 0 && b < 10) {
        a = tomb[b];
    }
}
```

Példa:

```cpp
char betu = '?';
char tomb[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
masolKarakter(betu, tomb, 3);
cout << betu << endl;
```

Példa kimenet:

```text
d
```

### Legrovidebb es leghosszabb szo

```cpp
int n;
cin >> n;

string szo;
string legrovidebb;
string leghosszabb;

cin >> szo;
legrovidebb = szo;
leghosszabb = szo;

for (int i = 1; i < n; i++) {
    cin >> szo;

    if (szo.length() < legrovidebb.length()) {
        legrovidebb = szo;
    }

    if (szo.length() > leghosszabb.length()) {
        leghosszabb = szo;
    }
}
```

Példa bemenet:

```text
4
alma
korte
meggy
ananász
```

Példa eredmeny:

```text
alma ananász
```

### Randomok fajl soratlaggal

```cpp
ifstream be("randomok.txt");
ofstream ki("kisebb.txt");

vector<vector<int>> adatok;
string sor;

while (getline(be, sor)) {
    stringstream ss(sor);
    vector<int> egySor;
    int szam;

    while (ss >> szam) {
        egySor.push_back(szam);
    }

    if (!egySor.empty()) {
        adatok.push_back(egySor);
    }
}

for (int i = 0; i < adatok.size(); i++) {
    int osszeg = 0;

    for (int j = 0; j < adatok[i].size(); j++) {
        osszeg += adatok[i][j];
    }

    double atlag = (double)osszeg / adatok[i].size();

    if (atlag < 37) {
        ki << "Igen" << endl;
    } else {
        ki << "Nem" << endl;
    }
}
```

Példa `randomok.txt`:

```text
10 20 30
40 50
```

Példa `kisebb.txt`:

```text
Igen
Nem
```

## 15. Tipikus hibak

- Ha a fuggvenyben modositani kell az eredeti valtozot, kell az `&` vagy pointer.
- Pointeres fuggvenynel hivasnal sokszor `&x`, bent pedig `*p` kell.
- `new[]` utan `delete[]` kell.
- `vector[i]` nem ellenoriz indexet, `vector.at(i)` igen.
- `sort`-hoz kell az `#include <algorithm>`.
- Fajlokat a program abban a mappaban keresi, ahonnan futtatod.
- `getline` soronkent olvas, `>>` szavankent vagy szamonkent.
- Matrixnal figyelj: `i` sor, `j` oszlop.
- `array<double, 4>` visszaadhato fuggvenybol, sima tombot nem ilyen egyszeruen.
- `set` nem tarol duplikatumokat.
- `map`-nel `first` a kulcs, `second` az ertek.

## Gyors ZH-strategia

1. Masold be a szukseges include-okat.
2. Ird meg a structokat es fuggvenyfejeket.
3. Fajlos feladatnal eloszor csak olvasd be es `cout`-tal ellenorizd.
4. Ha vector kell, hasznalj `push_back`-et.
5. Ha rendezni kell, hasznalj `sort`-ot, ha engedik.
6. Ha gyakorisag kell, `map` vagy tomb jo valasztas.
7. Ha elakadsz, bontsd a feladatot: beolvasas, feldolgozas, kiiras.
