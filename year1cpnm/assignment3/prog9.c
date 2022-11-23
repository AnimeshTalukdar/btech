#include <stdio.h>
int main()
{
printf("Prime numbers from 1 to 100:\n");
int i,j;
int c;
for(i=1;i<=100;i++)
{
c=0;
for(j=1;j<=i;j++)
{
if(i%j==0)
c++;
}
if(c==2)
{
printf("%d ",i);
}
}
printf("\n");
return 0;
}

