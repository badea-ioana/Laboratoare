#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
class Numere {
public:
 int *vec;
 int *nr;

Numere();
~Numere();
 void afisare();
};

Numere::Numere() {
cout << "nr de elemente: ";
 nr = new int;
 cin >> *nr;
    
vec = new int[200];
    
for (int i=0; i<*nr; i++) {
 	cout << "vec[" << i << "]:=";
 	cin >> vec[i];
    }
}

Numere::~Numere() {
 cout << "Apelare destructor!!" << endl;
 delete nr;
 delete[] vec;
}

void Numere::afisare() {
 cout << "n:= " << *nr << endl;
 

for (int i=0; i<*nr; i++) {
	cout << "vec[" << i << "] := " << vec[i] << endl;
    }
}


class NumereInFisier : public Numere {
public:
  void scriefisier() {
  ofstream myfile("fisier.txt");
	if (myfile.is_open()) {
            for (int i=0; i <*nr; i++)
                myfile << vec[i] << endl;
            myfile.close();
        } else {
            cout << "Eroare de deschidere fisier!";
        }
    }
};



class Statistica : public NumereInFisier {
public:
void caluleaza_probabilitati() {
int interval;
        cout << "interval de spatiere: ";
        cin >> interval;

       
       
       
int min=vec[0];
int max=vec[0];  
        for(int i=1; i<*nr; i++) {
        
          if(vec[i]<min) min=vec[i];
          if(vec[i]>max) max=vec[i];
        }
                
        
for (int h=min; h<=max; h+=interval) {
 int end=h+interval;
   int count=0;

            
 for (int i=0;i<*nr; i++) {
                
 if (vec[i]>=h&& vec[i]<end) {
  count++;
    }
 }

            
  float probabilitate = (float)count / (*nr); 

           
  cout << "Interval [" << h << ", " << end << "): " 
   << count << " numere-> Probabilitate: " 
   << fixed << setprecision(2) << probabilitate * 100 << "%" << endl;
        }
    }
};


int main() {
 
    Statistica obiect; 
    obiect.afisare(); 
    obiect.scriefisier(); 
    obiect.caluleaza_probabilitati(); 

    return 0;
}
