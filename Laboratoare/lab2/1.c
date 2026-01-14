#include <stdio.h>
int main(void)
{
int nr,i;
int prim=1;

printf("\n Nr:=");
scanf("%d",&nr);

for(i=2; i<nr; i++){
  if(nr%i==0){
  printf("Divizorul este:=%d\n",i);
  
  prim=0;
  }
}

if(nr>1 && prim){
  printf("Numarul %d este numar prim", nr);
}
else{
  printf("Numarul %d nu este numar prim", nr);
}
  printf("\n");
  
return 0;
}

