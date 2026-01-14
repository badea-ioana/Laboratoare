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

int n1,n2;
float s1[100],s2[100],s3[200];
float *p,*q,*r;

cout<<"Dimensiune sir1= ";
cin>>n1;
for(int i=0; i<n1; i++) {
cout<<"s1["<<i<<"]=";
cin>>s1[i];
}

cout<<"Dimensiune sir2= ";
cin >> n2;
for (int i=0; i<n2; i++)
{
 cout<< "s2["<<i<<"]= ";
 cin>>s2[i];
}
p=s1;
q=s2;
r=s3;

int i=0, j=0;

while (i<n1 && j<n2) {
if (*p<*q) 
{
 *r=*p;
 p++;
 i++;
 } 
else
 {
*r=*q;
q++;
j++;
 }
r++;
}


while (i<n1)
 {
*r=*p;
p++;
r++;
i++;
 }

while (j<n2) {
*r=*q;
q++;
r++;
j++;
 }

cout<<"\nSir interclasat:\n";
for (int k=0; k<n1+n2; k++) 
{
cout<<"s3["<<k<<"]="<<s3[k]<< endl;
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


    return 0;
}

