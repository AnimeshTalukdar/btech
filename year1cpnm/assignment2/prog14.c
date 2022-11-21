#include <stdio.h>
int main()
{
printf("Enter a number : \n");
int n,mul=1,i=0;
scanf("%d",&n);
int n1=n;
int noofdigits=0;
while(n>0)
{
n=n/10;
noofdigits=noofdigits+1;
}
for(i=0;i<noofdigits;i++)
{
n1=n1+mul;
mul=mul*10;
}
printf("No with 1 added to each of its digits : %d\n",n1);
return 0;
}

