#include <iostream>
#include <cstdlib> // pt malloc
#include <cmath>
using namespace std;
int functie(int *v, int *u, int n)
{
int i,j,aux;
for(i=0;i<n;i++)
 for(j=0;j<n;j++)
{
cout<<i;
aux=*v;
*v=*u;
*u=aux;
v=v-1;
u=u-1;
}
return 1;
}

int main()
{
int i,j,nr,*v,*u,n;
cout<<"\nn:= ";
cin>>n;
v=(int*) malloc((n * n) * sizeof(int));
u=(int*) malloc((n * n) * sizeof(int));
for(i=0;i<n;i++)
 for(j=0;j<n;j++)
{
cout<<"\nv["<<i<<"]["<<j<<"]:= ";
cin>>nr;
*v=nr;
v=v+1;
}
v=v-1;
for(i=0;i<n;i++)
 for(j=0;j<n;j++)
{
cout<<"\nu["<<i<<"]["<<j<<"]:= ";
cin >> nr;
*u=nr;
u=u+1;
}
u=u-1;
functie(v,u,n);
for(i=0;i<n;i++)
 for(j=0;j<n;j++)
{
cout<<"\nv["<<i<<"]["<<j<<"]:="<<*v;
v=v-1;
}
for(i=0;i<n;i++)
 for(j=0;j<n;j++)
{
cout<<"\nu["<<i<<"]["<<j<<"]:="<<*u;
u=u-1;
}

    return 0;
}
