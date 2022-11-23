#include <stdio.h>
int main()
{
int n;
printf("Enter the number to find the sum of digits:");
scanf("%d",&n);
int sum=0;
while(n>0)
{
sum=sum+n%10;
n/=10;
}
printf("Sum of digits is = %d\n",sum);
return 0;
}

