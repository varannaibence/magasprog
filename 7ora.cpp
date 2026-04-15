#include <iostream>

using namespace std;

int test() {
    return 0;
}

int test(int a) {
    return 0;
}

float test(double a) {
    return 0;
}

int test(int a, double b) {
    return 0;
}

vector<int> operator+ (vector<int> a, vector<int> b) {
    vector<int> c;
    for (int i: b) {
        a.push_back(i);
    }
    return a;
}

vector<int> operator++ (vector<int> a) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return a;
}



struct szemely {
    string nev;
    int kor;
    


    void operator()(string n, int k) {
        nev = n;
        kor = k;
    }
};

ostream& operator<< (ostream& os, szemely sz) {
    os << sz.nev << " " << sz.kor << endl;
    return os;
};




int main() {

    test();
    test(5);
    test(5.0);
    test(5, 5.0);
    vector <int> v = {1, 2, 3};
    v.push_back(4);
    
    //vector <int> operator <<(vector <int> v, int a){
    //    v.push_back(a);
    //    return v;
    //}
    for (int i:v){
        cout << i << " ";
    }
    cout << endl;






    vector<int> va = {1, 2, 3, 4};
    vector<int> vb = {5, 6, 7, 8};


    vector<int> o = va + vb;

    for (int i:o){
        cout << i << " ";
    }
    cout << endl;
    ++o;

    
    szemely sz1;
    sz1.nev = "Joe Mama";
    sz1.kor = 44;

    szemely sz2;
    sz2("Kompót Tibor", 33);


    cout << sz1 << " " << sz2 << endl;
    return 0;

}