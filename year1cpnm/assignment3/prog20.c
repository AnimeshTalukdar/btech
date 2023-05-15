#include <stdio.h>
int main()
{
printf("Enter the number whose square-root you would like to find: ");
int n,i;
scanf("%d",&n);
int n1=n;
int oddno=1,sum=0;
while(sum<n)
{
sum = sum + oddno;
oddno +=2;
}
if(n==sum)
printf("The square root of %d is %d\n",n1,(oddno-1)/2);
else
printf("Could not find the square root\n");
return 0;
}


