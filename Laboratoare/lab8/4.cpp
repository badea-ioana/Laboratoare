#include <iostream>
using namespace std;

class Numere {
public:
    int *nr;
    int *vec;

    int *m;      
    int *sir2;   

    Numere();
    void afisare();
    ~Numere();
};

Numere::Numere() {
    cout << "Initializare obiect!!" << endl;

 
    nr = new int;
    cout << "Numar elemente vector 1: ";
    cin >> *nr;

    vec = new int[*nr];
    for (int i = 0; i < *nr; i++) {
        cout << "vec[" << i << "] = ";
        cin >> vec[i];
    }

   
    m = new int;
    cout << "Numar elemente vector 2: ";
    cin >> *m;

    sir2 = new int[*m];
    for (int i = 0; i < *m; i++) {
        cout << "sir2[" << i << "] = ";
        cin >> sir2[i];
    }
}

void Numere::afisare() {
    cout << "\n Afisare vector 1 \n";
    cout << "n = " << *nr << endl;
    for (int i = 0; i < *nr; i++) {
        cout << "vec[" << i << "] = " << vec[i] << endl;
    }

    cout << "\n Afisare vector 2 \n";
    cout << "m = " << *m << endl;
    for (int i = 0; i < *m; i++) {
        cout << "sir2[" << i << "] = " << sir2[i] << endl;
    }
}

Numere::~Numere() {
    delete nr;
    delete[] vec;

    delete m;
    delete[] sir2;
}

int main() {
    Numere obiect;
    obiect.afisare();
    return 0;
}

