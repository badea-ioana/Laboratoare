#include <iostream>
using namespace std;

int main()
{
int n,i,aux,terminat,vec[50];
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
cout<<"Vectorul ordonat este: ";
for(i=0; i<=n-1; i++)
cout<<vec[i]<<" ";
return 0;
}
