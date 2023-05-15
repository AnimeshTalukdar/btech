
#include<stdio.h>
int main()
{
int n;
printf("Enter n: ");
scanf("%d",&n);
int i,j;
for(i=1;i<=n/2+1;i++)
{
for(j=0;j<=i;j++)
{
if(j==i)
{
printf("+\n");
continue;
}
printf(" ");
}
}
for(i=n/2;i>=1;i--)
{
for(j=0;j<=i;j++)
{
if(j==i)
{
printf("+\n");
continue;
}
printf(" ");
}
}
return 0;
}






