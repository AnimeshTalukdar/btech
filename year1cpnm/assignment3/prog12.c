#include<stdio.h>
int main()
{
int n;
printf("Enter the number to print the multiplication table of : ");
scanf("%d",&n);
int i;
for(i=1;i<11;i++)
{
printf("%d * %d = %d \n",n,i,n*i);
}
return 0;
}

