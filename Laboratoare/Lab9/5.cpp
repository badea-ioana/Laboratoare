#include <iostream>
using namespace std;

class Numere {
public:
 int *vec;
 int *nr;
 int *factVec; 

	Numere();
 	~Numere();    
void afisare();
int factorial(int n);
};

int Numere::factorial(int n) {
if (n<=1) return 1;
 
 return n*factorial(n-1);
}

Numere::Numere() {
  cout<<"n=";
  nr = new int;
  cin>>*nr;

  vec=new int[*nr];
  factVec = new int[*nr];

  for (int i=0; i<*nr; i++) {
        cin >> vec[i];
        factVec[i] = factorial(vec[i]);
  }
}

Numere::~Numere() {
  cout << "Destructor apelat!\n";
  delete nr;
  delete[] vec;
  delete[] factVec;
}

void Numere::afisare() {
	for (int i = 0; i < *nr; i++)
        cout << vec[i] << " (" << factVec[i] << ")  ";
}

int main() {
	Numere obj;
 	obj.afisare();

return 0;
}

