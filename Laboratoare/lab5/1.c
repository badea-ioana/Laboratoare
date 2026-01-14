#include<stdlib.h>
#include<stdio.h>

float functie(float x, float a, float b, float c)
{
  return(a*x*x+b*x+c);
}

int main()
{
 int i,n;
 float v[200],a,b,c;
 printf("\n n=");
 scanf("%d",&n);
 
 printf("\n a=");
 scanf("%f",&a);
 
 printf("\n b=");
 scanf("%f",&b);
 
 printf("\n c=");
 scanf("%f",&c);
 
 for(i=0; i<n; i++)
 {
 printf("\n v[%d]=",i);
 scanf("%f",&v[i]);
 }
 for(i=0; i<n; i++)
 {
 printf("\n f[vector[%d]]=%f",i,functie(v[i],a,b,c));
 }
return 0;



}
