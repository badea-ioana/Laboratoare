#include <stdio.h>

int main()
{
float a,b,x,y,h,t,k;
float functie;

printf("\nConditiile initiale [x0,y0]: ");
scanf("%f%f", &a, &b);

printf("\nIntervalul de spatiere h: ");
scanf("%f", &h);

printf("\nTimpul maxim de evaluare [0,t]: ");
scanf("%f", &t);

x=a;
y=b;

printf("\n x\t y\n");

while(x<=t)
{
functie=-x*y; 
k=h*functie;
y=y+k;
x=x+h;

printf("%0.3f\t%0.3f\n", x, y);
}

return 0;
}

