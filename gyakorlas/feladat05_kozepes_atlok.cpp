#include <iostream>
using namespace std;

/*
5. feladat - kozepes

Adott egy 4x4-es egesz matrix.
Szamold ki:
- a foatlo osszeget,
- a mellekatlo osszeget,
- melyik atlo osszege nagyobb,
- hany pozitiv szam van a ket atlon osszesen.

Ugyelj arra, hogy paratlan meretu matrixnal a kozepsot nem szabadna ketszer
szamolni, de itt 4x4-es matrix van, tehat nincs kozeppont.
*/

int foatloOsszeg(int matrix[4][4]) {
    int osszeg = 0;
    for (int i = 0; i < 4; i++)    {
        osszeg += matrix[i][i];
    }
    return osszeg;
}

int mellekatloOsszeg(int matrix[4][4]) {
    int osszeg = 0;
    for (int i = 0; i < 4; i++)    {
        osszeg += matrix[i][3 - i];
    }
    return osszeg;
}

int main() {
    int matrix[4][4];

    cout << "Adj meg 16 egesz szamot egy 4x4-es matrixhoz:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matrix[i][j];
        }
    }

    int foatlo = foatloOsszeg(matrix);
    int mellekatlo = mellekatloOsszeg(matrix);
    cout << "Foatlo osszege: " << foatlo << endl;
    cout << "Mellekatlo osszege: " << mellekatlo << endl;
    foatlo > mellekatlo ? cout << "A foatlo osszege nagyobb." << endl : cout << "A mellekatlo osszege nagyobb." << endl;
    int pozitivSzamok = 0;
    for (int i = 0; i < 4; i++)    {
        if (matrix[i][i] > 0)        {
            pozitivSzamok++;
        }
        if (matrix[i][3 - i] > 0)        {
            pozitivSzamok++;
        }
    }
    cout << "Pozitiv szamok a ket atlon osszesen: " << pozitivSzamok << endl;
    return 0;
}
