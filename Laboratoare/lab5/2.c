#include<stdlib.h>
#include<stdio.h>

int nrcifre(int numar)
{
  int nr=0;
  while(numar)
  {
   numar=(int)numar/10;
   nr++;
  }
  return nr;
}

int main(void)
{
 int numar;
 printf("\n numarul=");
 scanf("%d",&numar);
 
 printf("\n Numarul %d are %d cifre! \n", numar, nrcifre(numar));

return 0;


}
