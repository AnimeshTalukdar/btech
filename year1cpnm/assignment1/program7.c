#include<stdio.h>
int isarmstrong(int n)
{
int n1=n;
int t,sum=0;
while(n>0)
{
t=n%10;
sum=sum+(t*t*t);
n/=10;
}
if(sum==n1)
{
return 1;
}
else 
{
return 0;
}
}
int main()
{
printf("The armstrong numbers between 1 and 500 are: \n");
int i;
for(i=1;i<=500;i++)
{
if(isarmstrong(i)==1)
printf("%d\n",i);
}
return 0;
}
