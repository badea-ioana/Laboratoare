#include <iostream>
using namespace std;

class Numere{
public:
    int vec[200];
    int nr;
    void citire();
    void afisare();
};

void Numere::citire() {
    cout << "n=" << endl;
    cin >> this->nr;
    for(int i=0; i<nr; i++)
    {
        cout << "vec["<<i<<"]=";
        cin >> this->vec[i];
    }
}

void Numere::afisare() {
    cout << "n=" << this->nr << endl;
    for(int i=0; i<nr; i++)
    {
        cout << "vec["<<i<<"]=" << vec[i] << endl;
    }
}

int main() {
    Numere obiect;
    obiect.citire();
    obiect.afisare();
    return 0;
}
