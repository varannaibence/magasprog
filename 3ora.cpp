#include <iostream>
#include <algorithm>

using namespace std;

int struktura() {
    struct
    {
        int szulEv;
        string nev;
    } szemely1,szemely2;
    
    szemely1.szulEv=1990;
    szemely1.nev="Bence";

    szemely2 = {1992,"Anna"};

    cout << szemely1.szulEv << " " << szemely1.nev << endl;
    cout << szemely2.szulEv << " " << szemely2.nev << endl;

    szemely2 = szemely1;

    szemely1.nev = "Luca";
    cout << szemely1.szulEv << " " << szemely1.nev << endl;


    struct jarmu
    {
        string marka;
        string tipus;
        short int evjarat;
    };

    jarmu j1 = {"Opel","Astra",2010};
    jarmu j2 = {"Ford","Focus",2015};

    if(j1.evjarat > j2.evjarat){
        cout << j1.marka << " " << j1.tipus << " a fiatalabb." << endl;
    }
    else if(j1.evjarat < j2.evjarat){
        cout << j2.marka << " " << j2.tipus << " a fiatalabb." << endl;
    } else if (j1.evjarat == j2.evjarat){
        cout << "A két jármű egyidős." << endl;
    }


    string st = "narancs";
    string& gyumolcs = st;
    // mindegy hogy string& vagy string & st, a & jel a típusra vonatkozik, nem a változóra
    gyumolcs = "alma";
    cout << st << " " << gyumolcs << endl;


    // ha nincs & jel elött semmi akkor memóriacím lesz
    cout << &st << " " << &gyumolcs << endl;

    cout << &szemely1 << " " << &szemely2 << endl;
    cout << &szemely1.nev << " " << &szemely2.nev << endl;
    cout << &szemely1.szulEv << " " << &szemely2.szulEv << endl;

     return 0;
}

int pointerek(){
    int a = 10;
    int z = 20;
    int* ptr = &a; // típusa pointer, értéke memóriacím
    
    cout << "a: \n" << a << &a << endl;
    cout << "ptr: \n" << ptr << &ptr << endl;

    int *zptr = &z;
    int **zpptr = &zptr;
    int ***zppptr = &zpptr;
    cout << z << " " << *zptr << " " << **zpptr << " " << ***zppptr << endl;
    
    int t[5] = {1,2,3,4,5};
    int* tptr = t; // t[0] címe
    cout << t << " " << &t[0] << " " << tptr << endl;

    cout << t[4] << " " << (&t[0])[4] << " " << tptr[4] << endl;
    
    for (int* ptr = &t[0]; ptr <= &t[4]; ptr++){
        cout << *ptr << " " << ptr << endl;
    }
    tptr = &t[4];
    while (tptr >= t){
        cout << *tptr << " " << tptr << endl;
        tptr--;
    }
    cout << "---------Feladat 1---------" << endl;
    int* start = t;
    int* end = t + 4;
    for (int i = 0; i < 5; i++){
        if (i == 0) {
            cout << *start << " " << start << endl;
        } else if (i == 4) {
            cout << *end << " " << end << endl;
        } else {
            cout << *(end - i) << " " << (end - i) << endl;
        }
    }

    cout << "---------Feladat 2---------" << endl;

    int tomb[5] = {1,3,5,7,9};
    int mtomb[5];

    int * kezdoptr = tomb;
    int * vegptr = &tomb[4];
    int * celptr = mtomb;

    for(int i = 0; i < 5; i++){
        *celptr = *kezdoptr;
        celptr++;
        kezdoptr++;
    }

    cout << "tomb: ";
    for (int i = 0; i < 5; i++){
        cout << tomb[i] << " ";
    }
    cout << endl;
    cout << "mtomb: ";
    for (int i = 0; i < 5; i++){
        cout << mtomb[i] << " ";
    }
    cout << endl;

    return 0;
}
int main() {
    //struktura();
    pointerek();
    return 0;
}