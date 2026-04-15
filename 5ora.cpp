#include <iostream>

using namespace std;

void heap() {
    //heap memória
    // pointer változó név = new típus
    // c++ new és delete

    int* y = new int;
    int * tp = new int[5];

    int * p2 = new(nothrow) int;
    if (!p2){
        cout << "Nem sikerült memóriát foglalni." << endl;
    } else {
        *p2 = 10;
        cout << *p2 << endl;
    }
    float * f = new float(11.12);
    * y = 5;
    for (int i = 0; i < 5; i++){
        tp[i] = i*2-1;
        cout << tp[i] << " ";
    }
    cout << endl;

    delete y;
    delete[] tp;
    delete p2;
    delete f;

    int x = 2, z = 3;
    cout << "x: " << x << " z: " << z << endl;
}

void print(int a, int b){
    cout << "a: " << a << " b: " << b << endl;
}

void csere(int a, int b){
    cout << "Csere előtt: " << endl;
    print(a, b);
    int temp = a;
    a = b;
    b = temp;
    cout << "Csere után: " << endl;
    print(a, b);

}

void csere2(int * a, int * b){
    cout << "Csere előtt: " << endl;
    print(*a, *b);
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "Csere után: " << endl;
    print(*a, *b);
}

void szoroz(int& a, int& b){
    a = a * b++;
}

void tombkiir(int t[], int meret){
    for (int i = 0; i < meret; i++){
        cout << t[i]++ << " ";
    }
    cout << endl;
}


void minimum(int *t, int meret){
    int min = t[0];
    for (int i = 1; i < meret; i++){
        if (t[i] < min){
            min = t[i];
        }
    }
    cout << "Minimum: " << min << endl;
}



int F(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * F(n - 1);
    }
}


int Fib(int N){
    return (N <= 1) ? N : Fib(N - 1) + Fib(N - 2);
}

int main() {
    //heap();
    //print(5, 10);
    //int x = 5, y = 10;
    //csere2(&x, &y);
    //szoroz(x, y);

    //int t[5] = {1,2,3,4,5};
    //tombkiir(t, 5);
    //tombkiir(t, 5);

    //minimum(t, 5);
    //cout << F(0) << endl;

    cout << Fib(5) << endl;
    return 0;
}