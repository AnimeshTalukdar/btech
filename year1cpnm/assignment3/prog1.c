#include <stdio.h>
int main()
{
printf("Enter n to check divisibility of 1 to 100 : ");
int n; 
scanf("%d",&n);
int i;
for(i=1;i<=100;i++)
{
if(i%n==0)
{
printf("%d ",i);
}
}
printf("\n");
return 0;
}

