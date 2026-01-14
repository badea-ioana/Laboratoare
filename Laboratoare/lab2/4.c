#include <stdio.h>
int main(void)
{
int N;
int sum=0;
int prod=1;

printf("N=");
scanf("%d", &N);

for(int i=1; i<=N; i++)
{
if(N%i==0)
{
  sum+=i;
  prod*=i;
  
}
}
  printf("suma este:%d \n", sum);
  printf("produsul este:%d \n", prod);
return 0;
}

