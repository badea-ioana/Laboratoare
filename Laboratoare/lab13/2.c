#include <stdio.h>
#include <stdlib.h>

int palindrom(char *p)
{
char*q=p;
int ok=1;
 
while(*q!='\0')
q++;
q--; 

while(p<q)
{
if (*p!=*q)
{
ok=0;
break;
}
p++;
q--;
}
return ok;
}

int main()
{
char word[64];
printf("Introduceti un sir (cu spatii):\n");
scanf("%[^\n]s", word);

if(palindrom(word))
printf("Sirul este palindrom\n");
else
printf("Sirul NU este palindrom\n");

return 0;
}

