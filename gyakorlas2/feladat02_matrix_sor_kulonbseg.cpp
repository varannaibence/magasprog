#include <array>
#include <iostream>
using namespace std;

/*
Ez volt a ZH - 2. feladat

Irjon fuggvenyt amelynek egy 3x3-as ketdimenzios tomb a parametere es
visszaadja a soronkenti maximum es minimum kulonbseget egy 3 meretu tombben.

Pelda egy sorra:
4 9 2
maximum = 9, minimum = 2, kulonbseg = 7
*/

array<int, 3> sorKulonbsegek(int matrix[3][3]) {
    array<int, 3> kulonbsegek{};
    for (int i = 0; i < 3; i++)
    {
        int max = matrix[i][0];
        int min = matrix[i][0];
        for (int j = 1; j < 3; j++)
        {
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
        }
        kulonbsegek[i] = max - min;
    }
    return kulonbsegek;
}

int main() {
    int matrix[3][3];

    cout << "Adj meg 9 egesz szamot egy 3x3-as matrixhoz:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    array<int, 3> eredmeny = sorKulonbsegek(matrix);

    cout << "Soronkénti max-min kulonbsegek: ";
    for (int x : eredmeny) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
