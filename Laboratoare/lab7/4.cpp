#include <iostream>
using namespace std;

class Numere {
public:
    int vec[200];
    int nr;

    void citire();
    void afisare();
    void sortarePointeri();
};

void Numere::citire() {
    cout << "n=";
    cin >> this->nr;
    for (int i = 0; i < nr; i++) {
        cout << "vec[" << i << "]=";
        cin >> this->vec[i];
  }
}

void Numere::afisare() {
    cout << "n=" << this->nr << endl;
    for (int i = 0; i < nr; i++) {
        cout << "vec[" << i << "]=" << vec[i] << endl;
 }
}

void Numere::sortarePointeri() {

    for (int i = 0; i < nr - 1; i++) {
        for (int j = i + 1; j < nr; j++) {

            if (*(this->vec + i) > *(this->vec + j)) {
                int aux = *(this->vec + i);
                *(this->vec + i) = *(this->vec + j);
                *(this->vec + j) = aux;
 }
  }
 }
}

int main() {
    Numere obiect;
    obiect.citire();  
    cout << "\nVectorul Initial: ";
    obiect.afisare();
    obiect.sortarePointeri();
    cout << "\nVectorul Sortat ";
    obiect.afisare();
    return 0;
}
