#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct Termek {
    string nev;
    int darab;
    int ar;
};

int main() {
    cout << "Gyakorlo feladatok 3 - nehezebb szint" << endl;
    cout << endl;

    cout << "1. feladat:" << endl;
    cout << "Irjon fuggvenyt, amely ket egesz szam kozott visszaadja a legnagyobb primszamot. Ha nincs ilyen, adjon vissza -1-et." << endl;
    cout << endl;

    cout << "2. feladat:" << endl;
    cout << "Irjon fuggvenyt, amely egy 6x6-os tomb oszlopatlagait adja vissza egy egydimenzios tombben vagy vectorban." << endl;
    cout << endl;

    cout << "3. feladat:" << endl;
    cout << "Kerjen be egy n meretu szoveglistat, es rendezze novekvo sorrendbe a szavakat hosszuk alapjan." << endl;
    cout << endl;

    cout << "4. feladat:" << endl;
    cout << "Keszitsen strukturat Termek nevvel, amely tarolja a termek nevet, darabszamat es egysegarat. Tolts on fel egy 5 elemu tombot, majd irja ki, melyik termek teljes erteke a legnagyobb." << endl;
    cout << endl;

    cout << "5. feladat:" << endl;
    cout << "Olvassa be a rendelesek.txt fajlt, ahol minden sorban egy nev es utana tobb egesz szam szerepel. Soronkent szamolja ki az atlagot, es irja ki a sor elejen allo nevet annak az uj fajlnak a soraba, ahol az atlag legalabb 50." << endl;
    cout << endl;

    cout << "6. feladat:" << endl;
    cout << "Kerjen be egy 5x5-os tombot, es dontse el, hogy szimmetrikus-e a foatlo ra." << endl;
    cout << endl;

    cout << "7. feladat:" << endl;
    cout << "Irjon fuggvenyt, amely egy stringben megszamolja, hany kulonbozo karakter szerepel benne." << endl;
    cout << endl;

    cout << "8. feladat:" << endl;
    cout << "Olvassa be a szoveg.txt fajlt, es allapitsa meg, melyik sorban van a legtobb szo. Irja ki a sorszamot es a szavak darabszamat." << endl;
    cout << endl;

    cout << "9. feladat:" << endl;
    cout << "Kerjen be ket azonos meretu egesz tombot, es hozzon letre egy harmadikat, amely pozicionkent a nagyobb elemet tartalmazza." << endl;
    cout << endl;

    cout << "10. feladat:" << endl;
    cout << "Olvassa be egy fajl sorait egy tetszoleges adatszerkezetbe, majd valassza szet a sorokat ket fajlba aszerint, hogy a sorban levo szamok osszege paros vagy paratlan." << endl;

    return 0;
}
