#include <stdio.h>
int main()
{
int n,i;
printf("Enter the number of numbers of fibonnaci series you would like to print :");
scanf("%d",&n);
int fibo[n];
if(n==1)
{
printf("%d\n",0);
return 0;
}
else if(n==2)
{
printf("%d %d\n",0,1);
return 0;
}
else
{
fibo[0]=0;
fibo[1]=1;
for(i=2;i<n;i++)
{
fibo[i]=fibo[i-1]+fibo[i-2];
}
for(i=0;i<n;i++)
{
printf("%d ",fibo[i]);
}
printf("\n");
return 0;
}
}

