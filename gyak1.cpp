#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Gyakorlo feladatok 1 - konnyu szint" << endl;
    cout << endl;
    cout << "1. feladat:" << endl;
    cout << "Kerjen be ket egesz szamot, es irja ki a nagyobbat." << endl;
    int a, b;
    cout << "Adj meg 2 egész számot" << endl;
    cin >> a;
    cin >> b;
    a > b ? cout << "Az első szám nagyobb" : cout << "A második szám nagyobb";
    cout << endl;

    cout << "2. feladat:" << endl;
    cout << "Kerjen be egy egesz szamot, es dontse el, hogy paros vagy paratlan." << endl;
    cout << endl;
    int c;
    cout << "Adj meg egy számot eldöntöm páros vagy páratlan-e" << endl;
    cin >> c;
    c % 2 == 0 ? cout << "Páros" << endl : cout << "Páratlan" << endl; 

    cout << "3. feladat:" << endl;
    cout << "Kerjen be 5 egesz szamot tombbe, majd szamolja ki az osszeguket es atlagukat." << endl;
    cout << endl;
    int tomb[5];
    int osszeg = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Adj meg egy számot" << endl;
        cin >> tomb[i];
        osszeg += tomb[i];
    }
    double atlag = static_cast<double>(osszeg) / 5;
    cout << "Az összeg: " << osszeg << endl;
    cout << "Az átlag: " << atlag << endl;

    cout << "4. feladat:" << endl;
    cout << "Kerjen be egy szot, majd irja ki a karaktereinek szamat." << endl;
    cout << endl;
    string szo;
    cout << "Adj meg egy szót" << endl;
    cin >> szo;
    cout << "A szó karaktereinek száma: " << szo.length() << endl;

    cout << "5. feladat:" << endl;
    cout << "Kerjen be 6 egesz szamot, es irja ki kozuluk a legkisebbet." << endl;
    cout << endl;
    int szamok[6];
    for (int i = 0; i < 6; i++)
    {
        cout << "Adj meg egy számot" << endl;
        cin >> szamok[i];
    }
    int legkisebb = szamok[0];
    for (int i = 0; i < 6; i++)
    {
        if (szamok[i] < legkisebb)
        {
            legkisebb = szamok[i];
        }
    }
    cout << "A legkisebb szám: " << legkisebb << endl;
    
    cout << "6. feladat:" << endl;
    cout << "Kerjen be egy pozitiv egesz szamot n, es irja ki 1-tol n-ig a szamokat." << endl;
    cout << endl;
    int n;
    cout << "Add meg meddig irja ki a szamot";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << i << endl;
    }

    cout << "8. feladat:" << endl;
    cout << "Kerjen be 3 szot, es irja ki a leghosszabbat." << endl;
    cout << endl;
    string szavak[3];
    
    for (int i = 0; i < 3; i++)
    {
        cout << "Szo" << i+1 << "/3:";
        cin >> szavak[i];
    }
    string leghoszabb_szo = szavak[0];
    for (int i = 0; i < 3; i++)
    {
        if (szavak[i].length() > leghoszabb_szo.length())
        {
            leghoszabb_szo = szavak[i];
        }
    }
    cout << "A leghoszabb szo: " << leghoszabb_szo << endl;

    cout << "9. feladat:" << endl;
    cout << "Kerjen be egy 3x3-as egesz tombot, majd szamolja ki a foatlo elemeinek osszeget." << endl;
    cout << endl;
    int tomb3x3[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Adj meg egy számot" << endl;
            cin >> tomb3x3[i][j];
        }
    }
    int foatlo_osszeg = tomb3x3[0][0] + tomb3x3[1][1] + tomb3x3[2][2];
    cout << "A főátló elemeinek összege: " << foatlo_osszeg << endl;


    cout << "10. feladat:" << endl;
    cout << "Kerjen be egy mondatot, es szamolja meg, hany darab maganhangzo van benne." << endl;
    cout << endl;
    string mondat;
    cout << "Adj meg egy mondatot" << endl;
    cin.ignore(); // Ez szükséges, hogy a cin >> mondat; előtt a bemeneti buffer tiszta legyen, különben a getline() nem fog működni megfelelően.
    getline(cin, mondat);
    int maganhangzo_szam = 0;
    for (char c : mondat)
    {        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {            maganhangzo_szam++;
        }
    }
    cout << "A mondatban " << maganhangzo_szam << " darab magánhangzó van." << endl;

    return 0;
}
