#include <stdio.h>
int main()
{
char c[5];
printf("Enter the 5 encoded word: ");
scanf("%s",&c);
int i;
for(i=0;i<5;i++)
{
c[i]=(int)c[i] +30;
}
printf("The decoded word is: %s\n",c);
return 0;
}





