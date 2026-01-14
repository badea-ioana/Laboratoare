#include <iostream>
using namespace std;

class Numere {
public:
    int *vec;
    int *nr;

    Numere();
    void afisare();
    void stergeDate();
    ~Numere();
};

Numere::Numere() {
    cout << "Initializare obiect!!" << endl;

    nr = new int;
    cout << "n = ";
    cin >> *nr;

    vec = new int[*nr];
    for (int i = 0; i < *nr; i++) {
        cout << "vec[" << i << "] = ";
        cin >> vec[i];
    }
}

void Numere::afisare() {
    cout << "\nAfisare:" << endl;
    cout << "n = " << *nr << endl;

    for (int i = 0; i < *nr; i++) {
        cout << "vec[" << i << "] = " << vec[i] << endl;
    }
}

void Numere::stergeDate() {
    delete nr;
    delete[] vec;

    nr = nullptr;
    vec = nullptr;

    cout << "\ndate sterse!" << endl;
}

Numere::~Numere() {
    if (nr) delete nr;
    if (vec) delete[] vec;
}

int main() {
    Numere obiect;
    obiect.afisare();

    obiect.stergeDate();

    return 0;
}

