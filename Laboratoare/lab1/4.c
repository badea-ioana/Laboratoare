#include<stdio.h>
#include<math.h>
int main(void)
{

int a,b,c;

printf("\n a:=");
scanf("%d",&a);

printf("\n b:=");
scanf(" %d",&b);

printf("\n c:=");
scanf(" %d",&c);
	
if(a+c==2*b)
{
printf("\nnumerele sunt in progresie aritmetica\n");
}
else
{
printf("\nnumerele nu sunt in progresie aritmetica\n");   
}

if(b==sqrt(a*c))
{
printf("\nnumerele sunt in progresie geometrica\n");
}
else
{
printf("\nnumerele nu sunt in progresie geometrica\n");
}
  return 0;
  }

