#include <stdio.h>
int sumofallfactor(int n)
{
int sum = 0,i;
for(i=1;i<=n;i++)
{
if (n%i==0)
{
sum = sum + i;
}
}
return sum;
}
int main()
{
int n;
printf("Enter n for finding the sum of the series : " );
scanf("%d",&n);
int s=0;
int i;
for ( i=1;i<=n;i++)
{
s= s+ sumofallfactor(i);
}
printf("S = 1@ + 2@ + 3@ + 4@ + … + n@ = %d\n",s);
return 0;
}
