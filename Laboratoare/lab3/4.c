#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  int n, i, aux, r;
  int v[100];
  int prog=1;
  
  printf("Nr de elemente:=");
  scanf("%d", &n);
 
  
for(i=0; i<n; i++){
  printf("\n v[%d]:=",i);
  scanf("%d", &v[i]);
  }

for(i=0;i<n-1;i++)
{
for(int j=0; j<n-i-1;j++){
 if (v[j] > v[j+1]){
  aux=v[j];
  v[j]=v[j+1];
  v[j+1]=aux;
 }
 }
 }
 
 printf("\nVectorul sortat:");
for(i=0; i<n; i++){
  printf("%d", v[i]);
}
if(n>=2)
{
r=v[1]-v[0];
}
else
{
r=0;
}

for(i=2;i<n;i++) {
  if((v[i]-v[i-1])!=r) 
{
 prog=0;
 break;
 }
 }

if(prog==1)
 {
 printf("\nNumerele formeaza o PROGRESIE ARITMETICA cu ratia %d.\n", r);
 } 
 else 
{
 printf("\nNumerele NU formeaza o progresie aritmetica.\n");
 }


    return 0;
}
