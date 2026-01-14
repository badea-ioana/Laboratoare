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

    int a,b,aux;
    int *p1,*p2;

cout<<"\na=";
cin>>a;
cout<<"b=";
cin>>b;

p1=&a;
p2=&b;

aux=*p1;
*p1=*p2;
*p2=aux;

cout<<"Dupa interschimbare:"<<endl;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;




int n2,v2[200],min=999,max=-999;
int imin=0, imax=0;

cout<<"\nn=";
cin>>n2;

for(int i=0;i<n2; i++) 
{
cout << "v["<<i<<"]=";
cin >> v2[i];
}

for(int i=0;i<n2;i++) 
{
  if(min>v2[i]) 
{
min=v2[i];
imin=i;
}
if(max<v2[i])
{
max=v2[i];
imax=i;
}
 }

cout<<"Minim gasit v["<<imin<<"]="<<v2[imin]<< endl;
cout<<"Maxim gasit v["<<imax<<"]="<<v2[imax]<< endl;

p1=v2+imax;
p2=v2+imin;

aux=*p1;
*p1=*p2;
*p2=aux;

cout<<"Vector dupa interschimbare min&max:\n";
for(int i=0;i<n2;i++) {
 cout<<"v["<<i<<"]="<<v2[i]<< endl;

}


int n3,v3[200];

cout<<"\nn=";
cin>>n3;

for(int i=0;i<n3;i++) 
{
cout<<"v["<<i<<"]=";
cin>>v3[i];
}

for(int i=0;i<n3-1; i++) {
for(int j=i+1;j< 3; j++) {
   if(v3[i]>v3[j]) 
   {
p1=v3+i;
p2=v3+j;
aux=*p1;
*p1=*p2;
*p2=aux;
}
}
}

cout<<"Vector sortat:\n";
for(int i=0; i<n3; i++) {
        cout<< "v["<<i<<"]=" <<v3[i]<< endl;
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

