#include <stdio.h>
int main()
{
char s[500];
printf("Enter your name to print the initials of:");
scanf("%[^\n]s",s);
int i;
printf("%c",s[0]);
for(i=1;s[i]!='\0';i++)
{
if(s[i]==' ')
printf("%c",s[i+1]);
}
printf("\n");
return 0;
}

