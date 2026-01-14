#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int aux;
int *p1,*p2;
int i,n,v[200], min=999,max=-999, imin, imax;

printf("\nn:=");
scanf("%d",&n);

for(i=0; i<n; i++)
{
 printf("\nv[%d]:=",i);
 scanf("%d",&v[i]);

}
for(i=0;i<n;i++)
{
if(min>v[i])
{
 imin=i;
 min=v[i];
 
}

if(max<v[i])
{
  imax=i;
  max=v[i];
 }
}

printf("Minim gasit, v[ %d], cu valoarea %d\n",imin, v[imin]);
printf("Max gasit, v[%d], cu valoarea %d\n",imax, v[imax]);
p1=v+imax;
p2=v+imin;
aux=*p1;
*p1=*p2;
*p2=aux;

for(i=0;i<n;i++)
{
 printf("\nv[%d]:=%d\n",i,v[i]);
 
}
	
  return 0; 
  }
