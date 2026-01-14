#include<stdio>
#include<stdlib.h>
#include<math.h>
int main()
{
int a,b,aux;
int *p1,*p2;
printf("\na:=");
scanf("%d",&a);
printf("\nb:=");
scanf("%d",&b);

p1=&a;
p2=&b;

aux=*p1;
*p1=*p2l
*p2=aux;
printf("\na:=%d",a);
printf("\nb:=%d",b); 	
  return 0; 
  }
