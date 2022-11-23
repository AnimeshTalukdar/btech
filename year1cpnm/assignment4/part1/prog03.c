#include <stdio.h>
int sum(int n)
{
if(n<10)
return n;
else 
return n%10+sum(n/10);
}
int main()
{
int n;
printf("Enter the number to find the sum of digits of:");
scanf("%d",&n);
printf("Sum of digits is: %d\n",sum(n));
return 0;
}
