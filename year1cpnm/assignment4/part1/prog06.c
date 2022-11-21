#include <stdio.h>
int strlength(char* s)
{
int i=0;
while(s[i]!='\0')
i++;
return i;
}
void printreverse(char* s)
{
int l= strlength(s);
int i;
for(i=l-1;i>=0;i--)
{
printf("%c",s[i]);
}
}
int main()
{
printf("Enter the string to find the reverse of: ");
char s[500];
scanf("%s",&s);
int l= strlength(s);
printreverse(s);
printf("\n");
return 0;
}
