#include <stdio.h>
int main()
{
char s[500];
printf("Enter a string to be converted to integer:");
scanf("%[^\n]s",s);
int i;
int num=0;
for(i=0;s[i]!='\0';i++)
{
if(s[i]>='0'&&s[i]<='9')
{
int t=s[i]-'0';
num = num*10+t;
}
}
printf("The converted number is : %d\n",num);
return 0;
}
