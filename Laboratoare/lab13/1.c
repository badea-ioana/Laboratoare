#include <stdio.h>
#include <stdlib.h>

int functie(char *p)
{
int i=0;
while(*p!='\0')
{
p=p+1;
i=i+1;
}
return i;
}

int main()
{
printf("Introduceti un sir de la tastatura fara spatii! \n");
char word[64];
scanf("%s", word);
printf("%s\n", word);
printf("%s", word);
printf("Numarul de caractere este:= %d", functie(word));
printf("\nIntroduceti un sir de la tastatura cu spatii! \n");

fflush(stdin);

scanf("%[^\n]s", word);
printf("%s", word);
printf("Numarul de caractere este:= %d", functie(word));
return 0;
}

