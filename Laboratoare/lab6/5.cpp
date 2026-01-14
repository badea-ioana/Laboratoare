#include <iostream>
using namespace std;
int prim(int x)
{if(x<2) return 0;
 for(int i=2; i<=x/2; i++ )
   if(x%i==0)
 return 0;
 return 1;
}
int main()
{
int n,i,aux,terminat,sp=0, sn=0, vec[50];
cout<<"Lungimea vectorului este: ";
cin>> n;
for(int i=0; i<=n-1; i++)
{
 cout<<"Elementul vector["<<i<<"] este: ";
 cin>>vec[i];
}
terminat=0;
while(!terminat)
{
terminat=1;
for(i=0;i<n-2; i++)
{
if(i%2==1)
{
if(vec[i]>vec[i+2])
{
aux=vec[i];
vec[i]=vec[i+2];
vec[i+2]=aux;
terminat=0;
}
}
else 
{
if(vec[i]<vec[i+2])
{
aux=vec[i];
vec[i]=vec[i+2];
vec[i+2]=aux;
terminat=0;
}
}
}
}
for(i=0; i<n;i++)
{
if (vec[i]%2==1)
if(prim(i)!=0)
sp+=vec[i];
else sn+=vec[i];
}
cout<<"Vectorul ordonat este: ";
for(i=0; i<=n-1; i++)
cout<<vec[i]<<" ";
cout<<"\n"<<"Suma numerelor impare de pe pozitii prime este: "<<sp;
cout<<"\n"<<"Suma numerelor impare de pe pozitii ne-prime este: "<<sn<<"\n";


return 0;
}
