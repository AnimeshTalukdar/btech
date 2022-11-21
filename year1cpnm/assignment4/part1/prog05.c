#include <stdio.h>
int strlength(char* s)
{
int i=0;
while(s[i]!='\0')
i++;
return i;
}
int main()
{
char s[500];
printf("Enter a string to find the length of :");
scanf("%s",&s);
printf("Length of string is:%d\n",strlength(s));
return 0;
}
