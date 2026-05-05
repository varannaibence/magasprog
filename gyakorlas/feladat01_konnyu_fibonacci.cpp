#include <iostream>
using namespace std;

/*
1. feladat - konnyu

Irj egy fuggvenyt, amely ket egesz szamot kap parameterul: also es felso.
A fuggveny adja vissza, hany darab Fibonacci-szam van az [also, felso]
zart intervallumban.

Pelda:
also = 5, felso = 30
Fibonacci-szamok: 5, 8, 13, 21
Eredmeny: 4

Figyelj arra, hogy ha also nagyobb, mint felso, akkor csereld fel oket.
*/

int fibonacciDarab(int also, int felso) {
    if (also > felso)
    {
        int tmp = also;
        also = felso;
        felso = tmp;
    }
    int darab = 0;
    int x = 0, y = 1;
    while(x <= felso){
        if(x >= also){
            darab++;
        }
        int kov = x + y;
        x = y;
        y = kov;
    }
    return darab;
}

int main() {
    int also, felso;
    cout << "Also hatar: ";
    cin >> also;
    cout << "Felso hatar: ";
    cin >> felso;

    cout << "Darab: " << fibonacciDarab(also, felso) << endl;
    return 0;
}
