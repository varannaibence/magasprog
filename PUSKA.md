# C++ ZH PUSKA — Copy-Paste Edition

> **Használat:** Megkeresed a témát → kimásolod a kódot → `^^^ EZT VÁLTOZTASD ^^^` sorokat átírod → kész.

---

## Tartalom

- [1. Alap blokk](#1-alap-blokk)
- [2. Matematikai függvények](#2-matematikai-függvények)
  - [Fibonacci rekurzív](#fibonacci--rekurzív-az-n-edik-szám)
  - [Fibonacci iteratív](#fibonacci--iteratív-az-n-edik-szám-nagy-n-hez-gyorsabb)
  - [Fibonacci range counter](#fibonacci--hány-db-van-also-felso-ban)
  - [Faktoriális](#faktoriális--rekurzív)
  - [Prímszám](#prímszám-ellenőrzés)
  - [LNKO / LKKT](#lnko-euklideszi)
- [3. Tömbök és mátrixok](#3-tömbök-és-mátrixok)
  - [1D tömb beolvasás/kiírás](#1d-tömb-beolvasás-és-kiírás)
  - [Min/max tömbben](#min-és-max-tömbben)
  - [Legkisebb páros (bool-flag)](#legkisebb-páros-bool-flag-pattern)
  - [Mátrix beolvasás/kiírás](#mátrix-beolvasás-és-kiírás)
  - [Soronkénti max-min diff](#soronkénti-max-min-különbség--array-visszaadás)
  - [Oszloponkénti max-min diff](#oszloponkénti-max-min-különbség--array-visszaadás)
  - [Főátló / mellékátló összeg](#főátló-összeg)
- [4. Struct sablonok](#4-struct-sablonok)
  - [Struct definíció](#struct-definíció-sablon)
  - [Beolvasás / kiírás](#beolvasás-tömbbe)
  - [operator<<](#operator-overload-cout--dolgoki-működik)
  - [sort lambda növekvő/csökkenő](#rendezés-sort-tal--növekvő-és-csökkenő)
  - [Max elem keresés](#max-elem-keresés-struct-tömbben)
- [5. Programozási tételek](#5-programozási-tételek)
  - [Összegzés / átlag](#összegzés--átlag)
  - [Megszámlálás](#megszámlálás)
  - [Eldöntés](#eldöntés-van-e-ilyen)
  - [Keresés](#keresés-hol-van--1-ha-nincs)
  - [Kiválasztás](#kiválasztás-biztosan-benne-van--index-kell)
  - [Másolás](#másolás-minden-elemből-új-elem)
  - [Kiválogatás](#kiválogatás-feltételnek-megfelelők-egy-vectorba)
  - [Szétválogatás](#szétválogatás-két-csoportba)
  - [Metszet / Unió](#metszet-két-sorozat-közös-elemei)
  - [Rendezés cserével / buborék](#rendezés-cserével-sort-nélkül)
- [6. Fájlkezelés](#6-fájlkezelés)
  - [Soronkénti beolvasás](#soronkénti-beolvasás-vectorba)
  - [Szavanként beolvasás](#szavanként-beolvasás)
  - [stringstream → szavak/számok](#stringstream--sor--szavak)
  - [Vegyes adat struct tömbbe](#vegyes-adat-nev-kor-suly-struct-tömbbe-fájlból)
  - [Fájlba írás](#fájlba-írás)
- [7. Konténerek](#7-konténerek)
  - [vector](#vector)
  - [array\<T,N\>](#arrayt-n--visszaadás-függvényből)
  - [list](#list)
  - [set](#set)
  - [map + leggyakoribb](#map)
- [8. String és karakter](#8-string-és-karakter)
  - [Alap műveletek](#alap-műveletek)
  - [Betű vizsgálat ASCII](#betű-vizsgálat-ascii)
  - [Nagybetű → kisbetű](#nagybetű--kisbetű)
  - [Betűgyakoriság gyak[26]](#betűgyakoriság-26-os-tömbbel-kiskagybetű-egybe)
  - [Legritkább / leggyakoribb betű](#legritkább-betű)
- [9. Pointerek](#9-pointerek)
  - [Alap pointer](#mini-puska)
  - [Pointer paraméter](#pointer-paraméter-módosítja-az-eredetit)
  - [Csere pointerrel](#csere-pointerrel)
  - [Dinamikus tömb](#dinamikus-tömb)
- [10. Teljes programsablonok](#10-teljes-programsablonok)
  - [A — Struct + rendezés + stat](#sablon-a--struct--rendezés--statisztika)
  - [B — Fájl szóstatisztika (map)](#sablon-b--fájl-szóstatisztika-map)
  - [C — Fájl betűstatisztika](#sablon-c--fájl-betűstatisztika)
  - [D — Mátrix műveletek 4×4](#sablon-d--mátrix-műveletek-44)
  - [E — Fibonacci + prím](#sablon-e--fibonacci--prím-vegyes-feladat)
- [11. ZH-típusú komplex minták](#11-zh-típusú-komplex-minták)
  - [Fibonacci két szám között (lista)](#két-szám-közötti-fibonacci-számok--kilistázva)
  - [Van-e Fibonacci az inputban?](#van-e-fibonacci-szám-n-input-között-eldöntés)
  - [4×4 soronkénti medián → 1×4](#44-mátrix-soronkénti-mediánja--14-tömbben)
  - [5×5 mellékátló átlag](#55-mátrix-mellékátló-átlaga)
  - [Soronként átlag fölötti elemek](#soronként-melyik-számok-nagyobbak-a-sor-átlagánál)
  - [Soronkénti / oszloponkénti átlag](#soronkénti-átlag--array-visszaadás)
  - [void + & + aritmetika (+, *, -)](#void--referencia--aritmetikai-művelet-összeadás--szorzás--kivonás)
  - [F — 5×5 mátrix sablon](#sablon-f--teljes-55-mátrix-feladat-mellékátló--átlag-fölöttiek)
  - [G — 4×4 medián sablon](#sablon-g--44-soronkénti-medián--14-kiírás)
  - [H — Fibonacci + van-e Fib](#sablon-h--fibonacci--van-e-fibonacci-az-inputban)
- [12. Matematikai extra függvények](#12-matematikai-extra-függvények)
  - [Jegyösszeg / jegyek száma / legnagyobb jegy](#jegyösszeg-számjegyek-összege)
  - [Palindróm szám / megfordítás](#palindróm-szám-visszafelé-is-ugyanaz)
  - [Osztók összege / tökéletes szám](#valódi-osztók-összege)
  - [Armstrong szám](#armstrong-szám-3-jegyű-jegyek-köbének-összege--maga)
  - [Háromszögszám / kettő hatványa](#háromszögszám-e-1-3-6-10-15-21)
  - [Collatz-lépések](#collatz-lépések-száma-hány-lép-amíg-1-re-jut)
- [13. Mátrix extra műveletek](#13-mátrix-extra-műveletek)
  - [Sor/oszlop összegek](#sor--és-oszlopösszegek)
  - [Legjobb sor](#legjobb-sor-legnagyobb-összegű-sor-indexe)
  - [Transzponált](#transzponált-sorok--oszlopok-helyben-nxn-esetén)
  - [Nyeregpont (saddle point)](#nyeregpont-saddle-point-minimum-a-sorában-és-maximum-az-oszlopában)
  - [Feltétel fölötti elemek száma](#feltétel-fölötti-elemek-száma)
  - [Szimmetria](#szimmetria-ellenőrzés-nxn)
- [14. Statisztikai függvények tömbön](#14-statisztikai-függvények-tömbön)
  - [Módusz (leggyakoribb érték)](#módusz-leggyakoribb-érték)
  - [Szórás](#szórás-standard-deviation)
  - [Medián](#medián-rendezi-a-tömböt---ha-nem-akarod-másolj-először)
  - [Terjedelem / rendezett-e?](#terjedelem-max--min)
- [15. Gyors referencia — összes függvény](#15-gyors-referencia--összes-függvény)

---

## 1. Alap blokk

Mindig ez az elejére. Ha nem kell valami, töröld.

```cpp
#include <algorithm>
#include <array>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {

    return 0;
}
```

---

## 2. Matematikai függvények

Másold `main()` **fölé**.

### Fibonacci — rekurzív (az n-edik szám)

```cpp
int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}
// fib(0)=0, fib(1)=1, fib(2)=1, fib(3)=2, fib(5)=5, fib(10)=55
```

### Fibonacci — iteratív (az n-edik szám, nagy n-hez gyorsabb)

```cpp
int fibIter(int n) {
    if (n <= 1) return n;
    int x = 0, y = 1;
    for (int i = 2; i <= n; i++) {
        int kov = x + y;
        x = y;
        y = kov;
    }
    return y;
}
// fibIter(10) = 55, fibIter(0) = 0, fibIter(1) = 1
```

### Fibonacci — hány db van [also, felso]-ban

```cpp
int fibDarab(int also, int felso) {
    if (also > felso) { int t = also; also = felso; felso = t; }
    int darab = 0;
    int x = 0, y = 1;
    while (x <= felso) {
        if (x >= also) darab++;
        int kov = x + y;
        x = y;
        y = kov;
    }
    return darab;
}
// fibDarab(5, 30) = 4  (5, 8, 13, 21)
```

### Faktoriális — rekurzív

```cpp
long long fakto(int n) {
    if (n <= 1) return 1;
    return n * fakto(n - 1);
}
// fakto(5) = 120
```

### Prímszám ellenőrzés

```cpp
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
// isPrime(7) = true, isPrime(4) = false
```

### LNKO (Euklideszi)

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

### LKKT (LNKO segítségével)

```cpp
int lkkt(int a, int b) {
    return a * b / lnko(a, b);
}
```

---

## 3. Tömbök és mátrixok

### 1D tömb beolvasás és kiírás

```cpp
const int N = 10;               // ^^^ EZT VÁLTOZTASD: méret ^^^
int t[N];

for (int i = 0; i < N; i++) cin >> t[i];
for (int i = 0; i < N; i++) cout << t[i] << " ";
cout << endl;
```

### Min és max tömbben

```cpp
int minimum = t[0];
int maximum = t[0];
for (int i = 1; i < N; i++) {
    if (t[i] < minimum) minimum = t[i];
    if (t[i] > maximum) maximum = t[i];
}
```

### Legkisebb páros (bool-flag pattern)

```cpp
bool vanParos = false;
int legkisebb = 0;
for (int i = 0; i < N; i++) {
    if (t[i] % 2 == 0) {                           // ^^^ EZT VÁLTOZTASD: feltétel ^^^
        if (!vanParos || t[i] < legkisebb) {
            legkisebb = t[i];
            vanParos = true;
        }
    }
}
if (!vanParos) cout << "Nincs ilyen." << endl;
else cout << legkisebb << endl;
```

### Mátrix beolvasás és kiírás

```cpp
const int M = 4;                // ^^^ EZT VÁLTOZTASD: méret (NxN) ^^^
int matrix[M][M];

for (int i = 0; i < M; i++)
    for (int j = 0; j < M; j++)
        cin >> matrix[i][j];

for (int i = 0; i < M; i++) {
    for (int j = 0; j < M; j++) cout << matrix[i][j] << " ";
    cout << endl;
}
```

### Soronkénti max-min különbség → array visszaadás

```cpp
array<int, 4> sorKulonbsegek(int matrix[4][4]) {  // ^^^ EZT VÁLTOZTASD: 4 → méret ^^^
    array<int, 4> eredmeny{};
    for (int i = 0; i < 4; i++) {
        int minimum = matrix[i][0];
        int maximum = matrix[i][0];
        for (int j = 1; j < 4; j++) {
            if (matrix[i][j] < minimum) minimum = matrix[i][j];
            if (matrix[i][j] > maximum) maximum = matrix[i][j];
        }
        eredmeny[i] = maximum - minimum;
    }
    return eredmeny;
}
```

### Oszloponkénti max-min különbség → array visszaadás

```cpp
array<int, 4> oszlopKulonbsegek(int matrix[4][4]) {  // ^^^ EZT VÁLTOZTASD: 4 → méret ^^^
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

### Főátló összeg

```cpp
int foatlo = 0;
for (int i = 0; i < M; i++) foatlo += matrix[i][i];
```

### Mellékátló összeg

```cpp
int mellekatlo = 0;
for (int i = 0; i < M; i++) mellekatlo += matrix[i][M - 1 - i];  // ^^^ M = méret ^^^
```

---

## 4. Struct sablonok

### Struct definíció (sablon)

```cpp
struct Dolog {              // ^^^ EZT VÁLTOZTASD: "Dolog" → te neved (pl. Banan, Versenyzo) ^^^
    string nev;
    int ertek;              // ^^^ EZT VÁLTOZTASD: mezők (típus + név) ^^^
    double suly;
};
const int N = 5;            // ^^^ EZT VÁLTOZTASD: darabszám ^^^
Dolog dolgok[N];
```

### Beolvasás tömbbe

```cpp
for (int i = 0; i < N; i++) {
    cin >> dolgok[i].nev >> dolgok[i].ertek >> dolgok[i].suly;  // ^^^ mezők ^^^
}
```

### Kiírás

```cpp
for (int i = 0; i < N; i++) {
    cout << dolgok[i].nev << " "
         << dolgok[i].ertek << " "
         << dolgok[i].suly << endl;  // ^^^ mezők ^^^
}
```

### operator<< overload (cout << dolgok[i] működik)

```cpp
ostream& operator<<(ostream& os, const Dolog& d) {  // ^^^ EZT VÁLTOZTASD: Dolog, mezők ^^^
    os << d.nev << " " << d.ertek << " " << d.suly;
    return os;
}
// Használat: cout << dolgok[i] << endl;
```

### Rendezés sort-tal — növekvő és csökkenő

```cpp
#include <algorithm>

// Növekvő ertek szerint:
sort(dolgok, dolgok + N, [](Dolog a, Dolog b) {
    return a.ertek < b.ertek;   // ^^^ EZT VÁLTOZTASD: mező, < = növekvő ^^^
});

// Csökkenő ertek szerint:
sort(dolgok, dolgok + N, [](Dolog a, Dolog b) {
    return a.ertek > b.ertek;   // ^^^ EZT VÁLTOZTASD: mező, > = csökkenő ^^^
});
```

### Max elem keresés struct tömbben

```cpp
int maxIndex = 0;
for (int i = 1; i < N; i++) {
    if (dolgok[i].ertek > dolgok[maxIndex].ertek) {  // ^^^ EZT VÁLTOZTASD: mező ^^^
        maxIndex = i;
    }
}
cout << dolgok[maxIndex].nev << endl;
```

---

## 5. Programozási tételek

### Összegzés + átlag

```cpp
int osszegzes(int t[], int n) {
    int osszeg = 0;
    for (int i = 0; i < n; i++) osszeg += t[i];
    return osszeg;
}

double atlag(int t[], int n) {
    return (double)osszegzes(t, n) / n;
}
// double a = atlag(t, N);
```

### Megszámlálás

```cpp
int megszamlal(int t[], int n) {
    int darab = 0;
    for (int i = 0; i < n; i++) {
        if (t[i] % 2 == 0) darab++;  // ^^^ EZT VÁLTOZTASD: feltétel ^^^
    }
    return darab;
}
```

### Eldöntés (van-e ilyen?)

```cpp
bool eldont(int t[], int n, int keresett) {  // ^^^ EZT VÁLTOZTASD: keresett típusa ^^^
    for (int i = 0; i < n; i++) {
        if (t[i] == keresett) return true;   // ^^^ EZT VÁLTOZTASD: feltétel ^^^
    }
    return false;
}
```

### Keresés (hol van? -1 ha nincs)

```cpp
int keres(int t[], int n, int keresett) {   // ^^^ EZT VÁLTOZTASD: keresett típusa ^^^
    for (int i = 0; i < n; i++) {
        if (t[i] == keresett) return i;     // ^^^ EZT VÁLTOZTASD: feltétel ^^^
    }
    return -1;
}
```

### Kiválasztás (biztosan benne van — index kell)

```cpp
int i = 0;
while (t[i] != keresett) i++;   // ^^^ EZT VÁLTOZTASD: feltétel ^^^
// i most a keresett elem indexe
```

### Másolás (minden elemből új elem)

```cpp
for (int i = 0; i < n; i++) {
    b[i] = a[i] * 2;  // ^^^ EZT VÁLTOZTASD: transzformáció ^^^
}
```

### Kiválogatás (feltételnek megfelelők egy vectorba)

```cpp
vector<int> kivalogatott;                    // ^^^ EZT VÁLTOZTASD: típus ^^^
for (int i = 0; i < n; i++) {
    if (t[i] > 0) kivalogatott.push_back(t[i]);  // ^^^ EZT VÁLTOZTASD: feltétel ^^^
}
```

### Szétválogatás (két csoportba)

```cpp
vector<int> parosak, paratlanok;
for (int i = 0; i < n; i++) {
    if (t[i] % 2 == 0) parosak.push_back(t[i]);   // ^^^ EZT VÁLTOZTASD: feltétel ^^^
    else               paratlanok.push_back(t[i]);
}
```

### Metszet (két sorozat közös elemei)

```cpp
vector<int> metszet;
for (int i = 0; i < n; i++) {
    int j = 0;
    while (j < m && b[j] != a[i]) j++;
    if (j < m) metszet.push_back(a[i]);
}
```

### Unió (két sorozat egybe, duplikálás nélkül)

```cpp
vector<int> unio;
for (int i = 0; i < n; i++) unio.push_back(a[i]);
for (int j = 0; j < m; j++) {
    bool benneVan = false;
    for (int i = 0; i < n; i++) {
        if (a[i] == b[j]) { benneVan = true; break; }
    }
    if (!benneVan) unio.push_back(b[j]);
}
```

### Rendezés cserével (sort nélkül)

```cpp
for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
        if (t[i] > t[j]) {              // ^^^ > = növekvő, < = csökkenő ^^^
            int temp = t[i]; t[i] = t[j]; t[j] = temp;
        }
    }
}
```

### Buborékrendezés

```cpp
for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
        if (t[j] > t[j + 1]) {         // ^^^ > = növekvő, < = csökkenő ^^^
            int temp = t[j]; t[j] = t[j + 1]; t[j + 1] = temp;
        }
    }
}
```

---

## 6. Fájlkezelés

### Soronkénti beolvasás vectorba

```cpp
ifstream be("sorok.txt");           // ^^^ EZT VÁLTOZTASD: fájlnév ^^^
if (!be.is_open()) { cout << "Nem sikerult megnyitni." << endl; return 1; }

vector<string> sorok;
string sor;
while (getline(be, sor)) sorok.push_back(sor);
```

### Szavanként beolvasás

```cpp
ifstream be("szavak.txt");          // ^^^ EZT VÁLTOZTASD: fájlnév ^^^
string szo;
while (be >> szo) {
    cout << szo << endl;            // ^^^ EZT VÁLTOZTASD: mit csinálsz a szóval ^^^
}
```

### stringstream — sor → szavak

```cpp
stringstream ss(sor);
string szo;
while (ss >> szo) {
    cout << szo << endl;            // ^^^ EZT VÁLTOZTASD: mit csinálsz ^^^
}
```

### stringstream — sor → számok + átlag

```cpp
stringstream ss(sor);
int szam, osszeg = 0, darab = 0;
while (ss >> szam) {
    osszeg += szam;
    darab++;
}
double atlag = (darab > 0) ? (double)osszeg / darab : 0.0;
```

### Vegyes adat (nev kor suly) struct tömbbe fájlból

```cpp
struct Ember {                      // ^^^ EZT VÁLTOZTASD: struct neve, mezők ^^^
    string nev;
    int kor;
    double suly;
};
Ember emberek[100];
int n = 0;

ifstream be("emberek.txt");         // ^^^ EZT VÁLTOZTASD: fájlnév ^^^
while (be >> emberek[n].nev >> emberek[n].kor >> emberek[n].suly) {  // ^^^ mezők ^^^
    n++;
}
```

### Fájlba írás

```cpp
ofstream ki("kimenet.txt");         // ^^^ EZT VÁLTOZTASD: fájlnév ^^^
ki << "Eredmeny: " << ertek << endl;
```

---

## 7. Konténerek

### vector

```cpp
vector<int> v;                      // ^^^ EZT VÁLTOZTASD: típus ^^^
v.push_back(10);
v.push_back(20);

for (int x : v) cout << x << " ";  // range-for
for (int i = 0; i < (int)v.size(); i++) cout << v[i] << " ";  // index

sort(v.begin(), v.end());           // növekvő rendezés
sort(v.begin(), v.end(), greater<int>());  // csökkenő rendezés
```

### array<T,N> — visszaadás függvényből

```cpp
array<double, 5> fuggveny() {       // ^^^ EZT VÁLTOZTASD: típus, méret ^^^
    array<double, 5> eredmeny{};    // {} = nulláz
    eredmeny[0] = 3.14;
    return eredmeny;
}
// Használat:
array<double, 5> a = fuggveny();
for (double x : a) cout << x << " ";
```

### list

```cpp
list<int> l;                        // ^^^ EZT VÁLTOZTASD: típus ^^^
l.push_back(10);
l.push_front(5);
l.push_back(20);

for (int x : l) cout << x << " ";  // range-for

// Iterator alapú bejárás:
for (auto it = l.begin(); it != l.end(); ++it) cout << *it << " ";

l.sort();                           // list saját sort (nem algorithm::sort!)
l.remove(10);                       // ^^^ EZT VÁLTOZTASD: eltávolítandó érték ^^^

// Elem törlése pozíció szerint (pl. 2. elem):
auto it = l.begin();
advance(it, 2);                     // ^^^ EZT VÁLTOZTASD: hányadik elem (0-tól) ^^^
l.erase(it);
```

### set

```cpp
set<int> s;                         // ^^^ EZT VÁLTOZTASD: típus ^^^
s.insert(5);
s.insert(10);
s.insert(5);                        // duplikátum → nem kerül be

// Tartalmaz-e?
if (s.count(5)) cout << "benne van" << endl;
if (s.find(5) != s.end()) cout << "benne van" << endl;

for (int x : s) cout << x << " ";  // automatikusan rendezett!

s.erase(5);

// Vector dedup set-tel:
vector<int> v = {3, 1, 2, 1, 3, 2};
set<int> tmp(v.begin(), v.end());
v.assign(tmp.begin(), tmp.end());   // v most: {1, 2, 3}
```

### map

```cpp
map<string, int> gyak;              // ^^^ EZT VÁLTOZTASD: kulcs és érték típusa ^^^

gyak["alma"]++;                     // beillesztés vagy növelés
gyak["korte"] = 5;

// Bejárás:
for (const auto& par : gyak) {
    cout << par.first << ": " << par.second << endl;
}

// Tartalmaz-e?
if (gyak.count("alma")) cout << "benne van" << endl;

// Leggyakoribb elem keresése (HELYES verzió!):
string leggyakoribb = gyak.begin()->first;
int maxDb = 0;
for (const auto& par : gyak) {
    if (par.second > maxDb) {
        maxDb = par.second;
        leggyakoribb = par.first;
    }
}
cout << leggyakoribb << ": " << maxDb << endl;

// Szógyakoriság fájlból:
ifstream be("szoveg.txt");          // ^^^ EZT VÁLTOZTASD: fájlnév ^^^
string szo;
while (be >> szo) gyak[szo]++;
```

---

## 8. String és karakter

### Alap műveletek

```cpp
string s = "hello";
int hossz = s.length();         // 5
char elso = s[0];               // 'h'
char utolso = s[s.length()-1];  // 'o'
```

### Betű vizsgálat (ASCII)

```cpp
char ch = 'A';

if (ch >= 'A' && ch <= 'Z') { /* nagybetű */ }
if (ch >= 'a' && ch <= 'z') { /* kisbetű */ }
if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) { /* bármilyen betű */ }
if (ch >= '0' && ch <= '9') { /* szám karakter */ }
```

### Nagybetű → kisbetű

```cpp
if (ch >= 'A' && ch <= 'Z') ch = ch - 'A' + 'a';
```

### Betűgyakoriság 26-os tömbbel (kis+nagybetű egybe)

```cpp
int gyak[26] = {};
int nagybetuk = 0;

for (const string& sor : sorok) {       // ^^^ EZT VÁLTOZTASD: ha nem vector<string> ^^^
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

### Legritkább betű

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

### Leggyakoribb betű

```cpp
int maxDb = 0;
char maxBetu = '?';
for (int i = 0; i < 26; i++) {
    if (gyak[i] > maxDb) {
        maxDb = gyak[i];
        maxBetu = 'a' + i;
    }
}
```

---

## 9. Pointerek

### Mini-puska

```cpp
int x = 5;
int* p = &x;

// x   = érték (5)
// &x  = cím
// p   = cím (ugyanaz mint &x)
// *p  = érték (5)
// *p = 25; → x is 25 lesz!
```

### Pointer paraméter (módosítja az eredetit)

```cpp
void novel(int* p) {
    (*p)++;
}
// Hívás: novel(&a);  — vs referencia: void novel(int& x) { x++; } → novel(a);
```

### Csere pointerrel

```cpp
void cserePointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Hívás: cserePointer(&x, &y);
```

### Dinamikus tömb

```cpp
int n;
cin >> n;
int* t = new int[n];            // ^^^ EZT VÁLTOZTASD: típus ^^^

for (int i = 0; i < n; i++) cin >> t[i];
// ... munka ...
delete[] t;                     // kötelező!
```

---

## 10. Teljes programsablonok

---

### SABLON A — Struct + rendezés + statisztika

```cpp
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

struct Versenyzo {              // ^^^ EZT VÁLTOZTASD: struct neve, mezők ^^^
    string nev;
    int kor;
    int pontszam;
};

const int N = 50;               // ^^^ EZT VÁLTOZTASD: max darabszám ^^^

int main() {
    int n;
    cout << "Darabszam: ";
    cin >> n;

    Versenyzo versenyzok[N];
    for (int i = 0; i < n; i++) {
        cin >> versenyzok[i].nev >> versenyzok[i].kor >> versenyzok[i].pontszam;
    }

    // Rendezés pontszám szerint csökkenő:
    sort(versenyzok, versenyzok + n, [](Versenyzo a, Versenyzo b) {
        return a.pontszam > b.pontszam;  // ^^^ EZT VÁLTOZTASD: mező, irány ^^^
    });

    // Legjobb:
    cout << "Legjobb: " << versenyzok[0].nev << endl;

    // Átlag:
    int osszeg = 0;
    for (int i = 0; i < n; i++) osszeg += versenyzok[i].pontszam;  // ^^^ mező ^^^
    cout << "Atlag: " << (double)osszeg / n << endl;

    // Megszámlálás feltétel szerint:
    int fiatal = 0;
    for (int i = 0; i < n; i++) {
        if (versenyzok[i].kor < 18) fiatal++;  // ^^^ EZT VÁLTOZTASD: feltétel ^^^
    }
    cout << "18 evnel fiatalabb: " << fiatal << endl;

    // Van-e 90+ pontú?
    bool van = false;
    for (int i = 0; i < n; i++) {
        if (versenyzok[i].pontszam >= 90) { van = true; break; }  // ^^^ feltétel ^^^
    }
    cout << (van ? "Van 90+ pontos." : "Nincs 90+ pontos.") << endl;

    // Kiírás rendezett sorrendben:
    for (int i = 0; i < n; i++) {
        cout << versenyzok[i].nev << " " << versenyzok[i].pontszam << endl;
    }

    return 0;
}
```

---

### SABLON B — Fájl szóstatisztika (map)

```cpp
#include <algorithm>
#include <fstream>
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    ifstream be("szoveg.txt");      // ^^^ EZT VÁLTOZTASD: bemeneti fájlnév ^^^
    ofstream ki("kimenet.txt");     // ^^^ EZT VÁLTOZTASD: kimeneti fájlnév ^^^

    if (!be.is_open()) {
        cout << "Nem sikerult megnyitni a fajlt." << endl;
        return 1;
    }

    map<string, int> gyak;
    string szo;
    while (be >> szo) gyak[szo]++;

    // Összes szó kiírása:
    for (const auto& par : gyak) {
        ki << par.first << ": " << par.second << endl;
    }

    // Leggyakoribb szó:
    string leggyakoribb = gyak.begin()->first;
    int maxDb = 0;
    for (const auto& par : gyak) {
        if (par.second > maxDb) {
            maxDb = par.second;
            leggyakoribb = par.first;
        }
    }
    ki << "Leggyakoribb: " << leggyakoribb << " (" << maxDb << "x)" << endl;
    ki << "Kulonbozo szavak: " << gyak.size() << endl;

    return 0;
}
```

---

### SABLON C — Fájl betűstatisztika

```cpp
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ifstream be("sorok.txt");       // ^^^ EZT VÁLTOZTASD: fájlnév ^^^
    ofstream ki("gyakori.txt");     // ^^^ EZT VÁLTOZTASD: fájlnév ^^^

    if (!be.is_open()) {
        cout << "Nem sikerult megnyitni." << endl;
        return 1;
    }

    vector<string> sorok;
    string sor;
    while (getline(be, sor)) sorok.push_back(sor);

    int gyak[26] = {};
    int nagybetuk = 0;

    for (const string& s : sorok) {
        for (char ch : s) {
            if (ch >= 'A' && ch <= 'Z') { nagybetuk++; ch = ch - 'A' + 'a'; }
            if (ch >= 'a' && ch <= 'z') gyak[ch - 'a']++;
        }
    }

    // Legritkább:
    int minDb = -1; char minBetu = '?';
    for (int i = 0; i < 26; i++) {
        if (gyak[i] > 0 && (minDb == -1 || gyak[i] < minDb)) {
            minDb = gyak[i]; minBetu = 'a' + i;
        }
    }

    ki << "Legritkabb betu: " << minBetu << endl;
    ki << "Szamossaga: " << minDb << endl;
    ki << "Nagybetuk szama: " << nagybetuk << endl;

    cout << "Legritkabb betu: " << minBetu << " (" << minDb << "x)" << endl;
    cout << "Nagybetuk szama: " << nagybetuk << endl;

    return 0;
}
```

---

### SABLON D — Mátrix műveletek (4×4)

```cpp
#include <array>
#include <iostream>
using namespace std;

const int M = 4;                // ^^^ EZT VÁLTOZTASD: mátrix mérete ^^^

array<int, M> sorKulonbsegek(int matrix[M][M]) {
    array<int, M> eredmeny{};
    for (int i = 0; i < M; i++) {
        int mn = matrix[i][0], mx = matrix[i][0];
        for (int j = 1; j < M; j++) {
            if (matrix[i][j] < mn) mn = matrix[i][j];
            if (matrix[i][j] > mx) mx = matrix[i][j];
        }
        eredmeny[i] = mx - mn;
    }
    return eredmeny;
}

array<int, M> oszlopKulonbsegek(int matrix[M][M]) {
    array<int, M> eredmeny{};
    for (int j = 0; j < M; j++) {
        int mn = matrix[0][j], mx = matrix[0][j];
        for (int i = 1; i < M; i++) {
            if (matrix[i][j] < mn) mn = matrix[i][j];
            if (matrix[i][j] > mx) mx = matrix[i][j];
        }
        eredmeny[j] = mx - mn;
    }
    return eredmeny;
}

int main() {
    int matrix[M][M];
    for (int i = 0; i < M; i++)
        for (int j = 0; j < M; j++)
            cin >> matrix[i][j];

    // Főátló:
    int foatlo = 0;
    for (int i = 0; i < M; i++) foatlo += matrix[i][i];
    cout << "Foatlo: " << foatlo << endl;

    // Mellékátló:
    int mellekatlo = 0;
    for (int i = 0; i < M; i++) mellekatlo += matrix[i][M - 1 - i];
    cout << "Mellekatlo: " << mellekatlo << endl;

    // Soronkénti különbségek:
    auto sorD = sorKulonbsegek(matrix);
    cout << "Sor kulonbsegek: ";
    for (int x : sorD) cout << x << " ";
    cout << endl;

    // Oszloponkénti különbségek:
    auto oszlD = oszlopKulonbsegek(matrix);
    cout << "Oszlop kulonbsegek: ";
    for (int x : oszlD) cout << x << " ";
    cout << endl;

    return 0;
}
```

---

### SABLON E — Fibonacci + prím vegyes feladat

```cpp
#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int fibDarab(int also, int felso) {
    if (also > felso) { int t = also; also = felso; felso = t; }
    int darab = 0;
    int x = 0, y = 1;
    while (x <= felso) {
        if (x >= also) darab++;
        int kov = x + y; x = y; y = kov;
    }
    return darab;
}

int main() {
    int n;
    cout << "Hany szam: ";
    cin >> n;

    int t[100];                     // ^^^ EZT VÁLTOZTASD: méret ^^^
    for (int i = 0; i < n; i++) cin >> t[i];

    // Minden számra fib és prím:
    for (int i = 0; i < n; i++) {
        cout << t[i] << " -> fib=" << fib(t[i])
             << " prim=" << (isPrime(t[i]) ? "igen" : "nem") << endl;
    }

    // Hány prím van a tömbben?
    int primDb = 0;
    for (int i = 0; i < n; i++) if (isPrime(t[i])) primDb++;
    cout << "Primek szama: " << primDb << endl;

    // Hány fibonacci szám van [0, max] tartományban?
    int maxErtek = t[0];
    for (int i = 1; i < n; i++) if (t[i] > maxErtek) maxErtek = t[i];
    cout << "Fib szamok [0," << maxErtek << "]: " << fibDarab(0, maxErtek) << endl;

    return 0;
}
```

---

## Gyors ZH döntési fa

| Ha a feladat... | Akkor... |
|---|---|
| "összeg", "átlag" | összegzés tétel |
| "hány darab", "mennyi" | megszámlálás tétel |
| "van-e" | eldöntés tétel (bool van = false) |
| "hol van", "indexe" | keresés tétel |
| "legnagyobb", "legkisebb" elem | max/min kiválasztás |
| "feltételnek megfelelő elemek" | kiválogatás (vector) |
| "két csoportba" | szétválogatás (két vector) |
| struct + rendezés | sort + lambda |
| fájl + szógyakoriság | map<string,int>, gyak[szo]++ |
| fájl + betűgyakoriság | gyak[26], ch - 'a' index |
| Fibonacci | fib() rekurzív VAGY fibDarab() range |
| prím | isPrime() |
| mátrix főátló | matrix[i][i] |
| mátrix mellékátló | matrix[i][N-1-i] |
| mátrix soronkénti medián | sorMedian() — sort sor-másolatot |
| mátrix soronkénti átlag fölöttiek | sorAtlag() + loop |
| referencia + aritmetika | void muvelet(int& a, int extra, char op) |

## Tipikus hibák

- `&` hiányzik → a main-ben nem változik semmi
- Tömb `N` elem: indexek `0..N-1`, nem `1..N`
- `sort` → kell `#include <algorithm>`
- Átlagnál: `(double)osszeg / n` — nem `osszeg / n`
- `getline` előtt `cin >>` volt → kellhet `cin.ignore()`
- `new[]` után `delete[]` kell (nem sima `delete`)
- Map leggyakoribb: NEM `gyak.begin()->first` (az ábécé szerinti első!) → max-scan loop kell
- Fájlt abból a mappából keresi, ahonnan futtatod (`cd` a megfelelő mappába)

---

## 11. ZH-típusú komplex minták

---

### Két szám közötti Fibonacci számok — kilistázva

```cpp
// Kiírja az [also, felso] zárt intervallumba eső összes Fibonacci számot
void fibKozott(int also, int felso) {
    if (also > felso) { int t = also; also = felso; felso = t; }
    int x = 0, y = 1;
    while (x <= felso) {
        if (x >= also) cout << x << " ";
        int kov = x + y; x = y; y = kov;
    }
    cout << endl;
}
// fibKozott(5, 30) → 5 8 13 21
```

---

### Van-e Fibonacci szám N input között? (eldöntés)

```cpp
bool isFib(int n) {
    if (n < 0) return false;
    int x = 0, y = 1;
    while (x < n) { int kov = x + y; x = y; y = kov; }
    return x == n;
}

// Használat — pl. 8 szám bekérése:
int t[8];                           // ^^^ EZT VÁLTOZTASD: darabszám ^^^
for (int i = 0; i < 8; i++) cin >> t[i];

bool vanFib = false;
for (int i = 0; i < 8; i++) {
    if (isFib(t[i])) { vanFib = true; break; }
}
cout << (vanFib ? "Van Fibonacci szam." : "Nincs Fibonacci szam.") << endl;
```

---

### 4×4 mátrix soronkénti mediánja → 1×4 tömbben

```cpp
// Páros méretű sornál (4 elem): a két középső átlaga
array<double, 4> sorMedianok(int matrix[4][4]) {  // ^^^ EZT VÁLTOZTASD: 4 → méret ^^^
    array<double, 4> eredmeny{};
    for (int i = 0; i < 4; i++) {
        int sor[4];
        for (int j = 0; j < 4; j++) sor[j] = matrix[i][j];
        // Sor rendezése (buborék):
        for (int a = 0; a < 3; a++)
            for (int b = 0; b < 3 - a; b++)
                if (sor[b] > sor[b+1]) { int t = sor[b]; sor[b] = sor[b+1]; sor[b+1] = t; }
        // Páros számú elem → középső kettő átlaga:
        eredmeny[i] = (sor[1] + sor[2]) / 2.0;  // ^^^ páratlan sornál: sor[n/2] ^^^
    }
    return eredmeny;
}

// Kiírás:
// auto med = sorMedianok(matrix);
// for (double x : med) cout << x << " ";
```

> **Páratlan sormérethez** (pl. 5 elem): `eredmeny[i] = sor[2];` (az `n/2`-edik elem, 0-tól indexelve)

---

### 5×5 mátrix mellékátló átlaga

```cpp
// Mellékátló: matrix[0][4], matrix[1][3], matrix[2][2], matrix[3][1], matrix[4][0]
double mellekatloAtlag(int matrix[5][5]) {    // ^^^ EZT VÁLTOZTASD: 5 → méret ^^^
    int osszeg = 0;
    for (int i = 0; i < 5; i++) {
        osszeg += matrix[i][5 - 1 - i];      // ^^^ EZT VÁLTOZTASD: 5 → méret ^^^
    }
    return (double)osszeg / 5;               // ^^^ EZT VÁLTOZTASD: 5 → méret ^^^
}
```

---

### Soronként: melyik számok nagyobbak a sor átlagánál?

```cpp
void sorAtlagFolottiek(int matrix[5][5]) {    // ^^^ EZT VÁLTOZTASD: 5 → méret ^^^
    for (int i = 0; i < 5; i++) {
        // Sor átlaga:
        int osszeg = 0;
        for (int j = 0; j < 5; j++) osszeg += matrix[i][j];
        double atlag = (double)osszeg / 5;    // ^^^ EZT VÁLTOZTASD: 5 → méret ^^^

        cout << i + 1 << ". sor atlag=" << atlag << ", atlag folottiek: ";
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] > atlag) cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
```

---

### Soronkénti átlag → array visszaadás

```cpp
array<double, 5> sorAtlagok(int matrix[5][5]) {  // ^^^ EZT VÁLTOZTASD: 5 → méret ^^^
    array<double, 5> eredmeny{};
    for (int i = 0; i < 5; i++) {
        int osszeg = 0;
        for (int j = 0; j < 5; j++) osszeg += matrix[i][j];
        eredmeny[i] = (double)osszeg / 5;        // ^^^ EZT VÁLTOZTASD: 5 → méret ^^^
    }
    return eredmeny;
}
```

---

### Oszloponkénti átlag → array visszaadás

```cpp
array<double, 5> oszlopAtlagok(int matrix[5][5]) {  // ^^^ EZT VÁLTOZTASD: 5 → méret ^^^
    array<double, 5> eredmeny{};
    for (int j = 0; j < 5; j++) {
        int osszeg = 0;
        for (int i = 0; i < 5; i++) osszeg += matrix[i][j];
        eredmeny[j] = (double)osszeg / 5;            // ^^^ EZT VÁLTOZTASD: 5 → méret ^^^
    }
    return eredmeny;
}
```

---

### Mátrix szimmetria ellenőrzés

```cpp
bool szimmetrikus(int matrix[4][4]) {    // ^^^ EZT VÁLTOZTASD: 4 → méret ^^^
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (matrix[i][j] != matrix[j][i]) return false;
    return true;
}
```

---

### void + referencia + aritmetikai művelet (összeadás / szorzás / kivonás)

```cpp
// Elvégzi a műveletet: a = a OP extra
void muvelet(int& a, int extra, char op) {  // ^^^ EZT VÁLTOZTASD: típus ha nem int ^^^
    if      (op == '+') a = a + extra;
    else if (op == '*') a = a * extra;
    else if (op == '-') a = a - extra;
    // else if (op == '/') a = a / extra;  // ha kell osztás is
}

// Használat:
// int x = 10;
// muvelet(x, 3, '+');  → x = 13
// muvelet(x, 3, '*');  → x = 30
// muvelet(x, 3, '-');  → x = 7
```

> Ha a feladat szerint a műveletet is be kell olvasni: `cin >> op;` ahol `op` egy `char`.

---

### SABLON F — Teljes 5×5 mátrix feladat (mellékátló + átlag fölöttiek)

```cpp
#include <array>
#include <iostream>
using namespace std;

const int M = 5;                    // ^^^ EZT VÁLTOZTASD: méret ^^^

double mellekatloAtlag(int matrix[M][M]) {
    int osszeg = 0;
    for (int i = 0; i < M; i++) osszeg += matrix[i][M - 1 - i];
    return (double)osszeg / M;
}

void sorAtlagFolottiek(int matrix[M][M]) {
    for (int i = 0; i < M; i++) {
        int osszeg = 0;
        for (int j = 0; j < M; j++) osszeg += matrix[i][j];
        double atlag = (double)osszeg / M;
        cout << i + 1 << ". sor (atlag=" << atlag << "): ";
        for (int j = 0; j < M; j++)
            if (matrix[i][j] > atlag) cout << matrix[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int matrix[M][M];
    cout << M << "x" << M << " matrix beolvasasa:" << endl;
    for (int i = 0; i < M; i++)
        for (int j = 0; j < M; j++)
            cin >> matrix[i][j];

    cout << "Mellekatlo atlag: " << mellekatloAtlag(matrix) << endl;
    cout << "Soronkent az atlagnal nagyobb szamok:" << endl;
    sorAtlagFolottiek(matrix);

    return 0;
}
```

---

### SABLON G — 4×4 soronkénti medián → 1×4 kiírás

```cpp
#include <array>
#include <iostream>
using namespace std;

array<double, 4> sorMedianok(int matrix[4][4]) {
    array<double, 4> eredmeny{};
    for (int i = 0; i < 4; i++) {
        int sor[4];
        for (int j = 0; j < 4; j++) sor[j] = matrix[i][j];
        for (int a = 0; a < 3; a++)
            for (int b = 0; b < 3 - a; b++)
                if (sor[b] > sor[b+1]) { int t = sor[b]; sor[b] = sor[b+1]; sor[b+1] = t; }
        eredmeny[i] = (sor[1] + sor[2]) / 2.0;
    }
    return eredmeny;
}

int main() {
    int matrix[4][4];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> matrix[i][j];

    auto med = sorMedianok(matrix);
    cout << "Soronkenti medianok: ";
    for (double x : med) cout << x << " ";
    cout << endl;

    return 0;
}
```

---

### SABLON H — Fibonacci + van-e Fibonacci az inputban

```cpp
#include <iostream>
using namespace std;

bool isFib(int n) {
    if (n < 0) return false;
    int x = 0, y = 1;
    while (x < n) { int kov = x + y; x = y; y = kov; }
    return x == n;
}

void fibKozott(int also, int felso) {
    if (also > felso) { int t = also; also = felso; felso = t; }
    int x = 0, y = 1;
    cout << "Fibonacci szamok [" << also << ", " << felso << "]: ";
    while (x <= felso) {
        if (x >= also) cout << x << " ";
        int kov = x + y; x = y; y = kov;
    }
    cout << endl;
}

int main() {
    // 1. két szám közötti Fibonacci-k:
    int also, felso;
    cin >> also >> felso;
    fibKozott(also, felso);

    // 2. 8 input — van-e közte Fibonacci?
    int t[8];                       // ^^^ EZT VÁLTOZTASD: darabszám ^^^
    cout << "8 szam: ";
    for (int i = 0; i < 8; i++) cin >> t[i];

    bool vanFib = false;
    for (int i = 0; i < 8; i++) {
        if (isFib(t[i])) { vanFib = true; break; }
    }
    cout << (vanFib ? "Van Fibonacci szam." : "Nincs Fibonacci szam.") << endl;

    return 0;
}
```

---

## 12. Matematikai extra függvények

Másold `main()` **fölé**.

---

### Jegyösszeg (számjegyek összege)

```cpp
int jegyOsszeg(int n) {
    if (n < 0) n = -n;
    int osszeg = 0;
    while (n > 0) { osszeg += n % 10; n /= 10; }
    return osszeg;
}
// jegyOsszeg(1234) = 10,  jegyOsszeg(99) = 18
```

### Számjegyek száma (hány jegyű)

```cpp
int jegyDb(int n) {
    if (n == 0) return 1;
    if (n < 0) n = -n;
    int db = 0;
    while (n > 0) { db++; n /= 10; }
    return db;
}
// jegyDb(1234) = 4,  jegyDb(7) = 1
```

### Legnagyobb számjegy

```cpp
int legnagyobbJegy(int n) {
    if (n < 0) n = -n;
    int maxJ = 0;
    while (n > 0) {
        int jegy = n % 10;
        if (jegy > maxJ) maxJ = jegy;
        n /= 10;
    }
    return maxJ;
}
// legnagyobbJegy(3719) = 9
```

### Palindróm szám (visszafelé is ugyanaz)

```cpp
bool palindromSzam(int n) {
    if (n < 0) return false;
    int eredeti = n, ford = 0;
    while (n > 0) { ford = ford * 10 + n % 10; n /= 10; }
    return eredeti == ford;
}
// palindromSzam(121) = true,  palindromSzam(123) = false
```

### Szám megfordítása

```cpp
int fordit(int n) {
    int ford = 0;
    while (n > 0) { ford = ford * 10 + n % 10; n /= 10; }
    return ford;
}
// fordit(1234) = 4321
```

### Valódi osztók összege

```cpp
int osztokOsszege(int n) {
    int osszeg = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0) osszeg += i;
    return osszeg;
}
```

### Tökéletes szám (osztóinak összege = maga)

```cpp
bool tokeletesE(int n) {
    return n > 1 && osztokOsszege(n) == n;
}
// tokeletesE(6) = true (1+2+3=6),  tokeletesE(28) = true,  tokeletesE(12) = false
```

### Armstrong-szám (3 jegyű: jegyek köbének összege = maga)

```cpp
bool armstrongE(int n) {
    int eredeti = n, osszeg = 0;
    while (n > 0) {
        int jegy = n % 10;
        osszeg += jegy * jegy * jegy;
        n /= 10;
    }
    return eredeti == osszeg;
}
// armstrongE(153) = true,  armstrongE(370) = true,  armstrongE(100) = false
```

### Háromszögszám-e? (1, 3, 6, 10, 15, 21...)

```cpp
bool haromszogszamE(int n) {
    int k = 0;
    while (k * (k + 1) / 2 < n) k++;
    return k * (k + 1) / 2 == n;
}
// haromszogszamE(6) = true,  haromszogszamE(10) = true,  haromszogszamE(7) = false
```

### Kettő hatványa-e? (1, 2, 4, 8, 16...)

```cpp
bool kettoPotencE(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}
// kettoPotencE(8) = true,  kettoPotencE(6) = false
```

### Collatz-lépések száma (hány lépés amíg 1-re jut)

```cpp
int collatzLepesek(int n) {
    int lepesek = 0;
    while (n != 1) {
        if (n % 2 == 0) n /= 2;
        else n = 3 * n + 1;
        lepesek++;
    }
    return lepesek;
}
// collatzLepesek(6) = 8,  collatzLepesek(27) = 111
```

---

## 13. Mátrix extra műveletek

---

### Sor- és oszlopösszegek

```cpp
void sorOszlopOsszegek(int matrix[4][4]) {  // ^^^ EZT VÁLTOZTASD: 4 → méret ^^^
    cout << "Sorosszegek: ";
    for (int i = 0; i < 4; i++) {
        int s = 0;
        for (int j = 0; j < 4; j++) s += matrix[i][j];
        cout << s << " ";
    }
    cout << endl;
    cout << "Oszlopösszegek: ";
    for (int j = 0; j < 4; j++) {
        int s = 0;
        for (int i = 0; i < 4; i++) s += matrix[i][j];
        cout << s << " ";
    }
    cout << endl;
}
```

### Legjobb sor (legnagyobb összegű sor indexe)

```cpp
int legjobbSor(int matrix[4][4]) {        // ^^^ EZT VÁLTOZTASD: 4 → méret ^^^
    int maxIdx = 0, maxOsszeg = 0;
    for (int i = 0; i < 4; i++) {
        int s = 0;
        for (int j = 0; j < 4; j++) s += matrix[i][j];
        if (i == 0 || s > maxOsszeg) { maxOsszeg = s; maxIdx = i; }
    }
    return maxIdx;                         // 0-tól indexelve
}
```

### Transzponált (sorok ↔ oszlopok, helyben NxN esetén)

```cpp
void transzponalt(int matrix[4][4]) {     // ^^^ EZT VÁLTOZTASD: 4 → méret ^^^
    for (int i = 0; i < 4; i++)
        for (int j = i + 1; j < 4; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
}
```

### Nyeregpont (saddle point: minimum a sorában ÉS maximum az oszlopában)

```cpp
void nyeregpont(int matrix[4][4]) {       // ^^^ EZT VÁLTOZTASD: 4 → méret ^^^
    bool talalt = false;
    for (int i = 0; i < 4; i++) {
        int sorMin = matrix[i][0], minJ = 0;
        for (int j = 1; j < 4; j++)
            if (matrix[i][j] < sorMin) { sorMin = matrix[i][j]; minJ = j; }

        bool oszlopMax = true;
        for (int k = 0; k < 4; k++)
            if (matrix[k][minJ] > sorMin) { oszlopMax = false; break; }

        if (oszlopMax) {
            cout << "Nyeregpont [" << i << "][" << minJ << "] = " << sorMin << endl;
            talalt = true;
        }
    }
    if (!talalt) cout << "Nincs nyeregpont." << endl;
}
```

### Feltétel fölötti elemek száma

```cpp
int feltetelFolott(int matrix[4][4], int kuszob) {  // ^^^ EZT VÁLTOZTASD: 4, feltétel ^^^
    int db = 0;
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (matrix[i][j] > kuszob) db++;        // ^^^ EZT VÁLTOZTASD: > kuszob ^^^
    return db;
}
```

### Szimmetria ellenőrzés (NxN)

```cpp
bool szimmetrikusE(int matrix[4][4]) {    // ^^^ EZT VÁLTOZTASD: 4 → méret ^^^
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (matrix[i][j] != matrix[j][i]) return false;
    return true;
}
```

---

## 14. Statisztikai függvények tömbön

---

### Módusz (leggyakoribb érték)

```cpp
int modusz(int t[], int n) {
    int legjobb = t[0], legjobbDb = 0;
    for (int i = 0; i < n; i++) {
        int db = 0;
        for (int j = 0; j < n; j++)
            if (t[j] == t[i]) db++;
        if (db > legjobbDb) { legjobbDb = db; legjobb = t[i]; }
    }
    return legjobb;
}
// modusz({1,2,2,3,2}) = 2
```

### Szórás (standard deviation)

```cpp
// Kell: #include <cmath>
double szoras(int t[], int n) {
    double atl = 0;
    for (int i = 0; i < n; i++) atl += t[i];
    atl /= n;
    double variancia = 0;
    for (int i = 0; i < n; i++) {
        double d = t[i] - atl;
        variancia += d * d;
    }
    return sqrt(variancia / n);
}
```

### Medián (rendezi a tömböt! — ha nem akarod, másolj először)

```cpp
// Kell: #include <algorithm>
double median(int t[], int n) {
    sort(t, t + n);
    if (n % 2 == 1) return t[n / 2];
    return (t[n/2 - 1] + t[n/2]) / 2.0;
}
// median({3,1,4,1,5},5) = 3.0,  median({1,2,3,4},4) = 2.5
```

### Terjedelem (max − min)

```cpp
int terjedelem(int t[], int n) {
    int mn = t[0], mx = t[0];
    for (int i = 1; i < n; i++) {
        if (t[i] < mn) mn = t[i];
        if (t[i] > mx) mx = t[i];
    }
    return mx - mn;
}
```

### Rendezett-e? (növekvő)

```cpp
bool rendezettE(int t[], int n) {
    for (int i = 0; i < n - 1; i++)
        if (t[i] > t[i + 1]) return false;
    return true;
}
```

---

## 15. Gyors referencia — összes függvény

```
fib(n)              → n-edik Fibonacci (rekurzív)
fibIter(n)          → n-edik Fibonacci (iteratív, gyorsabb)
fibDarab(a,b)       → hány Fibonacci van [a,b]-ben
isFib(n)            → Fibonacci szám-e?
fibKozott(a,b)      → kiírja az [a,b]-beli Fibonacci számokat
fakto(n)            → n! faktoriális
isPrime(n)          → prímszám-e?
lnko(a,b)           → legnagyobb közös osztó (Euklideszi)
lkkt(a,b)           → legkisebb közös többszörös

jegyOsszeg(n)       → számjegyek összege  (1234→10)
jegyDb(n)           → hány jegyű szám     (1234→4)
legnagyobbJegy(n)   → legnagyobb jegy     (3719→9)
palindromSzam(n)    → visszafelé ugyanaz? (121→true)
fordit(n)           → szám megfordítva    (1234→4321)
osztokOsszege(n)    → valódi osztók összege
tokeletesE(n)       → tökéletes szám?     (6, 28, 496)
armstrongE(n)       → Armstrong szám?     (153, 370, 371)
haromszogszamE(n)   → háromszögszám?      (1,3,6,10,15)
kettoPotencE(n)     → kettő hatványa?     (1,2,4,8,16)
collatzLepesek(n)   → Collatz-lépések száma

modusz(t,n)         → leggyakoribb érték tömbben
szoras(t,n)         → szórás (kell <cmath>)
median(t,n)         → medián (RENDEZI a tömböt!)
terjedelem(t,n)     → max − min
rendezettE(t,n)     → növekvően rendezett-e?

sorOszlopOsszegek() → sor és oszlop összegek kiírva
legjobbSor()        → legnagyobb összegű sor indexe
transzponalt()      → sorok ↔ oszlopok helyben
nyeregpont()        → saddle point keresés
feltetelFolott()    → feltétel fölötti elemek száma
szimmetrikusE()     → mátrix szimmetria
```
