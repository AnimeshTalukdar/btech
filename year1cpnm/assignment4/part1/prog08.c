#include <stdio.h>
int main()
{
char s[500];
printf("Enter a string to convert space to |:");
scanf("%[^\n]s",&s);
int i;
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
s[i]='|';
}
printf("%s\n",s);
return 0;
}
