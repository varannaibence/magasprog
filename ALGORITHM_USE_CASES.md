# C++ Algorithm Library — Use Cases & Life Hacks

> **Cél:** Megmutatni, hogy egy tipikus feladatnál melyik STL algoritmust érdemes használni egysorosként, ahelyett hogy saját ciklust írnál.
>
> Mindhez: `#include <algorithm>` — kivéve ahol jelölve van más.
>
> **Szintaxis emlékeztető:**
> - Tömbön: `algo(t, t+N, ...)`
> - Vectoron: `algo(v.begin(), v.end(), ...)`
> - Rövidítés: `[e, v)` = `[begin, end)`

---

## Tartalom

- [1. Rendezés](#1-rendezés)
- [2. Keresés](#2-keresés)
- [3. Megszámlálás](#3-megszámlálás)
- [4. Eldöntés](#4-eldöntés)
- [5. Min / Max](#5-min--max)
- [6. Összegzés és szorzat](#6-összegzés-és-szorzat)
- [7. Módosítás / Transzformáció](#7-módosítás--transzformáció)
- [8. Másolás és kiválogatás](#8-másolás-és-kiválogatás)
- [9. Törlés és egyedi elemek](#9-törlés-és-egyedi-elemek)
- [10. Fordítás és forgatás](#10-fordítás-és-forgatás)
- [11. Halmazműveletek (rendezett sorozatokon)](#11-halmazműveletek-rendezett-sorozatokon)
- [12. Permutáció](#12-permutáció)
- [13. String life hacks](#13-string-life-hacks)
- [14. Numeric algoritmusok](#14-numeric-algoritmusok)
- [15. Összetett egysorosok — életből vett példák](#15-összetett-egysorosok--életből-vett-példák)

---

## 1. Rendezés

```cpp
// Növekvő rendezés
sort(v.begin(), v.end());

// Csökkenő rendezés
sort(v.begin(), v.end(), greater<int>());

// Rendezés lambda alapján (pl. struct mező szerint)
sort(v.begin(), v.end(), [](const Dolog& a, const Dolog& b) {
    return a.nev < b.nev;   // névsor szerint
});

// Rendezés abszolút érték szerint
sort(v.begin(), v.end(), [](int a, int b) {
    return abs(a) < abs(b);
});

// Rendezett-e már? (bool)
bool rendezett = is_sorted(v.begin(), v.end());

// Részleges rendezés: csak az első k elem legyen a legkisebb k elem (gyorsabb mint full sort)
partial_sort(v.begin(), v.begin() + k, v.end());

// Stabil rendezés: egyenlő elemek sorrendje megmarad
stable_sort(v.begin(), v.end());
```

---

## 2. Keresés

```cpp
// Lineáris keresés: első előfordulás — O(n)
auto it = find(v.begin(), v.end(), 42);
if (it != v.end()) cout << "megvan: " << *it << endl;

// Keresés feltétellel: első páros szám
auto it2 = find_if(v.begin(), v.end(), [](int x){ return x % 2 == 0; });

// Keresés visszafelé: utolsó előfordulás
auto it3 = find_if(v.rbegin(), v.rend(), [](int x){ return x > 10; });

// Bináris keresés (csak RENDEZETT sorozaton!) — O(log n)
bool benne = binary_search(v.begin(), v.end(), 42);

// Hol lenne a helye? (rendezett sorozatban)
auto pos = lower_bound(v.begin(), v.end(), 42);  // első >= 42
auto pos2 = upper_bound(v.begin(), v.end(), 42); // első > 42

// Index számolás iterátorból
int idx = distance(v.begin(), pos);

// Min és max egyszerre (pair<it,it>)
auto [minIt, maxIt] = minmax_element(v.begin(), v.end());
cout << *minIt << " " << *maxIt;
```

---

## 3. Megszámlálás

```cpp
// Hány db 5-ös van?
int db = count(v.begin(), v.end(), 5);

// Hány páros elem van?
int parosDb = count_if(v.begin(), v.end(), [](int x){ return x % 2 == 0; });

// Hány negatív elem van?
int negDb = count_if(v.begin(), v.end(), [](int x){ return x < 0; });

// Hány elem esik [a, b] zárt intervalumba?
int db2 = count_if(v.begin(), v.end(), [a, b](int x){ return x >= a && x <= b; });

// Hány szó kezdődik 'A'-val? (string vectoron)
int db3 = count_if(szavak.begin(), szavak.end(), [](const string& s){
    return !s.empty() && s[0] == 'A';
});
```

---

## 4. Eldöntés

```cpp
// Van-e páros elem?
bool vanParos = any_of(v.begin(), v.end(), [](int x){ return x % 2 == 0; });

// Minden elem pozitív?
bool mindPozitiv = all_of(v.begin(), v.end(), [](int x){ return x > 0; });

// Nincs negatív elem?
bool nincNeg = none_of(v.begin(), v.end(), [](int x){ return x < 0; });

// Egyenlők-e két sorozat?
bool egyenlo = equal(v1.begin(), v1.end(), v2.begin());

// Van-e duplikátum? (rendezés után egysoros)
sort(v.begin(), v.end());
bool vanDup = adjacent_find(v.begin(), v.end()) != v.end();
```

---

## 5. Min / Max

```cpp
// Legkisebb / legnagyobb elem értéke
int mn = *min_element(v.begin(), v.end());
int mx = *max_element(v.begin(), v.end());

// Legkisebb / legnagyobb struct mező szerint
auto it = max_element(v.begin(), v.end(), [](const Dolog& a, const Dolog& b){
    return a.ertek < b.ertek;
});
cout << it->nev;  // a legnagyobb értékű dolog neve

// Min és max egyszerre
auto [lo, hi] = minmax(a, b);                          // két szám közül
auto [minIt, maxIt] = minmax_element(v.begin(), v.end()); // sorozatban

// Értéket adott tartományba szorít (clamp, C++17)
int x = clamp(ertek, 0, 100);  // ha ertek < 0 → 0; ha > 100 → 100; különben ertek
```

---

## 6. Összegzés és szorzat

> Kell: `#include <numeric>`

```cpp
// Tömb összege
int osszeg = accumulate(v.begin(), v.end(), 0);        // int: 0 kezdőértékkel
double atlag = accumulate(v.begin(), v.end(), 0.0) / v.size();

// Szorzat
int szorzat = accumulate(v.begin(), v.end(), 1, multiplies<int>());

// Egyedi összegzési logika (pl. csak a pozitívak összege)
int pozOsszeg = accumulate(v.begin(), v.end(), 0, [](int acc, int x){
    return acc + (x > 0 ? x : 0);
});

// Skaláris szorzat (két vektor dot product)
int dot = inner_product(a.begin(), a.end(), b.begin(), 0);

// Prefix összegek (minden elem az addigi összeg legyen)
partial_sum(v.begin(), v.end(), v.begin());  // helyben
// pl. {1,2,3,4} → {1,3,6,10}

// Szomszédos különbségek
adjacent_difference(v.begin(), v.end(), d.begin());
// pl. {1,3,6,10} → {1,2,3,4}
```

---

## 7. Módosítás / Transzformáció

```cpp
// Minden elem duplázása
transform(v.begin(), v.end(), v.begin(), [](int x){ return x * 2; });

// Két vektor összeadása elementwise
transform(a.begin(), a.end(), b.begin(), c.begin(), plus<int>());

// Minden elem feltöltése fix értékkel
fill(v.begin(), v.end(), 0);

// Szekvenciális értékek töltése: 1, 2, 3, ...
iota(v.begin(), v.end(), 1);   // #include <numeric>

// Feltételes csere: ha páros, duplázd
transform(v.begin(), v.end(), v.begin(), [](int x){
    return (x % 2 == 0) ? x * 2 : x;
});

// Minden elem abszolút értéke
transform(v.begin(), v.end(), v.begin(), [](int x){ return abs(x); });

// Karakterek nagybetűsítése
transform(s.begin(), s.end(), s.begin(), ::toupper);
transform(s.begin(), s.end(), s.begin(), ::tolower);

// Csere a sorozaton belül: minden 0-t helyettesít 1-gyel
replace(v.begin(), v.end(), 0, 1);

// Feltételes csere
replace_if(v.begin(), v.end(), [](int x){ return x < 0; }, 0);  // negatívakat nullára
```

---

## 8. Másolás és kiválogatás

```cpp
// Másolás másik containerbe
copy(v.begin(), v.end(), back_inserter(cel));

// Feltételes másolás (kiválogatás)
copy_if(v.begin(), v.end(), back_inserter(parosok), [](int x){ return x % 2 == 0; });

// Az első n elem másolása
copy_n(v.begin(), 5, back_inserter(elso5));

// Vissza irányban másolás (célban nincs átfedés probléma)
copy_backward(v.begin(), v.end(), cel.end());

// Kiválogatás egy másik vectorba (transform + copy_if együtt)
vector<int> eredmeny;
copy_if(v.begin(), v.end(), back_inserter(eredmeny), [](int x){ return x > 100; });

// Cél: string vectorból csak a hosszabb szavak
vector<string> hosszuk;
copy_if(szavak.begin(), szavak.end(), back_inserter(hosszuk), [](const string& s){
    return s.size() > 5;
});
```

---

## 9. Törlés és egyedi elemek

```cpp
// Elem törlése vectorból (erase-remove idiom — kétlépéses!)
v.erase(remove(v.begin(), v.end(), 42), v.end());

// Feltétel alapján törlés (pl. minden negatív)
v.erase(remove_if(v.begin(), v.end(), [](int x){ return x < 0; }), v.end());

// Duplikátumok törlése (CSAK rendezett sorozatból!)
sort(v.begin(), v.end());
v.erase(unique(v.begin(), v.end()), v.end());

// Duplikátumok megszüntetése rendezés nélkül (set-tel)
set<int> egyediek(v.begin(), v.end());
vector<int> uniq(egyediek.begin(), egyediek.end());

// Egyedi értékek száma
sort(v.begin(), v.end());
int uniqDb = unique(v.begin(), v.end()) - v.begin();
```

---

## 10. Fordítás és forgatás

```cpp
// Sorozat megfordítása helyben
reverse(v.begin(), v.end());

// Megfordítva másolás (eredeti marad)
reverse_copy(v.begin(), v.end(), back_inserter(forditott));

// Forgatás: az első elem legyen a k-adik (rotate left by k)
rotate(v.begin(), v.begin() + k, v.end());
// pl. {1,2,3,4,5}, k=2 → {3,4,5,1,2}

// Keverés véletlenszerűen
#include <random>
auto rng = default_random_engine{};
shuffle(v.begin(), v.end(), rng);
```

---

## 11. Halmazműveletek (rendezett sorozatokon)

> Mindkét sorozatnak rendezettnek kell lennie!

```cpp
sort(a.begin(), a.end());
sort(b.begin(), b.end());

// Metszet: közös elemek
vector<int> metszet;
set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(metszet));

// Unió: összes elem egyszer
vector<int> unio;
set_union(a.begin(), a.end(), b.begin(), b.end(), back_inserter(unio));

// Különbség: a-ban van, b-ben nincs
vector<int> kulonbseg;
set_difference(a.begin(), a.end(), b.begin(), b.end(), back_inserter(kulonbseg));

// Szimmetrikus különbség: ami csak az egyikben van
vector<int> szimkul;
set_symmetric_difference(a.begin(), a.end(), b.begin(), b.end(), back_inserter(szimkul));

// a tartalmazza-e b összes elemét?
bool benneVan = includes(a.begin(), a.end(), b.begin(), b.end());

// Rendezett összefűzés
vector<int> merged;
merge(a.begin(), a.end(), b.begin(), b.end(), back_inserter(merged));
```

---

## 12. Permutáció

```cpp
// Összes permutáció generálása (rendezett sorozatból kell indulni!)
sort(v.begin(), v.end());
do {
    for (int x : v) cout << x << " ";
    cout << "\n";
} while (next_permutation(v.begin(), v.end()));

// Előző permutáció
prev_permutation(v.begin(), v.end());

// Hány permutáció van összesen? → n! (faktoriális)
```

---

## 13. String life hacks

```cpp
// Szó keresése stringben
string s = "hello world";
bool talalt = s.find("world") != string::npos;

// Összes nagybetű → kisbetű
transform(s.begin(), s.end(), s.begin(), ::tolower);

// String rendezése betűrendbe
sort(s.begin(), s.end());

// Duplikált karakterek eltávolítása
sort(s.begin(), s.end());
s.erase(unique(s.begin(), s.end()), s.end());

// Palindróm-e egy string?
bool palindrom = equal(s.begin(), s.begin() + s.size()/2, s.rbegin());

// Anagramma-e? (azonos betűk más sorrendben)
string a = "listen", b = "silent";
sort(a.begin(), a.end());
sort(b.begin(), b.end());
bool anagram = (a == b);

// Tokenizálás (szavak szétválasztása) stringstream-mel
#include <sstream>
stringstream ss("alma korte banan");
string szo;
while (ss >> szo) cout << szo << "\n";

// Szám → string
string s2 = to_string(42);

// String → szám
int n = stoi("42");
double d = stod("3.14");
```

---

## 14. Numeric algoritmusok

> Kell: `#include <numeric>`

```cpp
// Összeg
int osszeg = accumulate(v.begin(), v.end(), 0);

// Szorzat
int szorzat = accumulate(v.begin(), v.end(), 1, multiplies<int>());

// Szekvencia: 0,1,2,3,...
vector<int> idx(10);
iota(idx.begin(), idx.end(), 0);

// Szekvencia: 5,6,7,8,...
iota(idx.begin(), idx.end(), 5);

// Prefix összeg (kumulált összeg)
vector<int> prefix(v.size());
partial_sum(v.begin(), v.end(), prefix.begin());

// Greatest common divisor és least common multiple (C++17)
#include <numeric>
int g = gcd(12, 8);   // = 4
int l = lcm(4, 6);    // = 12
```

---

## 15. Összetett egysorosok — életből vett példák

Ezek a tipikus ZH és versenyfeladat minták, ahol egy algoritmus elegáns megoldást ad.

```cpp
// --- RENDEZÉS UTÁNI STATISZTIKÁK ---

// Medián (rendezés után középső elem)
sort(v.begin(), v.end());
double median = (v.size() % 2 == 0)
    ? (v[v.size()/2 - 1] + v[v.size()/2]) / 2.0
    : v[v.size()/2];

// Top-3 elem kiírása (rendezés után az utolsó 3)
sort(v.begin(), v.end());
for (int i = max(0, (int)v.size()-3); i < (int)v.size(); i++) cout << v[i] << " ";

// Leggyakoribb elem (rendezés + max count)
sort(v.begin(), v.end());
int modusz = *max_element(v.begin(), v.end(), [&](int a, int b){
    return count(v.begin(), v.end(), a) < count(v.begin(), v.end(), b);
});

// --- FELTÉTELES MŰVELETEK ---

// Pozitívak átlaga
auto poz = v;
poz.erase(remove_if(poz.begin(), poz.end(), [](int x){ return x <= 0; }), poz.end());
double pozAtlag = poz.empty() ? 0.0 : accumulate(poz.begin(), poz.end(), 0.0) / poz.size();

// Hány különböző érték van? (set trükk)
int kulonbozoDb = set<int>(v.begin(), v.end()).size();

// Van-e ismétlődés?
bool vanIsmetles = set<int>(v.begin(), v.end()).size() < v.size();

// Legnagyobb páros szám
auto it = max_element(v.begin(), v.end(), [](int a, int b){
    if (a % 2 != 0) return true;   // a nem páros → b "nagyobb"
    if (b % 2 != 0) return false;  // b nem páros → a "nagyobb"
    return a < b;
});

// --- VEKTOR MŰVELETEK ---

// Két vektor összefűzése
v1.insert(v1.end(), v2.begin(), v2.end());

// Tömb feltöltése 0-val
fill(t, t + N, 0);

// Tömb összege (tömbnél is működik)
int s = accumulate(t, t + N, 0);

// --- STRING FELDOLGOZÁS ---

// Szavak hossza szerint rendezve
sort(szavak.begin(), szavak.end(), [](const string& a, const string& b){
    return a.size() < b.size();
});

// Leghosszabb szó
auto leghosszabb = *max_element(szavak.begin(), szavak.end(), [](const string& a, const string& b){
    return a.size() < b.size();
});

// Szavak száma, amelyek tartalmaznak 'a' betűt
int asTartalmazo = count_if(szavak.begin(), szavak.end(), [](const string& s){
    return s.find('a') != string::npos;
});

// --- MAP / SET TRÜKKÖK ---

// Szógyakoriság egy sorban
map<string, int> gyak;
for (const auto& szo : szavak) gyak[szo]++;

// Leggyakoribb szó (map-ből)
auto maxIt = max_element(gyak.begin(), gyak.end(), [](const auto& a, const auto& b){
    return a.second < b.second;
});
cout << maxIt->first << ": " << maxIt->second << endl;

// Szavak ábécé sorrendben (set automatikusan rendez)
set<string> uniqSzavak(szavak.begin(), szavak.end());
for (const auto& s : uniqSzavak) cout << s << "\n";
```

---

## Gyors döntési fa

| Feladat | Algoritmus |
|---|---|
| Rendezés | `sort` |
| Rendezett-e? | `is_sorted` |
| Elem benne van? | `find` / `binary_search` (rendezett) |
| Hány db van? | `count` / `count_if` |
| Van-e ilyen? | `any_of` |
| Minden ilyen? | `all_of` |
| Egyik sem ilyen? | `none_of` |
| Min / Max érték | `*min_element` / `*max_element` |
| Összeg | `accumulate` |
| Minden elem módosítása | `transform` |
| Feltételnek megfelelők kiválogatása | `copy_if` |
| Elem törlése | `erase` + `remove` / `remove_if` |
| Duplikátumok törlése | `sort` + `unique` + `erase` |
| Megfordítás | `reverse` |
| Keverés | `shuffle` |
| Metszet / Unió | `set_intersection` / `set_union` |
| Összes permutáció | `next_permutation` |
| Prefix összeg | `partial_sum` |
| LNKO / LKKT | `gcd` / `lcm` (C++17, `<numeric>`) |
