#include <iostream>
using namespace std;

void functie(int v[3][3], int u[3][3], int n)
{
int i, j, aux;
 for (i = 0; i < n; i++)
   for (j = 0; j < n; j++)
 {
aux = v[i][j];
v[i][j] = u[i][j];
u[i][j] = aux;
}
}

int main()
{
int i, j, n;
int v[3][3], u[3][3];

cout << "\nn:= ";
cin >> n;

if (n<=0||n>3)
    {
cout << "Invalid n";
 return 0;
    }


 for (i = 0; i < n; i++)
  for (j = 0; j < n; j++)
{
 cout << "\nv[" << i << "][" << j << "]: ";
 cin >> v[i][j];
 }

 
 for (i = 0; i < n; i++)
  for (j = 0; j < n; j++)
 {
cout << "\nu[" << i << "][" << j << "]: ";
cin >> u[i][j];
  }

functie(v, u, n);
cout << "\nMatrice v:\n";
 for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
cout << "v[" << i << "][" << j << "] = " << v[i][j] << endl;
cout << "\nMatrice u:\n";
  for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
cout << "u[" << i << "][" << j << "] = " << u[i][j] << endl;

    return 0;
}
