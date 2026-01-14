#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int aux;
int *p1,*p2;
int i,n,v[200],j;

printf("\nn:=");
scanf("%d",&n);

for(i=0; i<n; i++)
{
 printf("\nv[%d]:=",i);
 scanf("%d",&v[i]);

}
for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)

if(v[i]>v[j])
{
p1=v+i;
p2=v+j;
aux=*p1;
*p1=*p2;
*p2=aux;
}

for(i=0;i<n;i++)
{

 printf("\nv[%d]:=%d\n",i,v[i]);
 
}
	
  return 0; 
  }
