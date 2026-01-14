#include<stdio.h>
#include<stdlib.h>

int main()
{
 int n,m,i,j,A[20][20], s=0, p=1;
 
 printf("\n m=");
 scanf("%d",&m);
 printf("\n n=");
 scanf("%d",&n);
 
 
 for(i=0; i<m; i++)
  for(j=0;j<n;j++)
{
  printf("\nA[%d][%d]=",i,j);
  scanf("%d" ,&A[i][j]);
}

 printf("\n suma elementelor de pe d. principala este:");
if(m==n)
{
  for(i=0; i<m; i++)
 {
 s+=A[i][i];
  }
  printf("s=%d\n",s);
  }
 else
 {
  printf("\n matricea trebuie sa fie patratica!!!\n");
}

printf("\n produsul elementelor de pe d. secundara este:");
if(m==n)
{
  for(i=0; i<n; i++)
 {
 p*=A[i][n-i-1];
  }
  printf("p=%d\n",p);
  }
 else
 {
  printf("\n matricea trebuie sa fie patratica!!!\n");
}

return 0;
}

