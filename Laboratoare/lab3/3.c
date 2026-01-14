#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  int n, i;
  int v[100];
  int sum=0;
  int prod=1;
  
  printf("Nr de elemente:=");
  scanf("%d", &n);
for(i=0; i<n; i++){
  printf("\n v[%d]:=",i);
  scanf("%d", &v[i]);
  }

for(i=0;i<n;i++)
{
if(v[i]%2==0)
{
printf("\nv[%d]=%d",i,v[i]);
sum+=v[i];
 }
 }
 
 for(int j=0;j<n;j++)
 {
 if (v[j]%2!=0)
 {
 printf("\nv[%d]=%d",j,v[j]);
prod*=v[j];
}
}
 
   printf("\nSuma este %d", sum);
   printf("\nProdusul este %d \n", prod);
   return 0;
   }
