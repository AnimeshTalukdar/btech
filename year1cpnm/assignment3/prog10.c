#include <stdio.h>
int isprime(int n)
{
int c=0;
int i;
for(i=1;i<=n;i++)
{
if(n%i==0)
c++;
}
if(c!=2)
return 0;
else
return 1;
}
int main()
{
int n;
printf("Enter the number to find the prime factors of : ");
scanf("%d",&n);
int i;
for(i=1;i<=n;i++)
{
if(n%i==0&&isprime(i))
{
printf("%d ",i);
}
}
printf("\n");
return 0;
}
