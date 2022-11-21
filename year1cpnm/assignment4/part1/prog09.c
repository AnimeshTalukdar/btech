#include <stdio.h>
int main()
{
char s[500];
printf("Enter a string to convert lower case to upper case:");
scanf("%[^\n]s",&s);
int i;
for(i=0;s[i]!='\0';i++)
{
if(s[i]>=97&&s[i]<=97+26)
s[i]=s[i]-32;
}
printf("%s\n",s);
return 0;
}




