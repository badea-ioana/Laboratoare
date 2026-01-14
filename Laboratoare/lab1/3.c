#include<stdio.h>

int main(void)
{

int x,y;

printf("\n x:=");
scanf("%d",&x);

printf("\n y:=");
scanf(" %d",&y);

if(x>0 && y>0)
   printf("Primul cadran\n");
if(x<0 && y>0)
   printf("Al doilea cadran\n");
if(x<0 && y<0)
   printf("Al treilea cadran\n");
if(x>0 && y<0)
   printf("Al patrulea cadran\n");
  
  return 0;
  }

