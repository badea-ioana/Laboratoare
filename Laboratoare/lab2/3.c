#include <stdio.h>
int main(void)
{
int N,nr;
int prim=1;
int sum=0;

printf("N=");
scanf("%d", &N);

for(int i=1; i<=N; i++)
{
scanf("%d", &nr);
prim=1;
if(nr<=1)
  prim=0;
for(int j=2; j<nr; j++){
  if(nr%j==0){
  prim=0;
  }
}

if(prim){
  sum+=nr;
  
}
}
  printf("suma este:%d \n", sum);
return 0;
}

