#include <iostream>
using namespace std;

/*
2. feladat - konnyu

Adott egy 10 elemu egesz tomb.
Irj fuggvenyt, amely megkeresi es visszaadja a tomb legkisebb paros elemet.

Ha nincs paros szam a tombben, akkor a fuggveny adjon vissza -1-et.

Pelda:
{7, 3, 10, 4, 9, 2, 11, 5, 8, 13}
Eredmeny: 2
*/

int legkisebbParos(int t[10]) {
    
    int legkisebb = -1;


    for( int i=0; i<10; i++)
    {
        if(t[i] % 2 == 0)
        {
            if(legkisebb == -1 || t[i] < legkisebb)
            {
                legkisebb = t[i];
            }
        }
    }
    
    return legkisebb;
}

int main() {
    int t[10];

    cout << "Adj meg 10 egesz szamot:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> t[i];
    }

    cout << "Legkisebb paros: " << legkisebbParos(t) << endl;
    return 0;
}
