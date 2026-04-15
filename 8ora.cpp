#include <iostream>
#include <fstream>

using namespace std;

int main() {
    /**
     * ofstream
     * ifstream
     * fstream
     */

    /*
        1. létrehozás
        2. összerendelés
        3. megnyitás
    */
    ofstream outFile("output.txt");

    /*  4. Feldolgozás */
    outFile << "Hello, World!" << endl;
    outFile << "Yipyyyy" << endl;
    outFile << "C++" << endl;
    /*  5. Bezárás */
    outFile.close();

    ifstream inFile("output.txt");
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}