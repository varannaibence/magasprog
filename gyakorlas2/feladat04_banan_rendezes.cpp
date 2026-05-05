#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

/*
Ez volt a ZH - 4. feladat

Hozzon letre strukturat Banan neven, amelynek van:
- sulya,
- minosege ("A" vagy "B"),
- egy bool adattagja, amely jelzi, hogy bio-e.

Toltsön fel egy 5 meretu tombot bananokkal.
Rendezze a tombot suly szerint.
Ird ki a rendezett bananokat.
*/

struct Banan {
    double suly;
    string minoseg;
    bool bio;
};

void rendezSulySzerint(Banan bananok[5]) {
    sort(bananok, bananok + 5, [](Banan a, Banan b) {
        return a.suly < b.suly;
    });
}

int main() {
    Banan bananok[5];

    cout << "Adj meg 5 banant: suly minoseg bio(0/1)" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> bananok[i].suly >> bananok[i].minoseg >> bananok[i].bio;
    }

    rendezSulySzerint(bananok);

    cout << "Rendezett bananok:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << bananok[i].suly << " "
             << bananok[i].minoseg << " "
             << (bananok[i].bio ? "bio" : "nem bio") << endl;
    }

    return 0;
}
