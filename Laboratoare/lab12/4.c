#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int functie(int *v,int *u,int n)
{
int i,j,aux;
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
{
 printf("%d",i);
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

printf("\nn:= ");
scanf("%d", &n);

v=(int*) malloc((n*n)*sizeof(int));
u =(int*)malloc((n*n)*sizeof(int));
for(i=0;i<n; i++)
 for(j=0;j<n;j++)
 {
printf("\nv[%d][%d]:= ",i,j);
scanf("%d", &nr);
*v=nr;
v=v+1;
}
v=v-1;

for(i=0;i<n;i++)
 for(j=0;j<n;j++)
{
printf("\nu[%d][%d]:= ", i, j);
scanf("%d", &nr);
*u=nr;
u=u+1;
}
u=u-1;

functie(v,u,n);
for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 {
printf("\nv[%d][%d]:=%d",i,j,*v);
v=v-1;
}
for(i=0;i<n;i++)
 for(j=0;j<n;j++)
{
printf("\nu[%d][%d]:=%d",i,j,*u);
u=u-1;
}

    return 0;
}
