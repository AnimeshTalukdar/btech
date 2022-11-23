#include <stdio.h>
int main()
{
char s[500],s1[500];
printf("Enter a string to delete all occurances of 'the':");
scanf("%[^\n]s",&s);
int i;
int count =0;
if(s[0]!='\0'&&s[1]!='\0'&&s[2]!='\0')
{
int j=0;
for(i=0;s[i]!='\0';i++)
{
if(s[i+0]=='t'&&s[i+1]=='h'&&s[i+2]=='e')
{
i=i+2;
}
else
{
j++;
s1[j]=s[i];
}
}
printf("%s\n",s1);
}
else
printf("%s\n",s);
return 0;
}

