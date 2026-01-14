#include <stdio.h>
#include <stdlib.h>

int nr_spatii(char *p)
{
int c=0;
while(*p!='\0')
{
if(*p==' ')
c++;
p++;
}
return c;
}

int main()
{
char word[64];
printf("Introduceti un sir (cu spatii):\n");
scanf("%[^\n]s",word);

printf("Numarul de spatii este:= %d\n", nr_spatii(word));
return 0;
}

