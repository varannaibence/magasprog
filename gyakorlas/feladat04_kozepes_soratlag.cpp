#include <array>
#include <iostream>
using namespace std;

/*
4. feladat - kozepes

Adott egy 5x5-os egesz matrix.
Irj fuggvenyt, amely visszaadja egy array<double, 5> tombben az oszloponkenti
atlagokat.

A main fuggvenyben:
- kerd be a matrix elemeit,
- irasd ki az oszlopatlagokat,
- irasd ki annak az oszlopnak az indexet, ahol a legnagyobb az atlag.
*/

array<double, 5> oszlopAtlagok(int matrix[5][5]) {
    array<double, 5> atlagok{};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            atlagok[i] += matrix[j][i];
        }
        atlagok[i] /= 5;
    }
    
    return atlagok;
}

int main() {
    int matrix[5][5];

    cout << "Adj meg 25 egesz szamot egy 5x5-os matrixhoz:" << endl;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }  
    array<double, 5> atlagok = oszlopAtlagok(matrix);
    cout << "Oszlopatlagok: ";
    for (double atlag : atlagok) {
        cout << atlag << " ";
    }
    cout << endl;
    int legnagyobbIndex = 0;
    for (int i = 1; i < 5; i++)
    {
        if (atlagok[i] > atlagok[legnagyobbIndex])
        {            
            legnagyobbIndex = i;
        }
    }
    cout << "A legnagyobb atlag indexe: " << legnagyobbIndex << endl;
    return 0;
}
