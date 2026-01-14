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
 int fibonacci(int n); 
};


Numere::Numere() {
 cout << "n=";
  nr = new int;
 cin >> *nr;

 vec = new int[*nr];
 factVec = new int[*nr];

 for (int i=0; i<*nr; i++) {
	cout << "vec[" << i << "] = ";
	cin >> vec[i];

 factVec[i] = factorial(vec[i]);
    }
}

Numere::~Numere() {
delete nr;
delete[] vec;
delete[] factVec;
}

int Numere::factorial(int n) {
	if (n <= 1) return 1;

return n*factorial(n-1);
}

int Numere::fibonacci(int n) {
  if (n==0) return 0;
  if (n==1) return 1;
    
 return fibonacci(n-1)+fibonacci(n-2);
}

void Numere::afisare() {

    for (int i = 0; i < *nr; i++)
        cout << "vec[" << i << "] = "<<vec[i]<<endl;
  
}

int main() {
    Numere obiect;
    obiect.afisare();

    int n;
    cin >> n;

    cout << "Fibonacci("<<n<<") = "<<obiect.fibonacci(n)<<endl;

    return 0;
}

