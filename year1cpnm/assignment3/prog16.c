#include <stdio.h>
int main()
{
int pos=0,neg=0,zero=0;
printf("Enter 100 numbers:");
int t,i;
for(i=0;i<100;i++)
{
scanf("%d",&t);
if(t>0)
pos++;
else if(t<0)
neg++;
else
zero++;
}
printf("Number of positive numbers: %d\nNumber of negative numbers: %d\nNumber of zeroes: %d\n",pos,neg,zero);
return 0;
}


