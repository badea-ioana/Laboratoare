#include <stdio.h>
int main(void)
{
int nr,i, A, B;
int prim=1;

printf("\n A=");
scanf("%d",&A);

printf("\n B=");
scanf("%d",&B);

for(nr=A; nr<=B; nr++)
{
prim=1;
if(nr<=1)
  prim=0;

for(i=2; i<nr; i++){
  if(nr%i==0){
  prim=0;
  }
}

if(prim){
  printf("Numarul %d este numar prim\n", nr);
}
}
  printf("\n");
  
return 0;
}

