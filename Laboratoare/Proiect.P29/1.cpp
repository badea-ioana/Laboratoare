#include <iostream>
using namespace std;

int Prim(int x){

 if(x<2) 
return 0;

 for(int i=2;i*i<=x;i++) 
{
 if(x%i==0) 
return 0;
}
return 1;
}

int main() 
{
int n;
cout<<"Introdu orice număr par n situat între 2 și 200: ";
cin>>n;

 if(n<=2||n%2!=0||n>200)
{
cout<< "NU. Introdu orice număr par n situat între 2 și 200: "<<endl;
} 
 else 
{
bool ala=false;

         
 for(int p=2; p<=n/2; p++) 
{

int q=n-p;

 if(Prim(p) && Prim(q)) 
{
cout<<"Rezultat:"<<n<<"="<<p<<"+"<<q<<endl;
ala=true;

break; 
}
}

if(!ala) 
{
cout<< "Nu s-a gasit nicio pereche)."<<endl;
}
}

return 0;
}
