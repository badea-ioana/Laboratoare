#include <iostream>
using namespace std;

class Numere{
public:
    int vec[200];
    int nr;
    void citire();
    void afisare();
    void sortare(int parametru);
};

void Numere::citire() {
    cout << "n:=" << endl;
    cin >> this->nr;
    for(int i=0;i<nr;i++)
    {
        cout << "vec["<<i<<"]:=";
        cin >> this->vec[i];
    }
}

void Numere::afisare() {
    cout << "n:=" << this->nr << endl;
    for(int i=0;i<nr;i++)
    {
        cout << "vec["<<i<<"]:=" << vec[i] << endl;
    }
}

void Numere::sortare(int parametru) {
    if(parametru==1)
    {
        for(int i=0;i<nr-1;i++)
        for(int j=i+1;j<nr;j++)
        if(this->vec[i]<this->vec[j])
        {
            int aux=this->vec[i];
            this->vec[i]=this->vec[j];
            this->vec[j]=aux;
        }
    }
    else {
        for(int i=0;i<nr-1;i++)
        for(int j=i+1;j<nr;j++)
        if(this->vec[i]>this->vec[j])
        {
            int aux=this->vec[i];
            this->vec[i]=this->vec[j];
            this->vec[j]=aux;
        }
    }
}

int main() {
    Numere obiect;
    obiect.citire();
    obiect.afisare();
    obiect.sortare(1);
    obiect.afisare();
    obiect.sortare(0);
    obiect.afisare();
    return 0;
}
