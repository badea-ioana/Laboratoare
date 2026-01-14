#include<stdio.h>
#include<stdlib.h>

int main()
{
 int n,m,p,q,i,j,A[20][20], B[20][20], S[20][20], D[20][20];
 
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
 printf("\n Suma este:");
for(i=0; i<m; i++)
   for(j=0; j<n; j++)
{
 
  S[i][j]=A[i][j]+B[i][j];
  printf("\nS[%d][%d]=%d\n",i,j,S[i][j]);
 
}
printf("\nDiferenta este:");
for(i=0; i<m; i++)
   for(j=0; j<n; j++)
{
 
  D[i][j]=A[i][j]-B[i][j];
  printf("\nD[%d][%d]=%d\n",i,j,D[i][j]);
 
}




return 0;
}

