#include <stdio.h>
#include <stdlib.h>

int conversie(char *p)
{
int nr=0;

while (*p!='\0')
{
nr=nr*10+(*p-'0');
p++;
}

return nr;
}

int main()
{
char word[64];
int x;

printf("Introduceti un sir de caractere:\n");
scanf("%s", word);

x=conversie(word);

printf("Numarul intreg este:= %d\n", x);

return 0;
}

