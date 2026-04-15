#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    std::vector<int> v;

    for (int i = 0; i < 10; i++){
        v.push_back(i*10);
        cout << v[i] << v.at(i) << v.capacity() << " ";

    }

    cout << v[50] << endl;

    v[0] = 15;
    v.at(9) = 10;
    cout << v[0] << " " << v.at(9) << endl;


    v[12] = 100;

    for (int i:v){
        cout << i << " ";
    }

    v.shrink_to_fit();


    v.clear();

    v = {1,9,5,3,7,8,2,4};
    cout << "sort elott: " << endl;
    for (int i:v){
        cout << i << " ";
    }
    cout << endl << "sort utan: " << endl;
    sort(v.begin(), v.end());
    for (int i:v){
        cout << i << " ";
    }
    cout << endl;

    int max = v[0];
    int maxLind = 0;
    for (int i = 1; i < v.size(); i++){
        if (v[i] > max){
            max = v[i];
            maxLind = i;
        }
    }
    cout << "mennyi 2 ertekkel egyenlo eleme van a kontenerben:" << endl;
    int count = 0;
    for (int i:v){
        if (i == 2){
            count++;
        }
    }
    cout << "Elem mennyiség ami a kritériumnak is megfelel: " << count << endl;

    int atlag = 0;
    for (int i:v){
        atlag += i;
    }
    atlag /= v.size();
    cout << "Atlag: " << atlag << endl;

    vector<int> kisebb;
    vector<int> nagyobb;

    for (int i:v){
        if (i < atlag){
            kisebb.push_back(i);
        } else if (i > atlag){
            nagyobb.push_back(i);
        }
    }
    cout << "Kisebb elemek: ";
    for (int i:kisebb){
        cout << i << " ";
    }
    cout << endl << "Nagyobb elemek: ";
    for (int i:nagyobb){
        cout << i << " ";
    }
    cout << endl;

    return 0;
    
}