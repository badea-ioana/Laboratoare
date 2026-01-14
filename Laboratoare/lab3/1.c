#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  int n, i, min=99999, max=-99999;
  int v[100];
  
  printf("Nr de elemente:=");
  scanf("%d", &n);
  
  for(i=0; i<n; i++){
  printf("\n v[%d]:=",i);
  scanf("%d", &v[i]);
  
}

for(i=0;i<n;i++)
{
if(v[i]>max)
{ max=v[i];
}
if(v[i]<min){
 min=v[i];
 }
 }
   printf("\nMinimul este %d", min);
   printf("\nMaximul este %d \n", max);
   return 0;
   }
