#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,m,i,j,a[20][20], min=9999, max=-9999;
 printf("\nm=");
 scanf("%d",&m);
 printf("\nn=");
 scanf("%d",&n);
 
 for(int i=0; i<m; i++)
   for(int j=0; j<n; j++)
 {
 printf("\na[%d][%d]=",i,j);
 scanf("%d",&a[i][j]);
 } 
 
 for(int i=0; i<m; i++)
   for(int j=0; j<n; j++)
 {
 printf("\na[%d][%d]=%d",i,j,a[i][j]);

if(min>a[i][j]) min=a[i][j];

if(max<a[i][j])  max=a[i][j];
  } 
 printf("\nMinim=%d, maxim=%d \n", min,  max);

 
 return 0;
 

}
