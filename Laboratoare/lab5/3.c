#include<stdlib.h>
#include<stdio.h>

int cifraMin(int numar)
{
  int nr=0, cmin=numar%10;
  while(numar)
  {
  if(numar%10<cmin)
   cmin=numar%10;
   numar=(int)numar/10;
   nr++;
  }
  return cmin;
}

int main(void)
{
 int numar;
 printf("\n numarul=");
 scanf("%d",&numar);
 
 printf("\n Numarul %d are cifra minima: %d \n", numar, cifraMin(numar));

return 0;


}
