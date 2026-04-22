#include <iostream>
#include <set>
#include <vector>
#include <list>
#include <map>
#include <fstream>

using namespace std;

static void main2() {
    set<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(8);
    s.insert(5); // Nem lesz duplikált elem
    s.insert(1);
    s.insert(7);
    s.insert(2);
    s.insert(4);
    s.insert(6);
    s.insert(9);


    cout << "A halmaz elemei: ";
    for (int elem : s) {
        cout << elem << " " << &elem << endl;
    }



    vector<int> v {1,6,3,1,63,9,1234,14,26,8,156438,9,346,84,57,356,357357,48,4,6,456,73,7,357,3,56,35,7,457,45,7,74};

    set<int> sv(v.begin(), v.end());

    v.clear();

    v.assign(sv.begin(), sv.end());

    cout << "A vektor elemei: ";
    for (int elem : v) {
        cout << elem << " " << &elem << endl;
    }

    map<string, string> m;

    m.insert({"alma", "apple"});
    m.insert({"körte", "pear"});
    m["Zoli"] = "Zoltán";
    m["Peti"] = "Péter";

    cout << "A map elemei: " << endl;
    for (const auto& pair : m) {
        cout << pair.first << " -> " << pair.second << endl;
    }
}

int main() {
    ifstream inFile("gyumik.txt");
    map<string, int> gyumolcsDb;
    string gyumolcs;

    while (inFile >> gyumolcs) {
        gyumolcsDb[gyumolcs]++;
    }

    cout << "Gyumolcs darabszamok:" << endl;
    for (const auto& gyum : gyumolcsDb) {
        cout << gyum.first << " >> " << gyum.second << "db" << endl;
    }
    inFile.close();

    return 0;
}
