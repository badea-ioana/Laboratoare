#include<stdio.h>
int main(void)
{

int a,b;

printf("\n a:=");
scanf("%d",&a);

printf("\n b:=");
scanf(" %d",&b);
	
if(b !=0)
{
if((a%b)==0)
{
printf("\nnumerele sunt divizibile\n");
}
else
{
printf("\nnumerele nu sunt divizibile\n");   
}
}
else {
printf("\nimpartirea la 0 nu este posibila\n");
}
  return 0;
}

