#include <Persona.hpp>
#include <iostream>
#include <algorithm>
#include <random>  // Necesario para std::shuffle
#include <chrono>

using namespace std;

int main(int argc, char** argv) {
    int n = 10;
    int a[n];
    
    cout << "Array de edades ordenado:" << endl;
    for (int i = 0; i < n; ++i) {
        a[i] = i + 18;  // 18 -> 27
        cout << a[i] << " ";
    }

    cout << endl << endl;
    
    cout << "Array de edades desordenado:" << endl;
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    shuffle(a, a + n, default_random_engine(seed));
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    cout << endl << endl;
    
    for (int i = 0; i < n; ++i) {
        Persona* p = new Persona(a[i]);
        p->mostrar();
    }

    cout << endl;
    return 0;
};
