#include<stdlib.h>
#include<stdio.h>

int cifraMax(int numar)
{
  int nr=0, cmax=numar%10;
  while(numar)
  {
  if(numar%10>cmax)
   cmax=numar%10;
   numar=(int)numar/10;
   nr++;
  }
  return cmax;
}

int main(void)
{
 int numar;
 printf("\n numarul=");
 scanf("%d",&numar);
 
 printf("\n Numarul %d are cifra maxima: %d \n", numar, cifraMax(numar));

return 0;


}
