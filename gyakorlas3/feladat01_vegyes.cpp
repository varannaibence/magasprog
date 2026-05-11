#include <iostream>
#include <algorithm>
#include <cmath>
#include <array>

using namespace std;

void fibKozott(int also, int felso) {
    if (also > felso) { int t = also; also = felso; felso = t; }
    int x = 0, y = 1;
    while (x <= felso) {
        if (x >= also) cout << x << " ";
        int kov = x + y; x = y; y = kov;
    }
    cout << endl;
}

void sorMedian(int mat[4][4], float med[4]) {
    for (int i = 0; i < 4; i++) {
        int sor[4];
        
        // Sor másolása
        for (int j = 0; j < 4; j++) {
            sor[j] = mat[i][j];
        }
        
        // Rendezés
        sort(sor, sor + 4);
        
        // Medián = 2. és 3. elem átlaga (indexek: 1, 2)
        med[i] = (sor[1] + sor[2]) / 2.0;
    }
}

int main() {
    // 1. Irj fuggvenyt (fibKozben), amely megkapja also es felso hatarait,
    //    es kiirja az osszes Fibonacci-szamot az [also, felso] intervallumban!
    //    Ha also > felso, csereld fel oket!
    fibKozott(5,30);
    // 2. Irj fuggvenyt (sorMedian), amely egy 4x4-es matrix sorainak medianjat
    //    kiszamitja, es az eredmenyeket egy 1x4-es tombben adja vissza!
    //    (Soronkent rendezd a sor elemeit, median = 2. es 3. elem atlaga.)
    int matrix[4][4] = {
        {1,2,3,4},
        {2,3,4,5},
        {6,7,8,9},
        {10,11,12,13}
    };
    float med[4];
    sorMedian(matrix,med);
    for (int i = 0; i < 4; i++)
    {
        cout << i+1 <<". median:";
        cout << med[i] << endl;
    }
    
    // 3. Olvass be 8 szamot! Irj fuggvenyt (vanFibonacci), amely eldonti,
    //    hogy van-e kozottuk Fibonacci-szam! Ird ki az eredmenyt!

    // 4. Olvass be egy 5x5-os matrixot!
    //    a) Szamitsd ki a mellekatlo (ahol i + j == 4) elemek atlagat!
    //    b) Minden sorhoz ird ki, melyik elemek nagyobbak az adott sor atlaganol!

    // 5. Irj void fuggvenyt (muvelet), amely referenciaval kap egy int-et,
    //    egy char muveletet ('+', '-', '*') es egy extra szamot.
    //    Hajtsa vegre a muveletet az int-en es az extra szamon,
    //    az eredmenyt tarolja vissza az eredeti valtozoba!

    return 0;
}
