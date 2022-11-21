#include <stdio.h>
int main()
{
int n;
printf("How many numbers would you like to enter to find the rage of:");
scanf("%d",&n);
int t;
scanf("%d",&t);
int min=t,max=t;
n--;
while(n--)
{
scanf("%d",&t);
if(t<min)
min=t;
if(t>max)
max=t;
}
printf("Range is from %d to %d\n",min,max);
return 0;
}

