#include <iostream>
using namespace std;

class Numere {
public:
    int *vec;
    int *nr;

    Numere();
    void afisare();
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
    cout << "\nAfisare obiect:" << endl;
    cout << "n = " << *nr << endl;

    for (int i = 0; i < *nr; i++) {
        cout << "vec[" << i << "] = " << vec[i] << endl;
    }
}

int main() {
    Numere obiect1;
    obiect1.afisare();

    cout << "\n Al doilea obiect \n";
    Numere obiect2;
    obiect2.afisare();

    return 0;
}

