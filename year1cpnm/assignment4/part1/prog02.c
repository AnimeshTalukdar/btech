#include<stdio.h>
void binary(int n)
{
if(n<=1)
{
printf("%d",n);
return;
}
else
{
int t=n%2;
binary(n/2);
printf("%d",t);
}
}
int main()
{
int n;
printf("Enter the number to find the binary equivalent of:");
scanf("%d",&n);
printf("Binary equivalent is:");
binary(n);
printf("\n");
return 0;
}
