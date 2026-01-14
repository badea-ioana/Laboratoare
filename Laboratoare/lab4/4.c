#include<stdio.h>
#include<stdlib.h>

int main()
{
 int n,m,p,q,i,j,A[20][20], B[20][20], C[20][20];
 
 printf("\n m=");
 scanf("%d",&m);
 printf("\n n=");
 scanf("%d",&n);
 
 for(i=0; i<m; i++)
   for(j=0; j<n; j++)
{
  printf("\nA[%d][%d]=",i,j);
  scanf("%d" ,&A[i][j]);
}

for(i=0; i<m; i++)
   for(j=0; j<n; j++)
{
  printf("\nB[%d][%d]=",i,j);
  scanf("%d",&B[i][j]);
}
 printf("\n produsul este:");
for(i=0; i<m; i++)
   for(j=0; j<n; j++)
{
 
  C[i][j]=A[i][j]*B[i][j];
  printf("\nC[%d][%d]=%d\n",i,j,C[i][j]);
}




return 0;
}

