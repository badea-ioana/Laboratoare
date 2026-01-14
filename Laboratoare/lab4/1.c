#include<stdio.h>
#include<stdlib.h>

int main()
{
 int n,m,i,j,a[20][20];
 
 printf("\n m=");
 scanf("%d",&m);
 printf("\n n=");
 scanf("%d",&n);
 
 for(i=0; i<m; i++)
   for(j=0; j<n; j++)
{
  printf("\na[%d][%d]=",i,j);
  scanf("%d" ,&a[i][j]);
}
for(i=0; i<m; i++)
   for(j=0; j<n; j++)
{
  printf("\na[%d][%d]=%d",i,j,a[i][j]);
 
}
return 0;
}

