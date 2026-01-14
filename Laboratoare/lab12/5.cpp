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

    	nr=new int;
    	cout<<"n= ";
    	cin>>*nr;
	vec=new int[*nr];
for(int i=0;i<*nr;i++) 
{
cout<<"vec["<<i<<"]=";
cin>>vec[i];
}
}

     void Numere::afisare() {
cout << "\nAfisare obiect:" << endl;
cout << "n="<<*nr<<endl;

for(int i=0;i<*nr;i++) 
{
cout<<"vec["<<i<<"]="<<vec[i]<<endl;
}
}

int* functie_max(int v[],int n)
{
int i,max=-9999,indice=0;
int* p;

for(i=0;i<n;i++)
  if(v[i]>max)
{
max=v[i];
indice=i;
}
p=v+indice;
return p;
}
int* functie_min(int v[],int n)
{
int i,min=9999,indice=0;
int* p;
for(i=0;i<n;i++)
if(v[i]<min)
{
min=v[i];
indice=i;
}

p=v+indice;
return p;
}




void functie(int v[3][3], int u[3][3], int n)
{
int i,j,aux;
for(i=0;i<n;i++)
 for (j=0;j<n;j++)
{
aux=v[i][j];
v[i][j]=u[i][j];
u[i][j]=aux;
}
}


int main()
{
    Numere obiect1;
    obiect1.afisare();

int* p1;
int* p2;

p1=functie_max(obiect1.vec, *obiect1.nr);
cout <<"\nPointer max:= "<<p1<< ", numar:= "<<*p1<<endl;

p2=functie_min(obiect1.vec, *obiect1.nr);
cout<<"Pointer min:= "<<p2<< ",numar:="<<*p2<< endl;

int v[3][3],u[3][3],n;
int i,j;
cout<<"\nn:= ";
cin>>n;
if(n<=0||n>3) 
{
cout<<"Invalid n";
return 0;
}
for(i=0;i<n;i++)
 for(j=0;j<n;j++) 
{
cout<<"\nv["<<i<<"]["<<j<<"]: ";
cin>>v[i][j];
}
for(i=0;i<n;i++)
 for(j=0;j<n;j++)
{
cout<<"\nu["<<i<<"]["<<j<<"]: ";
cin>>u[i][j];
}
functie(v,u,n);
cout<<"\nMatrice v:\n";
for (i=0; i<n;i++)
  for (j=0;j<n;j++)
cout<<"v["<<i<<"]["<<j<<"]="<<v[i][j]<< endl;
cout<<"\nMatrice u:\n";
for(i=0;i<n;i++)
 for(j=0;j<n;j++)
cout<<"u["<<i<<"]["<<j<<"]="<<u[i][j]<< endl;
return 0;
}

