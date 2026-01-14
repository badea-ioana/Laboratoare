#include<stdio.h>
int main(void)
{

int a,b,c,d,min,max;

printf("\n a:=");
scanf("%d",&a);

printf("\n b:=");
scanf(" %d",&b);

printf("\n c:=");
scanf(" %d",&c);

printf("\n d:=");
scanf("%d",&d);
	
min=a;
max=a;

   if(b<min)
{
min=b;
}
else 
{
max=b;
}
   if(c<min)
{
min=c;
}
else{
max=c;
}
   if(d<min)
{
min=d;
}
else
{
max=d;
}
printf("Minimul este= %d\n", min);
printf("Maximul este= %d\n", max);
  return 0;
  }

