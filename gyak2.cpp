#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

struct Tanulo {
    string nev;
    int eletkor;
    double atlag;
};

int lhokszk(int a, int b){
    int legnagyobb = a > b ? a : b;
    for (int i = legnagyobb; i > 0; i--)
    {
        if (i % 3 == 0)
        {
            return i;
        }
    }

    return 0;
}


int main() {
    cout << "Gyakorlo feladatok 2 - kozepes szint" << endl;
    cout << endl;

    cout << "1. feladat:" << endl;
    cout << "Irjon fuggvenyt, amely ket egesz szam kozott megkeresi a legnagyobb 3-mal oszthato szamot." << endl;
    cout << endl;
    cout << "A legnagyobb 3-mal oszthato szam: " << lhokszk(5,12) << endl;


    cout << "2. feladat:" << endl;
    cout << "Irjon fuggvenyt, amely egy 5 elemu tombbol visszaadja a pozitiv szamok darabszamat." << endl;
    cout << endl;
    int pozitiv_szamok_db = 0;
    int tomb[5] = {1, -2, 3, -4, 5};

    for (int i = 0; i < 5; i++)
    {
        if (tomb[i] > 0)
        {
            pozitiv_szamok_db++;
        }
    }
    cout << "A pozitiv szamok darabszama: " << pozitiv_szamok_db << endl;
    
    cout << "3. feladat:" << endl;
    cout << "Kerjen be egy 4x4-es egesz tombot, es irja ki a soronkenti maximumokat." << endl;
    cout << endl;
    int tomb4x4[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)        {
            cout << "Adj meg egy számot" << endl;
            cin >> tomb4x4[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        int sormax = tomb4x4[i][0];
        for (int j = 0; j < 4; j++)
        {
            if (sormax < tomb4x4[i][j])
            {
                sormax = tomb4x4[i][j];
            }            
        }
        cout << "Az " << i+1 << " sor max eleme: " << sormax;
        
    }
    cout << "4. feladat:" << endl;
    cout << "Irjon void fuggvenyt, amely egy karakter referencia, egy string es egy index alapjan bemasolja az adott indexu karaktert a referenciaba." << endl;
    cout << endl;

    cout << "5. feladat:" << endl;
    cout << "Kerjen be n darab szot, es irja ki, hany olyan szo van, amelyik legalabb 5 karakter hosszu." << endl;
    cout << endl;
    int n;
    cout << "Add meg hany szot szeretnel megadni" << endl;
    cin >> n;
    string szavak[n];
    int hosszabb_szavak_db = 0;
    for (int i = 0; i < n; i++)
    {
        szavak[i].length() >= 5 ? hosszabb_szavak_db++ : 0;
    }

    cout << "A 5 karakter hosszabb szavak darabszama: " << hosszabb_szavak_db << endl;
    cout << "6. feladat:" << endl;
    cout << "Hasznalja a Tanulo strukturat. Kerjen be 4 tanulo nevet, eletkorat es atlagat, majd irja ki a legjobb atlagu tanulo adatait." << endl;
    cout << endl;
    cout << "Adj meg 4 tanulo nevet zsaaaaaaa" << endl;
    Tanulo tanulok[4];
    for (int i = 0; i < 4; i++)
    {
        cout << "Tanulo " << i+1 << "/4" << endl;
        cout << "Nev: " << endl;
        cin >> tanulok[i].nev;
        cout << "Eletkor: " << endl;
        cin >> tanulok[i].eletkor;
        cout << "Atlag: " << endl;
        cin >> tanulok[i].atlag;
    }
    Tanulo legjobb_tanulo = tanulok[0];
    for (int i = 0; i < 4; i++)    {
        if (tanulok[i].atlag > legjobb_tanulo.atlag)
        {
            legjobb_tanulo = tanulok[i];
        }
    }
    cout << "A legjobb atlagu tanulo adatai: " << endl;
    cout << "Nev: " << legjobb_tanulo.nev << endl;
    cout << "Eletkor: " << legjobb_tanulo.eletkor << endl;
    cout << "Atlag: " << legjobb_tanulo.atlag << endl;

    cout << "7. feladat:" << endl;
    cout << "Olvassa be a szamok.txt fajlt soronkent, es minden sorra dontse el, hogy az osszeg nagyobb-e 100-nal. Az eredmenyt irja ki egy uj fajlba igen vagy nem formaban." << endl;
    cout << endl;
    ifstream inFile("szamok.txt");
    ofstream outFile("eredmenyek.txt");
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
        int osszeg = 0;
        for(int szam : sor){
            osszeg += szam;
        }
        osszeg > 100 ? outFile << "igen" << endl : outFile << "nem" << endl;
    }
    inFile.close();
    outFile.close();
    

    cout << "8. feladat:" << endl;
    cout << "Kerjen be egy szoveget, es szamolja meg, hany szokoz van benne." << endl;
    cout << endl;
    string szoveg;
    cout << "Adj meg egy szoveget" << endl;
    cin.ignore();
    getline(cin, szoveg);
    int szokoz_db = 0;
    for (char c : szoveg)    {
        if (c == ' ')        {
            szokoz_db++;
        }
    }
    cout << "A szovegben " << szokoz_db << " szokoz van." << endl;

    cout << "9. feladat:" << endl;
    cout << "Kerjen be 8 egesz szamot tombbe, majd valogassa kulon a paros es paratlan elemeket ket masik tombbe vagy vektorba." << endl;
    cout << endl;

    cout << "10. feladat:" << endl;
    cout << "Kerjen be egy 5x5-os tombot, majd irja ki a mellekatlo elemeit es azok osszeget." << endl;

    return 0;
}
