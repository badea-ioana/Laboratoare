#include<stdlib.h>
#include<stdio.h>

int CMMDC(int a, int b)
{
  int nr=0;
  while(a!=b)
  {
  if(a>b)
   a=a-b;
  else
   b=b-a;
  }
  return a;
  }


int CMMMC(int a, int b)
{
 return(a*b)/CMMDC(a,b);
}

int main(void)
{
 int a,b;
 printf("\n a=");
 scanf("%d",&a);
 
 printf("\n b=");
 scanf("%d",&b);
 
 printf("\n CMMMC pentru numerele %d si %d este %d \n", a,b, CMMMC(a,b));

return 0;


}
