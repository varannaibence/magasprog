#include <iostream>
#include <fstream>
#include <list>

using namespace std;

struct Allat {
    string nev;
    int kor;
    int suly;
};




static void outAndIn() {
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

    int n;
    cout << "Hány állatot szeretnél megadni?" << endl;
    cin >> n;

    Allat a;
    vector<Allat> allatLista;
    for(int i = 0; i < n; i++){
        cout << "Add meg az állat nevét, korát és súlyát!" << endl;
        cin >> a.nev >> a.kor >> a.suly;
        allatLista.push_back(a);
    }

    for(Allat a : allatLista){
        cout << a.nev << " " << a.kor << " " << a.suly << endl;
    }

    ofstream allatFile("allatok.txt");
    for(Allat a : allatLista){
        allatFile << a.nev << " " << a.kor << " " << a.suly << endl;
    }
    allatFile.close();


    //ez egy legit feladat példa
    ifstream allatokInFile("allatok.txt");
    vector<Allat> allatListaInFile;
    Allat olvas;
    float sulyAtlag = 0.0f;
    while (allatokInFile >> olvas.nev >> olvas.kor >> olvas.suly) {
        allatListaInFile.push_back(olvas);
        sulyAtlag += olvas.suly;
    }
  
    sulyAtlag /= allatListaInFile.size();
    cout << "Az állatok átlag súlya: " << sulyAtlag << endl;
    allatokInFile.close();

    //megoldas vege
}

int main () {
    
    list<int> l;
    for(int i = 0; i < 10; i++){
        l.push_front(i*2);
        l.push_back(i);
    }

    cout << "Elso elem: " << l.front() << endl;
    cout << "Utso elem: " << l.back() << endl;

    for (auto it = l.begin(); it != l.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}