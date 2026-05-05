#include <iostream>
#include <fstream>
#include <sstream>
#include <array>
#include <vector>
#include <string>

using namespace std;

int legnagyobbf(int a, int b){
    int legnagyobb = -1;
    int x = 0, y = 1;
    while(x < b){
        if(x >= a){
            legnagyobb = x;
        }
        int kov = x + y;
        x = y;
        y = kov;
    }
    return legnagyobb;
}

int* soratlag(int t[4][4]){
        int* visszaad = new int[4];

        return visszaad;
}

array<double ,4> soratlag2(int t[4][4]){
    array<double, 4> atlagok;
    for(int i = 0; i < 4; i++){
        double osszeg = 0;
        for(int j = 0; j < 4; j++){
            osszeg += t[i][j];
        }
        atlagok[i] = osszeg / 4.0;
    }
    
    return atlagok;
}

void fv3(char& a, int t[10], int b){
    a = t[b];
}

struct doboz{
    int szelesseg;
    int magassag;
    int melyseg;
};
int main() {
    // 1. feladat fibonacci kettő szám között
    cout << "Elso feladat: Két szám között a legnagyobb fibonacci szám" << endl;
    int a, b;
    cout << "Adja meg az első számot: ";
    cin >> a;
    cout << "Adja meg a második számot: ";
    cin >> b;


    cout << "A két szám közötti legnagyobb fibonacci szám: " << legnagyobbf(a, b) << endl;

    // 2. feladat fv ami 4x4 es kétdimenziós tömb paramétere és visszaadja a soronkénti átlagokat egy egydinmenziós 4 méretű tömbként
    cout << "Második feladat: Soronkénti átlagok egy 4x4-es kétdimenziós tömbből" << endl;
    int t[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    array<double, 4> atlagok = soratlag2(t);
    cout << "Soronkénti átlagok: ";
    for (double atlag : atlagok) {
        cout << atlag << " ";
    }
    cout << endl;

    cout << "Harmadik feladat: fv ami egy karatkere van (a) egy 10 méretű tömb és egy integer (b) paramétere visszatérési értéke void. a fv másolja be a tömb b edik elemének értékét az a karakterbe" << endl;
    char a;
    int t2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b;
    cout << "Adja meg a b indexet (0-9): ";
    cin >> b;
    if (b < 0 || b >= 10) {
        cout << "Hibás index! Kérem adjon meg egy 0 és 9 közötti értéket." << endl;
        return 1;
    }
    fv3(a, t2, b);
    cout << "A tömb " << b << ". eleme: " << t2[b] << " -> a karakter értéke: " << a << endl;
    
    cout << "negyedik: kérjen be a felhasználótól egy egész számot majd megadott számosságú szóköz nélküli stringer. íjra ki a képernyőre a legrövidebbet és a leghoszabbat" << endl;
    int n;
    cout << "Adja meg a szavak számát: ";
    cin >> n;
    cout << "Adjon meg " << n << " szóköz nélküli szót:" << endl;
    string szavak[n];
    for (int i = 0; i < n; i++) {
        cin >> szavak[i];
    }
    string leghosszabb = szavak[0];
    string legrövidebb = szavak[0];
    for (int i = 1; i < n; i++) {
        if (szavak[i].length() > leghosszabb.length()) {
            leghosszabb = szavak[i];
        }
        if (szavak[i].length() < legrövidebb.length()) {
            legrövidebb = szavak[i];
        }
    }
    cout << "Leghosszabb szó: " << leghosszabb << endl;
    cout << "Legrövidebb szó: " << legrövidebb << endl;

    cout << "ötödik: definiáljon egy doboz structot aminek van szélesség, magasság és mélység mezője. majd kérjen be a felhasználótól egy doboz szélességét, magasságát és mélységét és töltsön fel egy 5 méretű tömböt és írjuk ki egymás tetején milyen magas lesz a torony" << endl;
    doboz dobozok[5] = {{1,1,1}, {2,2,2}, {3,3,3}, {4,4,4}, {5,5,5}};
    int magassag = 0;
    for (int i = 0; i < 5; i++) {
        magassag += dobozok[i].magassag;
    }
    cout << "A torony magassága: " << magassag << endl;

    cout << "hatodik olvassa be a random.txt állományt egy tetszőleges adatszerkezetbe és soronként döntse el hogy az adott sor átlaga kisebb e mint 37 az eldöntés eredményét igen/nem írjaa soronként a kisebb.txtbe" << endl;
    
    ifstream inFile("random.txt");
    ofstream outFile("kisebb.txt");
    string sor;
    vector<vector<int>> adatok;
    while (getline(inFile, sor)) {
        stringstream ss(sor);
        vector<int> sor;
        int szam;
        while (ss >> szam) {
            sor.push_back(szam);
        }
        adatok.push_back(sor);
    }
    for(vector<int> sor : adatok){
        double osszeg = 0;
        for(int szam : sor){
            osszeg += szam;
        }
        double atlag = osszeg / sor.size();
        atlag < 37 ? outFile << "igen" << endl : outFile << "nem" << endl;
    }

    inFile.close();
    outFile.close();
    return 0;
}
/*
- számos csak
- csak szöveges file dolgozás sor hossz szó hossz szóköz db
- vegyes adatfelvétel pl réka 20 160 60 legidősebb legfiatalabb életkor páros ilyenek

prog tételek:
első oldal kb https://szit.hu/doku.php?id=oktatas:programozas:programozasi_tetelek:mondatszeru_leiras

összegzés megszámlálás eldöntés keresés másolás kiválogatás szétválogatás rendezés előfordulhat 
első rész a fontosabb

lehet oszlopátlag, átló, egyéb finomságok 
struktúra kiszedés berakás ilyenek


*/