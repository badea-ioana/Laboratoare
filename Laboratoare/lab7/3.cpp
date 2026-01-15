#include <iostream>
using namespace std;

class Numere {
public:
 int vec[200];
 int nr;

 void citire();
 void afisare();
    
 int NrPare();
 int NrImpare();
};

void Numere::citire() {
    cout << "n=";
    cin >> this->nr;
    for (int i= 0; i<nr; i++) {
      cout << "vec[" << i << "]=";
      cin >> this->vec[i];
    }
}

void Numere::afisare() {
  cout << "n=" << this->nr;
 for (int i= 0; i<nr; i++) {
  cout << "vec[" << i << "]=" << vec[i] << endl;
    }
}


int Numere::NrPare() {
    int count = 0;
    for (int i = 0; i < nr; i++) {
        if (vec[i] % 2 == 0)
            count++;
    }
    return count;
}

int Numere::NrImpare() {
    int count = 0;
    for (int i= 0; i<nr; i++) {
        if (vec[i] % 2 != 0)
            count++;
    }
    return count;
}

int main() {
    Numere obiect;
    obiect.citire();
    obiect.afisare();

    cout << "Numarul de elemente pare este: " << obiect.NrPare();
    cout << "Numarul de elemente impare este: " << obiect.NrImpare() ;

    return 0;
}
