#include<stdio.h>
#include<math.h>

int main()
{
float a=0;
float b=0;
float c=0;
float x1=0,x2=0;
float delta=0,delt=0;
printf("\nEcuatie de gradul doi ax^2+bx+c=0\n");
printf("\na:=");
scanf("%f",&a);
printf("\nb:=");
scanf("%f",&b);
printf("\nc:=");
scanf("%f",&c);
delt=b*b-4*a*c;
printf("\nDelta:=%f",delt);

if(delt<0)
{
	delta=sqrt(-delt);
	printf("\nSolutiile ecuatiei sunt x1,2=%f+-i%f",-b/(2*a),delta/(2*a));
}
if(delt>0)
{
	delta=sqrt(delt);
	x1=(-b+delta)/(2*a);
	x2=(-b-delta)/(2*a);
	printf("\nSolutiile ecuatiei sunt x1,2=%f,%f",x1,x2);
}
if(delt==0)
{
	delta=sqrt(delt);
	x1=(-b+delta)/(2*a);
	printf("\nSolutiile ecuatiei sunt x1,2=%f",x1);
}
getchar();

return 0;
}

