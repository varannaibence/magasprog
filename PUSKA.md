# C++ ZH PUSKA — Copy-Paste Edition

> **Használat:** Megkeresed a témát → kimásolod a kódot → `^^^ EZT VÁLTOZTASD ^^^` sorokat átírod → kész.

---

## Tartalom

- [1. Alap blokk](#1-alap-blokk)
- [1b. Vegyes alapok](#1b-vegyes-alapok)
  - [typedef](#typedef--típus-átnevezés)
  - [auto](#auto--típus-automatikus-felismerés)
  - [sizeof tömb hosszához](#sizeof--tömb-elemszámának-meghatározása)
  - [swap](#swap--két-változó-felcserélése)
- [1c. Vezérlési szerkezetek](#1c-vezérlési-szerkezetek)
  - [switch-case](#switch-case)
  - [do-while](#do-while-hátultesztelő-ciklus)
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
  - [Tömb összege / átlaga](#tömb-összege-és-átlaga)
- [3b. Paraméterátadás és const&](#3b-paraméterátadás-és-const-referencia)
  - [Érték / ref / const& összehasonlítás](#érték--referencia--const-referencia-összehasonlítása)
  - [range-for referenciával](#range-for-referenciával)
- [3c. Függvény-overloading](#3c-függvény-overloading)
  - [Tömb megfordítása](#tömb-megfordítása-helyben-másolás-nélkül)
  - [Tömb rendezése sort()](#tömb-rendezése-sort-tal)
  - [Tömb keresés (indexOf)](#tömb-keresése-első-előfordulás-indexe--1-ha-nincs)
  - [Tömb feltöltése / másolása](#tömb-feltöltése-adott-értékkel)
  - [MxN mátrix (nem négyzetes)](#mxn-mátrix-nem-négyzetes-pl-3-sor--5-oszlop)
  - [Mátrix összes elem összege](#mátrix-összes-elemének-összege-és-átlaga)
  - [Mátrix feltétel elemei / setw](#mátrix-nullázása-deklaráció-után)
  - [Mátrix átadása függvénynek](#mátrix-átadása-függvénynek-különböző-módok)
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
  - [Hozzáfűzés (append)](#fájlba-írás--hozzáfűzés-append-mód)
  - [fstream (olvasás+írás)](#fstream--olvasás-és-írás-ugyanabból-a-fájlból)
  - [Struct soronként fájlba](#struct-soronként-fájlba-írás-és-olvasás-getline-os-verzió)
- [7. Konténerek](#7-konténerek)
  - [vector](#vector)
  - [vector extra metódusok](#vector-extra-metódusok)
  - [2D vector](#2d-vector-vector-of-vectors)
  - [array\<T,N\>](#arrayt-n--visszaadás-függvényből)
  - [list](#list)
  - [set](#set)
  - [map + leggyakoribb](#map)
  - [pair](#pair)
- [8. String és karakter](#8-string-és-karakter)
  - [Alap műveletek](#alap-műveletek)
  - [Betű vizsgálat ASCII](#betű-vizsgálat-ascii)
  - [Nagybetű → kisbetű](#nagybetű--kisbetű)
  - [Betűgyakoriság gyak[26]](#betűgyakoriság-26-os-tömbbel-kiskagybetű-egybe)
  - [Legritkább / leggyakoribb betű](#legritkább-betű)
  - [String keresés / darabolás](#string-keresés-és-darabolás)
  - [Szám ↔ string konverzió](#szám--string-konverzió)
  - [Leghosszabb / legrövidebb szó](#legrövidebb--leghosszabb-szó-vectorban)
- [9. Pointerek](#9-pointerek)
  - [Alap pointer](#mini-puska)
  - [Pointer paraméter](#pointer-paraméter-módosítja-az-eredetit)
  - [Csere pointerrel](#csere-pointerrel)
  - [Dinamikus tömb](#dinamikus-tömb)
  - [new(nothrow)](#newnothrow--biztonságos-allokáció)
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
  - [I — Moduláris tömb feladat](#sablon-i--moduláris-tömb-feladat-minden-művelet-külön-függvényben)
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
- [15. STL algoritmusok — egysorosok](#15-stl-algoritmusok--egysorosok)
- [16. Gyors referencia — összes függvény](#16-gyors-referencia--összes-függvény)

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

## 1b. Vegyes alapok

### typedef — típus átnevezés

```cpp
typedef int egesz;           // mostantól "egesz" ugyanaz mint "int"
typedef double valos;
typedef unsigned long long ull;

egesz x = 5;                 // int x = 5; — ugyanaz
```

### auto — típus automatikus felismerés

```cpp
auto x = 42;                 // int (a fordító kitalálja a jobb oldal alapján)
auto y = 3.14;               // double
auto s = string("hello");    // string

// Leghasznosabb bejáráskor:
vector<int> v = {1, 2, 3};
for (auto x : v) cout << x << " ";          // int x
for (auto& x : v) x *= 2;                   // referencia: módosítja az eredetit
for (const auto& x : v) cout << x << " ";   // const ref: olvasás, nagy objektumnál hatékony

map<string, int> m;
for (const auto& par : m)                   // pair<string,int> helyett auto — rövidebb
    cout << par.first << ": " << par.second << endl;
```

### sizeof — tömb elemszámának meghatározása

```cpp
int t[] = {10, 20, 30, 40, 50};
int n = sizeof(t) / sizeof(int);  // = 5: teljes méret (byte) / egy elem mérete (byte)
                                  // ^^^ EZT VÁLTOZTASD: int → típus ^^^
// FIGYELEM: függvényen belül átadott tömbön NEM működik!
// void f(int t[]) { sizeof(t) } → ez a pointer méretét adja, nem a tömbét
```

### swap — két változó felcserélése

```cpp
#include <algorithm>  // vagy <utility>

int a = 3, b = 7;
swap(a, b);           // a=7, b=3 — nem kell temp változó

string s1 = "alma", s2 = "korte";
swap(s1, s2);         // bármilyen típusra működik
```

---

## 1c. Vezérlési szerkezetek

### switch-case

```cpp
int menu = 2;                          // ^^^ EZT VÁLTOZTASD: típus és változó ^^^
switch (menu) {
    case 1:
        cout << "Elso opció" << endl;
        break;                         // break nélkül "esik tovább" a következő case-be!
    case 2:
        cout << "Masodik opció" << endl;
        break;
    case 3:
    case 4:                            // több case → ugyanaz a kód fut (fall-through szándékosan)
        cout << "Harmadik vagy negyedik" << endl;
        break;
    default:                           // ha egyik case sem illeszkedett
        cout << "Ismeretlen opció" << endl;
}
// switch csak int, char, enum típussal működik — string-gel NEM!
```

### do-while (hátultesztelő ciklus)

```cpp
int szam;
do {
    cout << "Adj meg egy pozitív számot: ";
    cin >> szam;
} while (szam <= 0);  // legalább egyszer lefut, utána ellenőriz
// Akkor hasznos, ha az első végrehajtás előtt nem tudunk feltételt vizsgálni (pl. beolvasás)
```

---

## 2. Matematikai függvények

Másold `main()` **fölé**.

### Fibonacci — rekurzív (az n-edik szám)

```cpp
int fib(int n) {
    if (n <= 1) return n;          // alap eset: fib(0)=0, fib(1)=1
    return fib(n - 1) + fib(n - 2); // rekurzió: az előző kettő összege
}
// fib(0)=0, fib(1)=1, fib(2)=1, fib(3)=2, fib(5)=5, fib(10)=55
```

### Fibonacci — iteratív (az n-edik szám, nagy n-hez gyorsabb)

```cpp
int fibIter(int n) {
    if (n <= 1) return n;          // alap eset: 0 vagy 1
    int x = 0, y = 1;              // x = előző, y = aktuális
    for (int i = 2; i <= n; i++) {
        int kov = x + y;           // következő = előző kettő összege
        x = y;                     // lépés: előző ← aktuális
        y = kov;                   //         aktuális ← következő
    }
    return y;                      // n-edik Fibonacci szám
}
// fibIter(10) = 55, fibIter(0) = 0, fibIter(1) = 1
```

### Fibonacci — hány db van [also, felso]-ban

```cpp
int fibDarab(int also, int felso) {
    if (also > felso) { int t = also; also = felso; felso = t; } // rossz sorrend → felcsere
    int darab = 0;
    int x = 0, y = 1;              // Fibonacci generátor: x az aktuális szám
    while (x <= felso) {           // addig megy, amíg túl nem lépi a felső határt
        if (x >= also) darab++;    // ha az intervallumban van → megszámolja
        int kov = x + y; x = y; y = kov;  // következő Fibonacci szám
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
    if (n < 2) return false;       // 0 és 1 nem prím
    for (int i = 2; i * i <= n; i++) {  // csak √n-ig kell vizsgálni: ha n-nek van osztója,
                                        // akkor az egyik biztosan ≤ √n
        if (n % i == 0) return false;   // talált osztót → nem prím
    }
    return true;                   // nem talált osztót → prím
}
// isPrime(7) = true, isPrime(4) = false
```

### LNKO (Euklideszi)

```cpp
int lnko(int a, int b) {
    // Euklideszi algoritmus: lnko(a,b) = lnko(b, a%b), amíg b=0
    // pl. lnko(12,8): 12%8=4 → lnko(8,4): 8%4=0 → lnko(4,0) → return 4
    while (b != 0) {
        int maradek = a % b;       // a osztva b-vel, mi a maradék
        a = b;
        b = maradek;               // következő körben: a=régi b, b=maradék
    }
    return a;                      // amikor b=0, a tartalmazza az LNKO-t
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

**STL egysorosok** (`#include <algorithm>`):
```cpp
int minimum = *min_element(t, t + N);   // * kell! min_element iterátort ad vissza
int maximum = *max_element(t, t + N);

// Vectorra:
int mn = *min_element(v.begin(), v.end());
int mx = *max_element(v.begin(), v.end());
```

### Legkisebb páros (bool-flag pattern)

```cpp
bool vanParos = false;             // flag: találtunk-e már egyáltalán ilyet
int legkisebb = 0;
for (int i = 0; i < N; i++) {
    if (t[i] % 2 == 0) {                           // ^^^ EZT VÁLTOZTASD: feltétel ^^^
        if (!vanParos || t[i] < legkisebb) {        // az első találatnál (!vanParos) mindig frissít,
            legkisebb = t[i];                       // utána csak ha kisebb az eddiginél
            vanParos = true;
        }
    }
}
if (!vanParos) cout << "Nincs ilyen." << endl;  // flag false maradt → nem volt ilyen elem
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
        // STL: min_element/max_element a sor elejétől a sor végéig
        eredmeny[i] = *max_element(matrix[i], matrix[i] + 4)
                    - *min_element(matrix[i], matrix[i] + 4);
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

### Tömb összege és átlaga

```cpp
int osszeg = 0;
for (int i = 0; i < N; i++) osszeg += t[i];
double atlag = (double)osszeg / N;  // (double) azért kell, hogy ne egész osztás legyen
```

**STL egysorosok** (`#include <numeric>`):
```cpp
int osszeg = accumulate(t, t + N, 0);        // 0 = kezdőérték (int esetén)
double osszeg2 = accumulate(t, t + N, 0.0);  // 0.0 → double összeadás

// Vectorra:
int s = accumulate(v.begin(), v.end(), 0);
double atlag = (double)s / v.size();
```

### Tömb megfordítása (helyben, másolás nélkül)

```cpp
// Elölről és hátulról egyszerre cseréljük az elemeket, amíg a közepéig nem érünk
for (int i = 0; i < N / 2; i++) {
    int temp = t[i];
    t[i] = t[N - 1 - i];    // i=0: első ↔ utolsó, i=1: második ↔ utolsó előtti, stb.
    t[N - 1 - i] = temp;
}
// Pl. [1,2,3,4,5] → [5,4,3,2,1]
```

**STL egysoros** (`#include <algorithm>`):
```cpp
reverse(t, t + N);            // tömbön
reverse(v.begin(), v.end());  // vectoron
```

### Tömb rendezése sort()-tal

```cpp
#include <algorithm>
sort(t, t + N);                        // növekvő sorrend
sort(t, t + N, greater<int>());        // csökkenő sorrend  ^^^ EZT VÁLTOZTASD: int → típus ^^^
```

### Tömb keresése (első előfordulás indexe, -1 ha nincs)

```cpp
int keresett = 7;                      // ^^^ EZT VÁLTOZTASD ^^^
int index = -1;
for (int i = 0; i < N; i++) {
    if (t[i] == keresett) { index = i; break; }  // break: megtalálta, nem kell tovább
}
// index == -1 → nincs benne
```

**STL változat** (`#include <algorithm>`):
```cpp
// find() iterátort ad vissza; ha nem találja → end()
auto it = find(t, t + N, keresett);
if (it != t + N)
    cout << "Index: " << (it - t) << endl;  // it - t = index (pointer aritmetika)
else
    cout << "Nincs benne" << endl;

// Vectorra (find_if feltétellel):
auto it2 = find_if(v.begin(), v.end(), [](int x){ return x > 10; }); // első 10-nél nagyobb
if (it2 != v.end()) cout << *it2 << endl;  // * = dereferálás: az elem értéke
```

### Tömb feltöltése adott értékkel

```cpp
for (int i = 0; i < N; i++) t[i] = 0;  // minden elem nullázása
// Alternatíva deklarációkor: int t[N] = {};  — ez is nulláz
```

**STL egysoros** (`#include <algorithm>`):
```cpp
fill(t, t + N, 0);            // tömbön: minden elem = 0  ^^^ EZT VÁLTOZTASD: érték ^^^
fill(v.begin(), v.end(), -1); // vectoron: minden elem = -1
```

### Elemek kiírása feltétellel (kiválogatás kiírásba)

```cpp
for (int i = 0; i < N; i++) {
    if (t[i] > 0) cout << t[i] << " ";  // ^^^ EZT VÁLTOZTASD: feltétel ^^^
}
cout << endl;
```

### Tömb másolása (egy másik tömbbe)

```cpp
int masik[N];
for (int i = 0; i < N; i++) masik[i] = t[i];
// Másolat rendezésnél hasznos, ha az eredetit meg akarod őrizni
```

**STL egysoros** (`#include <algorithm>`):
```cpp
copy(t, t + N, masik);                        // tömb → tömb
copy(v.begin(), v.end(), back_inserter(v2));  // vector → vector (back_inserter push_back-kel fűz)
```

### MxN mátrix (nem négyzetes, pl. 3 sor × 5 oszlop)

```cpp
const int SOR = 3, OSZ = 5;            // ^^^ EZT VÁLTOZTASD ^^^
int m[SOR][OSZ];

for (int i = 0; i < SOR; i++)
    for (int j = 0; j < OSZ; j++)
        cin >> m[i][j];

for (int i = 0; i < SOR; i++) {
    for (int j = 0; j < OSZ; j++) cout << m[i][j] << " ";
    cout << endl;
}
```

### Mátrix összes elemének összege és átlaga

```cpp
int osszeg = 0;
for (int i = 0; i < M; i++)
    for (int j = 0; j < M; j++)
        osszeg += matrix[i][j];
double atlag = (double)osszeg / (M * M);  // M*M = összes elem száma
```

### Mátrix nullázása (deklaráció után)

```cpp
int matrix[M][M] = {};   // minden elem 0 lesz — csak inicializáláskor működik!
// Vagy utólag:
for (int i = 0; i < M; i++)
    for (int j = 0; j < M; j++)
        matrix[i][j] = 0;
```

### Mátrix feltétel szerinti elemeinek száma

```cpp
int db = 0;
for (int i = 0; i < M; i++)
    for (int j = 0; j < M; j++)
        if (matrix[i][j] % 2 == 0) db++;  // ^^^ EZT VÁLTOZTASD: feltétel ^^^
```

### Mátrix átadása függvénynek (különböző módok)

```cpp
// Fix méretű (leggyakoribb ZH-n):
void feldolgoz(int m[4][4]) { ... }         // ^^^ EZT VÁLTOZTASD: méret ^^^

// Sor és oszlopszám paraméterként (rugalmas, de MxN esetén):
void feldolgoz(int m[][5], int sor) { ... } // az oszlopszámot meg kell adni!

// Hívás mindkét esetben:
feldolgoz(matrix);
```

### Mátrix kiírása szép formátumban (setw)

```cpp
#include <iomanip>
for (int i = 0; i < M; i++) {
    for (int j = 0; j < M; j++)
        cout << setw(5) << matrix[i][j];  // setw(5): minimum 5 karakter széles, jobbra igazított
    cout << endl;
}
```

---

## 3b. Paraméterátadás és const referencia

### Érték / referencia / const referencia összehasonlítása

```cpp
void ertek(int x)         { x++; }          // másolatot kap → az eredeti NEM változik
void referencia(int& x)   { x++; }          // az eredetit módosítja
void constref(const int& x) { /* x++ TILOS */ }  // olvashat, de nem módosíthat

// Mikor mit használj:
// - int, double, char → érték szerint (gyors másolat)
// - nagy struct, string, vector → const& (nem másolja, csak olvasás)
// - módosítani kell az eredetit → & (referencia)

void kiir(const string& s) {  // string NEM másolódik, mégis biztonságos — helyes
    cout << s << endl;
}
void hozzaad(vector<int>& v, int x) {  // módosítja a vektort → & kell
    v.push_back(x);
}
```

### range-for referenciával

```cpp
vector<int> v = {1, 2, 3, 4, 5};

for (int x : v)         cout << x << " ";  // másolat: az eredeti nem változik
for (int& x : v)        x *= 2;            // referencia: megduplázza az összes elemet
for (const int& x : v)  cout << x << " ";  // const ref: hatékony olvasás (nagy elemnél fontos)

// Stringek vectorán:
vector<string> szavak = {"alma", "korte"};
for (const string& sz : szavak) cout << sz << " ";  // string nem másolódik → gyorsabb
```

---

## 3c. Függvény-overloading

Ugyanaz a függvénynév, de különböző paraméterekkel — a fordító a paraméterek alapján dönti el melyiket hívja.

```cpp
// Egész szám maximuma:
int maximum(int a, int b) {
    return a > b ? a : b;
}

// Double maximum (ugyanaz a név, más típus):
double maximum(double a, double b) {
    return a > b ? a : b;
}

// Három szám maximuma (ugyanaz a név, több paraméter):
int maximum(int a, int b, int c) {
    return maximum(maximum(a, b), c);  // meghívja az int,int verziót kétszer
}

// Hívás — a fordító automatikusan a megfelelő verziót választja:
cout << maximum(3, 7)        << endl;  // → int,int verzió
cout << maximum(3.14, 2.71)  << endl;  // → double,double verzió
cout << maximum(1, 5, 3)     << endl;  // → int,int,int verzió
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

**STL egysoros** (`#include <algorithm>`):
```cpp
auto maxIt = max_element(dolgok, dolgok + N, [](Dolog a, Dolog b) {
    return a.ertek < b.ertek;  // ^^^ EZT VÁLTOZTASD: mező ^^^
});
cout << maxIt->nev << endl;    // maxIt egy pointer/iterátor → -> operátorral éred el a mezőt
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

**STL** (`#include <numeric>`): `accumulate(t, t+n, 0)` → összeg egysorban

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

**STL** (`#include <algorithm>`):
```cpp
// Pontos értékre:
int db = count(t, t + n, 5);                               // hány db 5-ös van
// Feltételre:
int db2 = count_if(t, t + n, [](int x){ return x % 2 == 0; }); // hány páros
// Vectorra: count_if(v.begin(), v.end(), feltétel_lambda)
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

**STL** (`#include <algorithm>`):
```cpp
bool van = any_of(t, t + n, [](int x){ return x % 2 == 0; }); // van-e páros?
bool mind = all_of(t, t + n, [](int x){ return x > 0; });     // mind pozitív?
bool egyik_sem = none_of(t, t + n, [](int x){ return x < 0; }); // nincs negatív?
// Vectorra: any_of(v.begin(), v.end(), lambda)
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

**STL** (`#include <algorithm>`): `find(t, t+n, keresett)` → iterátort ad (lásd Tömb keresése fent)

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

**STL** (`#include <algorithm>`):
```cpp
// transform: minden elemre alkalmaz egy függvényt, eredményt másik helyre ír
transform(t, t + n, b, [](int x) { return x * 2; });  // tömb → tömb
transform(v.begin(), v.end(), back_inserter(v2), [](int x) { return x * 2; }); // vector
```

### Kiválogatás (feltételnek megfelelők egy vectorba)

```cpp
vector<int> kivalogatott;                    // ^^^ EZT VÁLTOZTASD: típus ^^^
for (int i = 0; i < n; i++) {
    if (t[i] > 0) kivalogatott.push_back(t[i]);  // ^^^ EZT VÁLTOZTASD: feltétel ^^^
}
```

**STL** (`#include <algorithm>`):
```cpp
vector<int> kivalogatott;
copy_if(t, t + n, back_inserter(kivalogatott), [](int x){ return x > 0; });
// Vectorra: copy_if(v.begin(), v.end(), back_inserter(kivalogatott), feltétel)
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
for (int i = 0; i < n; i++) {             // végigmegy az a[] tömbön
    int j = 0;
    while (j < m && b[j] != a[i]) j++;    // keresi a[i]-t b[]-ben (lineáris keresés)
    if (j < m) metszet.push_back(a[i]);   // ha j<m: megtalálta (nem futott végig) → közös elem
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

> ZH-n kérdezhetik magát az algoritmust — de ha nem, mindig használd a `sort()`-ot!

```cpp
for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
        if (t[i] > t[j]) {              // ^^^ > = növekvő, < = csökkenő ^^^
            int temp = t[i]; t[i] = t[j]; t[j] = temp;
        }
    }
}
```

**STL kiváltója**: `sort(t, t+n)` — ugyanezt csinálja, de sokkal gyorsabb (O(n log n) vs O(n²))

### Buborékrendezés

> ZH-n kérdezhetik magát az algoritmust — de ha nem, mindig használd a `sort()`-ot!

```cpp
for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - 1 - i; j++) {
        if (t[j] > t[j + 1]) {         // ^^^ > = növekvő, < = csökkenő ^^^
            int temp = t[j]; t[j] = t[j + 1]; t[j + 1] = temp;
        }
    }
}
```

**STL kiváltója**: `sort(t, t+n)` — azonos eredmény, de O(n log n) helyett O(n²) lenne a buborék

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

### Fájlba írás — hozzáfűzés (append) mód

```cpp
// ios::app → nem törli a meglévő tartalmat, a végére ír
ofstream ki("naplo.txt", ios::app); // ^^^ EZT VÁLTOZTASD: fájlnév ^^^
ki << "Új sor hozzáadva." << endl;
// Minden futásnál új sort fűz a fájl végéhez, nem írja felül
```

### fstream — olvasás ÉS írás ugyanabból a fájlból

```cpp
#include <fstream>
fstream f("adat.txt", ios::in | ios::out);  // ^^^ EZT VÁLTOZTASD: fájlnév ^^^
if (!f.is_open()) { cout << "Nem nyílt meg." << endl; return 1; }

string sor;
while (getline(f, sor)) cout << sor << endl;  // olvasás

f.clear();           // reseteli az EOF flag-et
f.seekp(0, ios::end); // a fájl végére ugrik íráshoz
f << "Hozzáfűzött sor" << endl;
```

### Struct soronként fájlba írás és olvasás (getline-os verzió)

```cpp
struct Szemely {                    // ^^^ EZT VÁLTOZTASD: struct neve, mezők ^^^
    string nev;
    int kor;
};

// Írás: minden mező külön sor
ofstream ki("szemelyek.txt");
Szemely s = {"Kovacs Bela", 30};
ki << s.nev << "\n" << s.kor << "\n";

// Olvasás vissza:
ifstream be("szemelyek.txt");
Szemely s2;
getline(be, s2.nev);        // sor beolvasása → névbe (szóközöket is kezel!)
be >> s2.kor;               // szám beolvasása
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

### vector extra metódusok

```cpp
vector<int> v = {3, 1, 4, 1, 5};   // inicializálás listával (C++11)

v.front()               // első elem (v[0]) — de nem dob kivételt ha üres, UB lesz!
v.back()                // utolsó elem (v[v.size()-1])
v.at(2)                 // 2-es indexű elem — dobja a std::out_of_range kivételt ha rossz index
                        // v[2] ugyanez, de nem ellenőriz → v.at() biztonságosabb

v.empty()               // true ha üres (v.size() == 0)
v.clear()               // törli az összes elemet (size=0 lesz, de a memória marad)
v.resize(8)             // méretet 8-ra állítja (ha nő, nullákat told be; ha csökken, levágja)
v.resize(8, -1)         // méretet 8-ra állítja, az új elemek értéke -1 lesz
v.pop_back()            // utolsó elem törlése
v.erase(v.begin() + 2)  // 3. elem törlése (index 2)
```

### 2D vector (vector of vectors)

```cpp
// Deklaráció és feltöltés (ha a méret nem ismert fordításkor):
int sorok = 3, oszlopok = 4;        // ^^^ EZT VÁLTOZTASD ^^^
vector<vector<int>> m(sorok, vector<int>(oszlopok, 0));  // 3x4, mindenhol 0

// Beolvasás:
for (int i = 0; i < sorok; i++)
    for (int j = 0; j < oszlopok; j++)
        cin >> m[i][j];

// Kiírás:
for (int i = 0; i < (int)m.size(); i++) {
    for (int j = 0; j < (int)m[i].size(); j++)
        cout << m[i][j] << " ";
    cout << endl;
}

// Sor hozzáadása dinamikusan:
vector<int> ujSor = {1, 2, 3, 4};
m.push_back(ujSor);
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
l.remove(10);                       // eltávolítja az összes 10-es értékű elemet

// Feltétel alapján töröl (remove_if + lambda):
l.remove_if([](int x) { return x % 2 == 0; });  // törli az összes páros elemet
// ^^^ EZT VÁLTOZTASD: a lambda belseje (feltétel) ^^^

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
// VIGYÁZZ: gyak.begin()->first az ábécé szerinti első kulcs, NEM a leggyakoribb!
string leggyakoribb = gyak.begin()->first;  // csak kezdőérték, a loop felülírja
int maxDb = 0;
for (const auto& par : gyak) {  // par.first = kulcs (szó), par.second = darabszám
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

### pair

```cpp
// Két különböző típusú érték együtt tárolva:
pair<string, int> p = {"alma", 5};  // ^^^ EZT VÁLTOZTASD: típusok ^^^

cout << p.first  << endl;  // "alma"
cout << p.second << endl;  // 5

// Vector of pair (pl. név-pont párok):
vector<pair<string, int>> lista;
lista.push_back({"Bela", 90});
lista.push_back({"Anna", 85});

// Rendezés second szerint csökkenő (pont szerint):
sort(lista.begin(), lista.end(), [](pair<string,int> a, pair<string,int> b) {
    return a.second > b.second;
});

// Bejárás:
for (const auto& elem : lista)
    cout << elem.first << ": " << elem.second << endl;
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

### Betű vizsgálat (ASCII és cctype)

```cpp
char ch = 'A';

// Kézi ASCII módszer:
if (ch >= 'A' && ch <= 'Z') { /* nagybetű */ }
if (ch >= 'a' && ch <= 'z') { /* kisbetű */ }
if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) { /* bármilyen betű */ }
if (ch >= '0' && ch <= '9') { /* szám karakter */ }
```

**STL egysorosok** (`#include <cctype>`) — rövidebb és olvashatóbb:
```cpp
isupper(ch)   // nagybetű-e?
islower(ch)   // kisbetű-e?
isalpha(ch)   // betű-e? (kis- vagy nagybetű)
isdigit(ch)   // számjegy-e? ('0'..'9')
isalnum(ch)   // betű vagy szám-e?
isspace(ch)   // szóköz, tab, újsor-e?
// Visszatérési érték: int (0 = nem, nem-0 = igen)
```

### Nagybetű ↔ kisbetű

```cpp
// Kézi módszer:
if (ch >= 'A' && ch <= 'Z') ch = ch - 'A' + 'a';  // nagy → kis
```

**STL** (`#include <cctype>`):
```cpp
ch = tolower(ch);   // nagybetű → kisbetű (más karaktert érintetlenül hagy)
ch = toupper(ch);   // kisbetű → nagybetű

// Egész string kisbetűsítése:
for (char& c : s) c = tolower(c);
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

### String keresés és darabolás

```cpp
string s = "hello vilag";

// Keresés: find() → index-et ad vissza, vagy string::npos ha nincs
size_t pos = s.find("vilag");       // pos = 6
if (pos != string::npos)
    cout << "Megtalalta: " << pos << endl;
else
    cout << "Nincs benne" << endl;

// Részstring: substr(kezdet, hossz)
string resz = s.substr(6, 5);      // "vilag" — 6-os indextől, 5 karakter
string resz2 = s.substr(6);        // "vilag" — 6-os indextől a végéig

// Törlés: erase(kezdet, hossz)
s.erase(5, 6);                     // "hello" — törli a " vilag" részt (5-ös indextől 6 karaktert)

// Csere: replace(kezdet, hossz, ujSzoveg)
string s2 = "hello vilag";
s2.replace(6, 5, "world");         // "hello world"
```

### Szám ↔ string konverzió

```cpp
// Szám → string:
int n = 42;
string str = to_string(n);         // "42"
double d = 3.14;
string str2 = to_string(d);        // "3.140000" (sok tizedes)

// String → szám:
string s = "123";
int szam = stoi(s);                // 123  (string to int)
double val = stod("3.14");         // 3.14 (string to double)
// FIGYELEM: stoi/stod kivételt dob ha a string nem szám!
```

### Legrövidebb / leghosszabb szó vectorban

```cpp
vector<string> szavak = {"alma", "korte", "szilva"};  // ^^^ EZT VÁLTOZTASD ^^^

string leghosszabb = szavak[0];
string legrövidebb = szavak[0];
for (const string& sz : szavak) {
    if (sz.length() > leghosszabb.length()) leghosszabb = sz;
    if (sz.length() < legrövidebb.length()) legrövidebb = sz;
}
// leghosszabb = "szilva", legrövidebb = "alma"
```

**STL egysoros** (`#include <algorithm>`):
```cpp
auto leghosszabb = *max_element(szavak.begin(), szavak.end(),
    [](const string& a, const string& b){ return a.length() < b.length(); });
auto legrövidebb = *min_element(szavak.begin(), szavak.end(),
    [](const string& a, const string& b){ return a.length() < b.length(); });
```

---

## 9. Pointerek

### Mini-puska

```cpp
int x = 5;
int* p = &x;   // p egy pointer: x memóriacímét tárolja

// x   = érték (5)          → maga a változó
// &x  = cím                → "hol van x a memóriában" (pl. 0x7ffd...)
// p   = cím (ugyanaz mint &x) → p ezt a címet tárolja
// *p  = érték (5)          → "dereferálás": a p által mutatott helyen lévő érték
// *p = 25; → x is 25 lesz! → pointeren keresztül írjuk a változót
```

### Pointer paraméter (módosítja az eredetit)

```cpp
void novel(int* p) {
    (*p)++;   // dereferálás (*p) = az a[]-ban lévő érték, azt növeli 1-gyel
              // a zárójelek fontosak: *p++ más jelentésű lenne (pointer lép, nem az érték)
}
// Hívás: novel(&a);  — a & azért kell, mert a függvény pointert vár, &a = a memóriacíme
// vs referencia: void novel(int& x) { x++; } → novel(a);  — referenciánál nincs & a hívásnál
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
delete[] t;                     // kötelező! ha elmarad → memory leak
```

### new(nothrow) — biztonságos allokáció

```cpp
#include <new>
int* t = new(nothrow) int[n];   // ha nem sikerül a memóriafoglalás → nullptr-t ad vissza
                                // sima new esetén exception-t dobna (program leállna)
if (t == nullptr) {
    cout << "Nem sikerült a memóriafoglalás!" << endl;
    return 1;
}
// ... munka ...
delete[] t;
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

    // Hány prím van a tömbben? (STL: count_if)
    int primDb = count_if(t, t + n, isPrime);  // isPrime függvényt adunk át lambdaként
    cout << "Primek szama: " << primDb << endl;

    // Hány fibonacci szám van [0, max] tartományban? (STL: *max_element)
    int maxErtek = *max_element(t, t + n);
    cout << "Fib szamok [0," << maxErtek << "]: " << fibDarab(0, maxErtek) << endl;

    return 0;
}
```

---

## Gyors ZH döntési fa

| Ha a feladat... | Kézi loop | STL egysoros |
|---|---|---|
| "összeg", "átlag" | `osszeg += t[i]` | `accumulate(t, t+n, 0)` |
| "hány darab", "mennyi" | megszámlálás tétel | `count_if(t, t+n, lambda)` |
| "van-e" | eldöntés tétel | `any_of(t, t+n, lambda)` |
| "mind teljesíti-e" | eldöntés loop | `all_of(t, t+n, lambda)` |
| "hol van", "indexe" | keresés tétel | `find(t, t+n, ertek) - t` |
| "legnagyobb", "legkisebb" | max/min loop | `*max_element` / `*min_element` |
| "feltételnek megfelelő elemek" | kiválogatás (vector push_back) | `copy_if(... back_inserter)` |
| "minden elemből új elem" | másolás loop | `transform(... lambda)` |
| "két csoportba" | szétválogatás (két vector) | két `copy_if` |
| struct + rendezés | sort + lambda | sort + lambda |
| fájl + szógyakoriság | map<string,int>, gyak[szo]++ | map<string,int>, gyak[szo]++ |
| fájl + betűgyakoriság | gyak[26], ch - 'a' index | gyak[26] + `tolower(ch)` |
| betű vizsgálat | `ch >= 'a' && ch <= 'z'` | `islower(ch)`, `isalpha(ch)` |
| nagy→kisbetű | `ch - 'A' + 'a'` | `tolower(ch)` |
| rendezés | cserés / buborék loop | `sort(t, t+n)` |
| megfordítás | csere loop | `reverse(t, t+n)` |
| rendezett-e | loop | `is_sorted(t, t+n)` |
| Fibonacci | fib() / fibDarab() | — |
| prím | isPrime() | `count_if(t,t+n, isPrime)` |
| mátrix főátló | `matrix[i][i]` | — |
| mátrix mellékátló | `matrix[i][N-1-i]` | — |
| mátrix sor min/max | belső loop | `*min_element(m[i], m[i]+M)` |
| referencia + aritmetika | `void muvelet(int& a, ...)` | — |

## Tipikus hibák

- `&` hiányzik → a main-ben nem változik semmi
- Tömb `N` elem: indexek `0..N-1`, nem `1..N`
- `sort` → kell `#include <algorithm>`
- Átlagnál: `(double)osszeg / n` — nem `osszeg / n`
- `getline` előtt `cin >>` volt → **kötelező** `cin.ignore()` (lásd lent!)
- `new[]` után `delete[]` kell (nem sima `delete`)
- Map leggyakoribb: NEM `gyak.begin()->first` (az ábécé szerinti első!) → max-scan loop kell
- Fájlt abból a mappából keresi, ahonnan futtatod (`cd` a megfelelő mappába)
- `for(int x : v)` → másolat, `for(int& x : v)` → módosítja az eredetit — ne keverj!
- `vector[i]` nincs határellenőrzés (UB); `vector.at(i)` kivételt dob — ZH-n `[i]` is elfogadott
- `sizeof(t)/sizeof(int)` csak ott működik ahol a tömb deklarálva van; függvény paraméterként NEM

### cin.ignore() — getline előtti kötelező tisztítás

```cpp
// PROBLÉMA: cin >> szam után a sorban marad egy '\n' karakter
// Ha utána getline()-t hívunk, az azonnal visszatér az üres sorral!

int szam;
cin >> szam;
cin.ignore();               // elnyeli a '\n' karaktert → getline már jól működik

string sor;
getline(cin, sor);          // most már helyesen olvas egész sort

// Ha nem tudod hány enter maradt a bufferben:
cin.ignore(numeric_limits<streamsize>::max(), '\n');  // mindent töröl az első '\n'-ig
// Ehhez: #include <limits>
```

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
    while (x < n) { int kov = x + y; x = y; y = kov; }  // generálja a Fibonacci számokat,
                                                          // amíg el nem éri vagy túl nem lépi n-t
    return x == n;  // pontosan egyenlő → Fibonacci szám; ha túllépte → nem az
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
        for (int j = 0; j < 4; j++) sor[j] = matrix[i][j];  // sor másolata (ne módosítsuk az eredetit)
        // Sor rendezése (buborék): minden menetben a legnagyobb "buborékozik" a végére
        for (int a = 0; a < 3; a++)
            for (int b = 0; b < 3 - a; b++)       // 3-a: a már rendezett vég rövidül
                if (sor[b] > sor[b+1]) { int t = sor[b]; sor[b] = sor[b+1]; sor[b+1] = t; }
        // 4 elemet rendezés után: [0] legkisebb, [1], [2] középsők, [3] legnagyobb
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

### SABLON I — Moduláris tömb feladat (minden művelet külön függvényben)

> **Moduláris** = minden logikai egység saját függvény. A `main()` csak hívja őket, nem tartalmaz logikát.

```cpp
#include <algorithm>
#include <array>
#include <iostream>
using namespace std;

const int N = 6;   // ^^^ EZT VÁLTOZTASD: tömb mérete ^^^

// --- BEOLVASÁS / KIÍRÁS ---

void beolvas(int t[], int n) {
    for (int i = 0; i < n; i++) cin >> t[i];
}

void kir(int t[], int n) {
    for (int i = 0; i < n; i++) cout << t[i] << " ";
    cout << endl;
}

// --- ALAPSTATISZTIKÁK ---

int osszeg(int t[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++) s += t[i];
    return s;
}

double atlag(int t[], int n) {
    return (double)osszeg(t, n) / n;   // osszeg() függvényt hívja → nem duplikál kódot
}

int minimum(int t[], int n) {
    int mn = t[0];
    for (int i = 1; i < n; i++) if (t[i] < mn) mn = t[i];
    return mn;
}

int maximum(int t[], int n) {
    int mx = t[0];
    for (int i = 1; i < n; i++) if (t[i] > mx) mx = t[i];
    return mx;
}

// --- KERESÉS / ELDÖNTÉS ---

int elsoIndex(int t[], int n, int keresett) {
    // Visszaadja a keresett érték első indexét, vagy -1-et ha nincs benne
    for (int i = 0; i < n; i++) if (t[i] == keresett) return i;
    return -1;
}

bool vanE(int t[], int n, int keresett) {
    return elsoIndex(t, n, keresett) != -1;  // elsoIndex-et hívja, nem duplikál
}

int megszamlal(int t[], int n) {
    // Megszámolja a páros elemeket ^^^ EZT VÁLTOZTASD: feltétel ^^^
    int db = 0;
    for (int i = 0; i < n; i++) if (t[i] % 2 == 0) db++;
    return db;
}

// --- MÓDOSÍTÁS ---

void megfordit(int t[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = t[i]; t[i] = t[n-1-i]; t[n-1-i] = temp;
    }
}

void rendez(int t[], int n) {
    sort(t, t + n);   // növekvő ^^^ csökkenőhöz: sort(t, t+n, greater<int>()); ^^^
}

// --- MAIN: csak hívások, semmi logika ---

int main() {
    int t[N];

    cout << "Add meg a " << N << " szamot: ";
    beolvas(t, N);

    cout << "Tomb: ";          kir(t, N);
    cout << "Osszeg: "      << osszeg(t, N)    << endl;
    cout << "Atlag: "        << atlag(t, N)     << endl;
    cout << "Min: "          << minimum(t, N)   << endl;
    cout << "Max: "          << maximum(t, N)   << endl;
    cout << "Parosak: "      << megszamlal(t, N) << endl;

    int ker = 5;                               // ^^^ EZT VÁLTOZTASD ^^^
    cout << ker << " benne van-e: " << (vanE(t, N, ker) ? "igen" : "nem") << endl;
    cout << ker << " indexe: "      << elsoIndex(t, N, ker) << endl;

    megfordit(t, N);
    cout << "Megfordítva: ";   kir(t, N);

    rendez(t, N);
    cout << "Rendezve: ";      kir(t, N);

    return 0;
}
```

> **Mátrix moduláris verzióhoz** ugyanez az elv: `beolvasMat`, `kirMat`, `sorOsszeg`, `mellekatloAtlag` stb. — mindennek saját függvény, a `main()` csak hívja őket.

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
    // Trükk: ha n kettő hatványa, akkor binárisban pontosan 1 db egyes bit van (pl. 8 = 1000)
    // n-1 ilyenkor az összes alacsonyabb bitet 1-re állítja (7 = 0111)
    // n & (n-1) ezért 0 lesz kettő hatványánál, és nem 0 minden más esetén
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
        // 1. lépés: megkeresi az i. sor minimumát és annak oszlopindexét
        int sorMin = matrix[i][0], minJ = 0;
        for (int j = 1; j < 4; j++)
            if (matrix[i][j] < sorMin) { sorMin = matrix[i][j]; minJ = j; }

        // 2. lépés: megnézi, hogy ez a minimum egyúttal a saját oszlopában is maximum-e
        bool oszlopMax = true;
        for (int k = 0; k < 4; k++)
            if (matrix[k][minJ] > sorMin) { oszlopMax = false; break; }  // van nála nagyobb → nem max

        if (oszlopMax) {  // sorban minimum ÉS oszlopban maximum → nyeregpont
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
        int db = count(t, t + n, t[i]);   // STL: count helyettesíti a belső for-t
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
    atl /= n;                      // 1. lépés: átlag kiszámítása
    double variancia = 0;
    for (int i = 0; i < n; i++) {
        double d = t[i] - atl;     // eltérés az átlagtól
        variancia += d * d;        // négyzetösszeg (mindig pozitív)
    }
    // variancia = átlagos négyzeteltérés; szórás = ennek gyöke
    return sqrt(variancia / n);
}
```

### Medián (rendezi a tömböt! — ha nem akarod, másolj először)

```cpp
// Kell: #include <algorithm>
double median(int t[], int n) {
    sort(t, t + n);                // rendezés – FIGYELEM: az eredeti tömböt módosítja!
    if (n % 2 == 1) return t[n / 2];           // páratlan elemszám → középső elem (pl. 5 elemnél index 2)
    return (t[n/2 - 1] + t[n/2]) / 2.0;        // páros elemszám → két középső átlaga
}
// median({3,1,4,1,5},5) = 3.0,  median({1,2,3,4},4) = 2.5
```

### Terjedelem (max − min)

```cpp
int terjedelem(int t[], int n) {
    // STL: minmax_element egyszerre adja a min és max iterátort
    auto [mn, mx] = minmax_element(t, t + n);  // C++17: strukturált kötés
    return *mx - *mn;
    // Ha C++17 nem elérhető:
    // return *max_element(t,t+n) - *min_element(t,t+n);
}
```

### Rendezett-e? (növekvő)

**STL egysoros**: `is_sorted(t, t+n)` vagy `is_sorted(v.begin(), v.end())`

```cpp
bool rendezettE(int t[], int n) {
    for (int i = 0; i < n - 1; i++)
        if (t[i] > t[i + 1]) return false;
    return true;
}
```

---

## 15. STL algoritmusok — egysorosok

> Mindhez kell: `#include <algorithm>` (kivéve `accumulate` → `#include <numeric>`)
> Tömbön: `f(t, t+N, ...)` — Vectoron: `f(v.begin(), v.end(), ...)`

```
// KERESÉS / ELDÖNTÉS
find(eleje, vége, ertek)              → iterátor (első előfordulás); ha nincs: end()
find_if(eleje, vége, lambda)          → iterátor (első ami teljesíti a feltételt)
any_of(eleje, vége, lambda)           → bool: van-e olyan elem?
all_of(eleje, vége, lambda)           → bool: mind teljesíti?
none_of(eleje, vége, lambda)          → bool: egyik sem teljesíti?

// MEGSZÁMLÁLÁS
count(eleje, vége, ertek)             → int: hányszor szerepel az érték
count_if(eleje, vége, lambda)         → int: hány elem teljesíti a feltételt

// MIN / MAX
*min_element(eleje, vége)             → a legkisebb ÉRTÉK (* kell!)
*max_element(eleje, vége)             → a legnagyobb ÉRTÉK
min_element(eleje, vége, lambda)      → iterátor a minimumra (struct mezőre)
max_element(eleje, vége, lambda)      → iterátor a maximumra (struct mezőre)
minmax_element(eleje, vége)           → pair<it,it>: {min, max} egyszerre

// RENDEZÉS
sort(eleje, vége)                     → növekvő
sort(eleje, vége, greater<T>())       → csökkenő
sort(eleje, vége, lambda)             → egyedi feltétel szerint
is_sorted(eleje, vége)                → bool: rendezett-e?

// MÓDOSÍTÁS
reverse(eleje, vége)                  → megfordítja helyben
fill(eleje, vége, ertek)              → minden elem = ertek
copy(forrás_e, forrás_v, cél_e)       → másolás másik helyre
transform(e, v, cél, lambda)          → minden elemre alkalmaz, eredményt cél-ba ír

// ÖSSZEGZÉS (#include <numeric>)
accumulate(eleje, vége, kezdoErtek)   → összeg (int: 0, double: 0.0)
```

**Lambda szintaxis emlékeztető:**
```cpp
[](int x) { return x % 2 == 0; }   // páros-e?
[](int x) { return x > 0; }         // pozitív-e?
[](Dolog a, Dolog b) { return a.ertek < b.ertek; }  // struct mező szerint
```

---

## 16. Gyors referencia — összes függvény

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
