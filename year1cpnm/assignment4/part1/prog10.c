#include <stdio.h>
int isvowel(char c)
{
if(c>=97&&c<=97+26)
c=c-32;
if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
return 1;
return 0;
}

int main()
{
char s[500];
printf("Enter a string to find number of occurances of two vowels:");
scanf("%[^\n]s",&s);
int i;
int count =0;
for(i=1;s[i]!='\0';i++)
{
if(isvowel(s[i-1])&&isvowel(s[i]))
count++;
}
printf("%d\n",count);
return 0;
}




