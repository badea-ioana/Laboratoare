#include <stdio.h>
float f(float x,float y)
{
return y+x+20;
}

int main()
{
float x,y,h,t=10;
float y1;
int i,n;

printf("Valoarea dorita y(10)= ");
scanf("%f", &y1);

printf("Pasul h= ");
scanf("%f", &h);

y=-20;   
x=0;
n=t/h;

for(i=0;i<n;i++)
{
y=y+h*f(x, y);
x=x+h;
}

printf("Pentru y(10)= %0.3f, y0 aproximativ este: %0.3f\n", y1, y);

return 0;
}

