#include <iostream>
#include <cmath>
using namespace std;

int* functie(int v[], int n)
{
int i,max=-9999, indice=0;
int* p;

for (i=0;i<n;i++)
 if (v[i]>max)
 {
   max=v[i];
   indice=i;
 }

p=v+indice;
return p;
}

int main()
{
int i,n,v[200];
int* p;

cout<<"\nn:= ";
cin>>n;

for (i=0;i<n;i++)
 {
 cout <<"\nv["<<i<<"]:";
cin>>v[i];
 }

p=functie(v, n);

cout<<"Pointerul este:="<<p<<",iar numarul este:=" <<*p<<endl;

 return 0;
}

