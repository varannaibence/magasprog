#include <array>
#include <iostream>
using namespace std;

/*
2. feladat - uj gyakorló ZH

Irj fuggvenyt, amelynek egy 4x4-es matrix a parametere.
A fuggveny adja vissza egy 4 meretu tombben az oszloponkenti
maximum-minimum kulonbseget.

Pelda egy oszlopra:
3, 10, 4, 8
maximum = 10, minimum = 3, kulonbseg = 7
*/

array<int, 4> oszlopTerjedelem(int matrix[4][4]) {
    array<int, 4> eredmeny{};
    for (int i = 0; i < 4; i++)
    {
        int oszlopMax = matrix[0][i];
        int oszlopMin = matrix[0][i];

        for (int j = 0; j < 4; j++)
        {
            if (matrix[j][i] > oszlopMax)
            {
                oszlopMax = matrix[j][i];
            }
            if (matrix[j][i] < oszlopMin)
            {
                oszlopMin = matrix[j][i];
            }
        }
        eredmeny[i] = oszlopMax - oszlopMin;
    }
    
    return eredmeny;
}

int main() {
    int matrix[4][4];

    cout << "Adj meg 16 egesz szamot egy 4x4-es matrixhoz:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matrix[i][j];
        }
    }

    array<int, 4> eredmeny = oszlopTerjedelem(matrix);

    cout << "Oszloponkenti kulonbsegek: ";
    for (int x : eredmeny) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
