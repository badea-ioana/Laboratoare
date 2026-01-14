#include <iostream>
using namespace std;
void sortareselectiva(int vv[],int N)
{
for(int i=0; i<N-1; i++)
{
  for(int j=0; j<N; j++)
  {
  if(vv[i]>vv[j])
  {
int aux=vv[i];
vv[i]=vv[j];
vv[j]=aux;
}
}
}
}
void afisare(int vv[], int N)
{
for(int i=0; i<N; i++)
 cout<<vv[i]<<" ";
 cout<<"\n";
}
int main()
{
int vec[100];
int N;
cout<<"Lungimea vectorului este: ";
cin>> N;
for(int i=0; i<N; i++)
{
 cout<<"Elementul vector["<<i<<"] este: ";
 cin>>vec[i];
}
sortareselectiva(vec,N);
afisare(vec,N);
return 0;
}
