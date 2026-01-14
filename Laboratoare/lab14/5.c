#include <stdio.h>

float f(float x,float y)
{
return y+x+20;
}

int main()
{
float x[100],y[100],h,t;
int n, i;

printf("\nConditiile initiale [x0,y0]: ");
scanf("%f%f", &x[0], &y[0]);

printf("\nIntervalul de spatiere h: ");
scanf("%f", &h);

printf("\nTimpul maxim t: ");
scanf("%f", &t);

n=t/h;

printf("\n x\t y\n");

for(i=0;i<n;i++)
{
y[i+1]=y[i]+h*f(x[i],y[i]);
x[i+1]=x[i]+h;

printf("%0.3f\t%0.3f\n", x[i+1], y[i+1]);
}

    return 0;
}

