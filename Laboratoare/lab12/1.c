#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int* functie(int v[], int n)
{
int i,max=-9999,indice;
int *p;
for(i=0;i<n;i++)
  if(v[i]>max)
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
int *p;
printf("\nn:=");
scanf("%d",&n);
for(i=0;i<n;i++)
{
  printf("\nv[%d]:",i);
  scanf("%d",&v[i]);
}
p=functie(v,n);
printf("Pointerul este:=%p, iar numarul este:=%d\n",p,*p);

return 0;
}


