#include <iostream>
using namespace std;

class Numere {
public:
    int vec[200];
    int nr;
    void citire();
    void afisare();
    void sortareLabPrecedent();
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

void Numere::sortareLabPrecedent() {
    int terminat = 0;
    
 while (!terminat) {
 terminat = 1;
for (int i = 0; i < nr - 2; i++) {  
if (i % 2 == 1) {
if (vec[i] > vec[i + 2]) {
 int aux = vec[i];
vec[i] = vec[i + 2];
vec[i + 2] = aux;
terminat = 0;
  }
}
 else {
  if (vec[i] < vec[i + 2]) {
  int aux = vec[i];
  vec[i] = vec[i + 2];
  vec[i + 2] = aux;
 terminat = 0;
 }
   }
 }
 }
}

int main() {
    Numere obiect;
    obiect.citire();
    
    cout << "\nVectorul Initial: ";
    obiect.afisare();
    obiect.sortareLabPrecedent();
    cout << "\nVectorul Sortat " ;
    obiect.afisare();

    return 0;
}
